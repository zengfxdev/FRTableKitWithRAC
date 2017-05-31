//
//  FRTableSectionViewModelProtocol.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FRTableItemViewModelProtocol.h"

@protocol FRTableSectionViewModelProtocol <NSObject>

@required

@property (nonatomic, copy) NSArray<__kindof id<FRTableItemViewModelProtocol>> *rows;

@optional

@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, copy) NSString *footerTitle;

@property (nonatomic, strong) id<FRTableItemViewModelProtocol> headerViewModel;
@property (nonatomic, strong) id<FRTableItemViewModelProtocol> footerViewModel;

@end
