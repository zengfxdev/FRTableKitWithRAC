//
//  FRTableViewFooter.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "FRTableViewItemProtocol.h"

@interface FRTableViewFooter : UITableViewHeaderFooterView<FRTableViewItemProtocol>
+ (instancetype) new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
@end
