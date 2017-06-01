//
//  FRTableSectionViewModel+Private.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRTableSectionViewModel.h"

@protocol FRTableItemViewModelProtocol;

@interface FRTableSectionViewModel ()

@property (nonatomic, strong) NSMutableArray<__kindof id<FRTableItemViewModelProtocol>> *mutableRows;

@end
