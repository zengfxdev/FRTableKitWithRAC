//
//  FRTableViewFactory.m
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRTableViewFactory.h"
#import "FRTableViewItemProtocol.h"
#import "FRTableViewModelProtocol.h"

@implementation FRTableViewFactory

- (__kindof id<FRTableViewItemProtocol>)tableViewModel:(__kindof id<FRTableViewModelProtocol>)tableViewModel
                                       cellForTableView:(UITableView *)tableView
                                            atIndexPath:(NSIndexPath *)indexPath {
    __kindof id<FRTableItemViewModelProtocol> cellViewModel = [tableViewModel cellViewModelFromIndexPath:indexPath];
    if (cellViewModel) {
        return [self cellWithViewModel:cellViewModel tableView:tableView];
    }
    
    return nil;
}

- (__kindof id<FRTableViewItemProtocol>)cellWithViewModel:(__kindof id<FRTableItemViewModelProtocol>)viewModel
                                                 tableView:(UITableView *)tableView {
    Class viewClass = NSClassFromString(viewModel.reuseViewClass);
    NSBundle *bundle = [NSBundle bundleForClass:viewClass];
    NSString *xibPath = [bundle pathForResource:viewModel.reuseViewClass ofType:@"nib"];
    if (xibPath && xibPath.length > 0) {
        [tableView registerNib:[UINib nibWithNibName:viewModel.reuseViewClass bundle:bundle]
        forCellReuseIdentifier:viewModel.reuseIdentifier];
    } else {
        [tableView registerClass:viewClass forCellReuseIdentifier:viewModel.reuseIdentifier];
    }
    
    id<FRTableViewItemProtocol> cell = [tableView dequeueReusableCellWithIdentifier:viewModel.reuseIdentifier];
    if (!cell) {
        cell = [[viewClass alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:viewModel.reuseIdentifier];
    }
    [cell bindingTo:viewModel];
    
    return cell;
}

- (__kindof id<FRTableViewItemProtocol>)tableViewModel:(__kindof id<FRTableViewModelProtocol>)tableViewModel
                                     headerForTableView:(UITableView *)tableView
                                              atSection:(NSInteger)sectionIndex {
    __kindof id<FRTableItemViewModelProtocol> headerViewModel =
    [tableViewModel headerViewModelFromSection:sectionIndex];
    if (headerViewModel) {
        return [self hfWithViewModel:headerViewModel tableView:tableView];
    }
    return nil;
}

- (__kindof id<FRTableItemViewModelProtocol>)headerWithViewModel:(__kindof id<FRTableItemViewModelProtocol>)viewModel
                                                        tableView:(UITableView *)tableView {
    return [self hfWithViewModel:viewModel tableView:tableView];
}


- (__kindof id<FRTableViewItemProtocol>)tableViewModel:(__kindof id<FRTableViewModelProtocol>)tableViewModel
                                     footerForTableView:(UITableView *)tableView
                                              atSection:(NSInteger)sectionIndex {
    __kindof id<FRTableItemViewModelProtocol> footerViewModel =
    [tableViewModel footerViewModelFromSection:sectionIndex];
    if (footerViewModel) {
        return [self hfWithViewModel:footerViewModel tableView:tableView];
    }
    return nil;
}

- (__kindof id<FRTableItemViewModelProtocol>)footerWithViewModel:(__kindof id<FRTableItemViewModelProtocol>)viewModel
                                                        tableView:(UITableView *)tableView {
    return [self hfWithViewModel:viewModel tableView:tableView];
}


- (__kindof id<FRTableViewItemProtocol>)hfWithViewModel:(__kindof id<FRTableItemViewModelProtocol>)viewModel
                                               tableView:(UITableView *)tableView {
    Class viewClass = NSClassFromString(viewModel.reuseViewClass);
    [tableView registerClass:viewClass forHeaderFooterViewReuseIdentifier:viewModel.reuseIdentifier];
    
    id<FRTableViewItemProtocol> headerFooter =
    [tableView dequeueReusableHeaderFooterViewWithIdentifier:viewModel.reuseIdentifier];
    if (!headerFooter) {
        headerFooter = [[viewClass alloc] initWithReuseIdentifier:viewModel.reuseIdentifier];
    }
    [headerFooter bindingTo:viewModel];
    return headerFooter;
}


@end
