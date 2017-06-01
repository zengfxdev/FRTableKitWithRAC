//
//  FRTableSectionViewModel.m
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRTableSectionViewModel.h"
#import "FRTableSectionViewModel+Private.h"

@implementation FRTableSectionViewModel

+ (instancetype)section {
    return [[self alloc] init];
}

- (NSMutableArray<__kindof id<FRTableItemViewModelProtocol>> *)mutableRows {
    return _mutableRows ?: (_mutableRows = [NSMutableArray array]);
}

- (NSArray<__kindof id<FRTableItemViewModelProtocol>> *)rows {
    return [_mutableRows copy];
}

- (void)setRows:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)rows {
    if (rows) {
        if ([rows isKindOfClass:[NSMutableArray class]]) {
            _mutableRows = (NSMutableArray *)rows;
        } else {
            _mutableRows = [rows mutableCopy];
        }
    } else {
        _mutableRows = [NSMutableArray array];
    }
}

@end

@implementation FRTableSectionWithHeadTitleViewModel

@synthesize headerTitle = _headerTitle;

@end

@implementation FRTableSectionWithFootTitleViewModel

@synthesize footerTitle = _footerTitle;

@end

@implementation FRTableSectionWithHeadFootTitleViewModel

@synthesize headerTitle = _headerTitle;
@synthesize footerTitle = _footerTitle;

@end

@implementation FRTableSectionWithHeadViewViewModel

@synthesize headerViewModel = _headerViewModel;

@end

@implementation FRTableSectionWithFootViewViewModel

@synthesize footerViewModel = _footerViewModel;

@end

@implementation FRTableSectionWithHeadFootViewViewModel

@synthesize headerViewModel = _headerViewModel;
@synthesize footerViewModel = _footerViewModel;

@end
