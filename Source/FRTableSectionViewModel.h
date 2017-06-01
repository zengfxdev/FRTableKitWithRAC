//
//  FRTableSectionViewModel.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FRTableSectionViewModelProtocol.h"

@interface FRTableSectionViewModel : NSObject<FRTableSectionViewModelProtocol>

+ (instancetype)section;

@end

@interface FRTableSectionWithHeadTitleViewModel : FRTableSectionViewModel

@end

@interface FRTableSectionWithFootTitleViewModel : FRTableSectionViewModel

@end

@interface FRTableSectionWithHeadFootTitleViewModel : FRTableSectionViewModel

@end

@interface FRTableSectionWithHeadViewViewModel : FRTableSectionViewModel

@end

@interface FRTableSectionWithFootViewViewModel : FRTableSectionViewModel

@end

@interface FRTableSectionWithHeadFootViewViewModel : FRTableSectionViewModel

@end
