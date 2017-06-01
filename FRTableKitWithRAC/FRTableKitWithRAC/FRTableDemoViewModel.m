//
//  FRTableDemoViewModel.m
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRTableDemoViewModel.h"

@implementation FRTableDemoViewModel

@synthesize height = _height;

- (void)setModel:(FRDemoModel *)model {
    if (_model == model) {
        return;
    }
    _model = model;
}

@end
