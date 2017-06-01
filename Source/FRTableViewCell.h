//
//  FRTableViewCell.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FRTableViewItemProtocol.h"

@interface FRTableViewCell : UITableViewCell<FRTableViewItemProtocol>
+ (instancetype) new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
@end

/**
 *  @brief cell with style of UITableViewCellStyleDefault
 */
@interface FRTableViewDefaultCell : FRTableViewCell

@end

/**
 *  @brief cell with style of UITableViewCellStyleValue1
 */
@interface FRTableViewValue1Cell : FRTableViewCell

@end

/**
 *  @brief cell with style of UITableViewCellStyleValue2
 */
@interface FRTableViewValue2Cell : FRTableViewCell

@end

/**
 *  @brief cell with style of UITableViewCellStyleSubtitle
 */
@interface FRTableViewSubtitleCell : FRTableViewCell

@end
