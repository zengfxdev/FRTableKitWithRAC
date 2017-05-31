//
//  FRTableViewProtocol.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FRTableViewModelProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FRTableViewProtocol <NSObject>

@required

@property (nullable, nonatomic, weak, readonly) __kindof id<FRTableViewModelProtocol> viewModel;

- (void)bindingTo:(__kindof id<FRTableViewModelProtocol>)viewModel;

@end

NS_ASSUME_NONNULL_END
