//
//  FRTableViewDemoCell.m
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRTableViewDemoCell.h"
#import <Masonry/Masonry.h>

@interface FRTableViewDemoCell()

@property (nonatomic,strong) UILabel *titlelabel;
@property (nonatomic,strong) UILabel *desclabel;

@end

@implementation FRTableViewDemoCell

#pragma mark - life cycle

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        [self loadSubviews];
    }
    return self;
}

- (void)loadSubviews {
    self.selectionStyle = UITableViewCellSelectionStyleNone;
    
    self.titlelabel = [[UILabel alloc]init];
    self.titlelabel.numberOfLines = 0;
    self.titlelabel.textColor = [UIColor blackColor];
    self.titlelabel.font = [UIFont systemFontOfSize:16];
    [self.contentView addSubview:self.titlelabel];
    
    self.desclabel =[[UILabel alloc]init];
    self.desclabel.numberOfLines = 0;
    self.desclabel.textColor = [UIColor darkTextColor];
    self.desclabel.font = [UIFont systemFontOfSize:13];
    [self.contentView addSubview:self.desclabel];
    
    [self.titlelabel mas_makeConstraints:^(MASConstraintMaker *make){
        make.top.equalTo(@8);
        make.left.equalTo(@15);
        make.right.equalTo(@(-15));
    }];
    
    [self.desclabel mas_makeConstraints:^(MASConstraintMaker *make){
        make.left.equalTo(@15);
        make.top.equalTo(self.titlelabel.mas_bottom).offset(4);
        make.right.equalTo(@(-15));
        make.bottom.equalTo(@(-8)).priorityMedium();
    }];
}

-(void)bindingTo:(__kindof id<FRTableItemViewModelProtocol>)viewModel{
    
}

@end
