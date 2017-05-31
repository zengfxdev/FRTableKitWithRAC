//
//  FRTableViewModelProtocol.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FRTableViewModelProtocol;

@protocol FRTableViewModelProtocol <NSObject>

@required

- (instancetype)initWithViewModel:(__kindof id<FRTableViewModelProtocol>)viewModel;

@property (nullable, nonatomic, weak, readonly) __kindof id<FRTableViewModelProtocol> viewModel;

@property (nonatomic, copy, readonly) NSString *reuseIdentifier;

@property (nonatomic, copy, readonly) NSString *reuseViewClass;

@optional

@property (nonatomic, assign) CGFloat height;

@end

NS_ASSUME_NONNULL_END
