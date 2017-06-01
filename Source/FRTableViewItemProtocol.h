//
//  FRTableViewItemProtocol.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FRTableItemViewModelProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FRTableViewItemProtocol <NSObject>

@required

@property (nullable, nonatomic, weak, readonly) __kindof id<FRTableItemViewModelProtocol> viewModel;

- (void)bindingTo:(__kindof id<FRTableItemViewModelProtocol>)viewModel;

@end

NS_ASSUME_NONNULL_END
