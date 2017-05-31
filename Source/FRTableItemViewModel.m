//
//  FRTableItemViewModel.m
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRTableItemViewModel.h"

@implementation FRTableItemViewModel{
    NSString *_reuseIdentifier;
    NSString *_reuseViewClass;
}

@synthesize viewModel = _viewModel;
@synthesize height = _height;

#pragma mark - LPDTableItemViewModelProtocol

- (instancetype)initWithViewModel:(__kindof id<FRTableViewModelProtocol>)viewModel {
    self = [super init];
    if (self) {
        _viewModel = viewModel;
    }
    return self;
}

- (NSString *)reuseIdentifier {
    return _reuseIdentifier ?: (_reuseIdentifier =
                                [NSString stringWithFormat:@"reusable-%@-%@",
                                 [self reuseViewClass],
                                 NSStringFromClass(self.class)]);
}

- (NSString *)reuseViewClass {
    return _reuseViewClass ?: (_reuseViewClass =
                               [[NSStringFromClass(self.class)
                                 stringByReplacingOccurrencesOfString:@"FRTable" withString:@"FRTableView"]
                                stringByReplacingOccurrencesOfString:@"ViewModel" withString:@""]);
}


@end
