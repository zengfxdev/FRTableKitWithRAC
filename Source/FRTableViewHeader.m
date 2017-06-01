//
//  FRTableViewHeader.m
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRTableViewHeader.h"

@interface FRTableViewHeader ()

@property (nullable, nonatomic, weak, readwrite) __kindof id<FRTableItemViewModelProtocol> viewModel;

@end

@implementation FRTableViewHeader

- (void)bindingTo:(__kindof id<FRTableItemViewModelProtocol>)viewModel {
    NSParameterAssert(viewModel);
    self.viewModel = viewModel;
}

@end

