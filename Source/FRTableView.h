//
//  FRTableView.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FRTableViewProtocol.h"

@interface FRTableView : UITableView<FRTableViewProtocol>

+ (instancetype) new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end
