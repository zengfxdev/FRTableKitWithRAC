//
//  FRTableViewCell.m
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRTableViewCell.h"
#import <ReactiveObjC/ReactiveObjC.h>
#import "FRTableCellViewModel.h"

@interface FRTableViewCell ()

@property (nullable, nonatomic, weak, readwrite) __kindof id<FRTableItemViewModelProtocol> viewModel;

@end

@implementation FRTableViewCell

- (void)bindingTo:(__kindof id<FRTableItemViewModelProtocol>)viewModel {
    NSParameterAssert(viewModel);
    
    self.viewModel = viewModel;
    FRTableCellViewModel *cellViewModel = viewModel;
    self.textLabel.text = cellViewModel.text;
    self.detailTextLabel.text = cellViewModel.detail;
    self.imageView.image = cellViewModel.image;
    self.accessoryType = cellViewModel.accessoryType;
    self.selectionStyle = cellViewModel.selectionStyle;
    if (cellViewModel.attributedText) {
        self.textLabel.attributedText = cellViewModel.attributedText;
    }
}


-(void)prepareForReuse {
    [super prepareForReuse];
    self.textLabel.text = nil;
    self.detailTextLabel.text = nil;
    self.imageView.image = nil;
}

@end

@implementation FRTableViewDefaultCell

@end

@implementation FRTableViewValue1Cell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    return [super initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:reuseIdentifier];
}

@end

@implementation FRTableViewValue2Cell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    return [super initWithStyle:UITableViewCellStyleValue2 reuseIdentifier:reuseIdentifier];
}

@end

@implementation FRTableViewSubtitleCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    return [super initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:reuseIdentifier];
}

@end

