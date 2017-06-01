//
//  FRTableDemoViewModel.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FRTableCellViewModel.h"
#import "FRDemoModel.h"

@interface FRTableDemoViewModel : FRTableCellViewModel

@property (nonatomic,strong) FRDemoModel *model;

@end
