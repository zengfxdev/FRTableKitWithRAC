//
//  FRTableCellViewModel.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRTableItemViewModel.h"

@interface FRTableCellViewModel : FRTableItemViewModel

+ (instancetype) new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@property (nonatomic, strong) UIImage *image;

@property (nonatomic, copy) NSString *text;

@property (nonatomic, copy) NSString *detail;

@property (nonatomic) UITableViewCellAccessoryType accessoryType;

@property (nonatomic) UITableViewCellSelectionStyle   selectionStyle;

@property (nonatomic, strong) NSMutableAttributedString *attributedText;

@end

@interface FRTableDefaultCellViewModel : FRTableCellViewModel

@end

@interface FRTableValue1CellViewModel : FRTableCellViewModel

@end

@interface FRTableValue2CellViewModel : FRTableCellViewModel

@end

@interface FRTableSubtitleCellViewModel : FRTableCellViewModel

@end
