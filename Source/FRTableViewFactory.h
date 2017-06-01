//
//  FRTableViewFactory.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FRTableItemViewModelProtocol.h"

@interface FRTableViewFactory : NSObject

- (__kindof id<FRTableItemViewModelProtocol>)tableViewModel:(__kindof id<FRTableViewModelProtocol>)tableViewModel
                                            cellForTableView:(UITableView *)tableView
                                                 atIndexPath:(NSIndexPath *)indexPath;

- (__kindof id<FRTableItemViewModelProtocol>)cellWithViewModel:(__kindof id<FRTableItemViewModelProtocol>)viewModel
                                                      tableView:(UITableView *)tableView;

- (__kindof id<FRTableItemViewModelProtocol>)tableViewModel:(__kindof id<FRTableViewModelProtocol>)tableViewModel
                                          headerForTableView:(UITableView *)tableView
                                                   atSection:(NSInteger)sectionIndex;

- (__kindof id<FRTableItemViewModelProtocol>)headerWithViewModel:(__kindof id<FRTableItemViewModelProtocol>)viewModel
                                                        tableView:(UITableView *)tableView;

- (__kindof id<FRTableItemViewModelProtocol>)tableViewModel:(__kindof id<FRTableItemViewModelProtocol>)tableViewModel
                                          footerForTableView:(UITableView *)tableView
                                                   atSection:(NSInteger)sectionIndex;

- (__kindof id<FRTableItemViewModelProtocol>)footerWithViewModel:(__kindof id<FRTableItemViewModelProtocol>)viewModel
                                                        tableView:(UITableView *)tableView;

@end
