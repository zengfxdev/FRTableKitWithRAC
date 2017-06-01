//
//  FRTableViewFooter.m
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRTableViewFooter.h"

@interface FRTableViewFooter ()

@property (nullable, nonatomic, weak, readwrite) __kindof id<FRTableItemViewModelProtocol> viewModel;

@end

@implementation FRTableViewFooter

- (void)bindingTo:(__kindof id<FRTableItemViewModelProtocol>)viewModel {
    NSParameterAssert(viewModel);
    self.viewModel = viewModel;
}

@end
