//
//  FRTableView.m
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRTableView.h"
#import "FRTableViewModel.h"
#import "FRTableViewModel+Private.h"

@interface FRTableView ()

@property (nullable, nonatomic, weak, readwrite) __kindof id<FRTableViewModelProtocol> viewModel;

@end

@implementation FRTableView

- (void)bindingTo:(__kindof id<FRTableViewModelProtocol>)viewModel {
    NSParameterAssert(viewModel);
    
    self.sectionHeaderHeight = 0.1;
    self.sectionFooterHeight = 0.1;
    
    self.viewModel = viewModel;
    
    FRTableViewModel *tableViewModel = (FRTableViewModel*)self.viewModel;
    super.delegate = tableViewModel.delegate;
    super.dataSource = tableViewModel.dataSource;
    
    @weakify(self);
    [[[tableViewModel.reloadDataSignal takeUntil:[self rac_signalForSelector:@selector(removeFromSuperview)]]
      deliverOnMainThread] subscribeNext:^(RACTuple *tuple) {
        @strongify(self);
        [self reloadData];
    }];
    
    [[[tableViewModel.insertSectionsSignal takeUntil:[self rac_signalForSelector:@selector(removeFromSuperview)]]
      deliverOnMainThread] subscribeNext:^(RACTuple *tuple) {
        @strongify(self);
        UITableViewRowAnimation animation = [tuple.second integerValue];
        if (animation == UITableViewRowAnimationNone) {
            [self reloadData];
        } else {
            [self insertSections:tuple.first withRowAnimation:animation];
        }
    }];
    
    [[[tableViewModel.deleteSectionsSignal takeUntil:[self rac_signalForSelector:@selector(removeFromSuperview)]]
      deliverOnMainThread] subscribeNext:^(RACTuple *tuple) {
        @strongify(self);
        UITableViewRowAnimation animation = [tuple.second integerValue];
        if (animation == UITableViewRowAnimationNone) {
            [self reloadData];
        } else {
            [self deleteSections:tuple.first withRowAnimation:animation];
        }
    }];
    
    [[[tableViewModel.replaceSectionsSignal takeUntil:[self rac_signalForSelector:@selector(removeFromSuperview)]]
      deliverOnMainThread] subscribeNext:^(RACTuple *tuple) {
        @strongify(self);
        UITableViewRowAnimation animation = [tuple.second integerValue];
        if (animation == UITableViewRowAnimationNone) {
            [self reloadData];
        } else {
            NSIndexSet *indexSet = tuple.first;
            UITableViewRowAnimation removeAnimation = animation;
            if (animation == UITableViewRowAnimationRight) {
                removeAnimation = UITableViewRowAnimationLeft;
            } else if (animation == UITableViewRowAnimationLeft) {
                removeAnimation = UITableViewRowAnimationRight;
            } else if (animation == UITableViewRowAnimationTop) {
                removeAnimation = UITableViewRowAnimationBottom;
            } else if (animation == UITableViewRowAnimationBottom) {
                removeAnimation = UITableViewRowAnimationTop;
            }
            
            [self beginUpdates];
            [self deleteSections:indexSet withRowAnimation:removeAnimation];
            [self insertSections:indexSet withRowAnimation:animation];
            [self endUpdates];
        }
    }];
    
    [[[tableViewModel.reloadSectionsSignal takeUntil:[self rac_signalForSelector:@selector(removeFromSuperview)]]
      deliverOnMainThread] subscribeNext:^(RACTuple *tuple) {
        @strongify(self);
        UITableViewRowAnimation animation = [tuple.second integerValue];
        if (animation == UITableViewRowAnimationNone) {
            [self reloadData];
        } else {
            [self reloadSections:tuple.first withRowAnimation:animation];
        }
    }];
    
    [[[tableViewModel.insertRowsAtIndexPathsSignal takeUntil:[self rac_signalForSelector:@selector(removeFromSuperview)]]
      deliverOnMainThread] subscribeNext:^(RACTuple *tuple) {
        @strongify(self);
        UITableViewRowAnimation animation = [tuple.second integerValue];
        if (animation == UITableViewRowAnimationNone) {
            [self reloadData];
        } else {
            [self insertRowsAtIndexPaths:tuple.first withRowAnimation:animation];
        }
    }];
    
    [[[tableViewModel.deleteRowsAtIndexPathsSignal takeUntil:[self rac_signalForSelector:@selector(removeFromSuperview)]]
      deliverOnMainThread] subscribeNext:^(RACTuple *tuple) {
        @strongify(self);
        NSArray<NSIndexPath *> *indexPaths = tuple.first;
        if (indexPaths.count > 0) {
            UITableViewRowAnimation animation = [tuple.second integerValue];
            if (animation == UITableViewRowAnimationNone) {
                [self reloadData];
            } else {
                [self deleteRowsAtIndexPaths:tuple.first withRowAnimation:animation];
            }
        }
    }];
    
    [[[tableViewModel.reloadRowsAtIndexPathsSignal takeUntil:[self rac_signalForSelector:@selector(removeFromSuperview)]]
      deliverOnMainThread] subscribeNext:^(RACTuple *tuple) {
        @strongify(self);
        UITableViewRowAnimation animation = [tuple.second integerValue];
        if (animation == UITableViewRowAnimationNone) {
            [self reloadData];
        } else {
            [self reloadRowsAtIndexPaths:tuple.first withRowAnimation:animation];
        }
    }];
    
    [[[tableViewModel.replaceRowsAtIndexPathsSignal takeUntil:[self rac_signalForSelector:@selector(removeFromSuperview)]]
      deliverOnMainThread] subscribeNext:^(RACTuple *tuple) {
        @strongify(self);
        UITableViewRowAnimation animation = [tuple.third integerValue];
        if (animation == UITableViewRowAnimationNone) {
            [self reloadData];
        } else {
            NSArray *oldIndexPaths = tuple.first;
            NSArray *newIndexPaths = tuple.second;
            UITableViewRowAnimation removeAnimation = animation;
            if (animation == UITableViewRowAnimationRight) {
                removeAnimation = UITableViewRowAnimationLeft;
            } else if (animation == UITableViewRowAnimationLeft) {
                removeAnimation = UITableViewRowAnimationRight;
            } else if (animation == UITableViewRowAnimationTop) {
                removeAnimation = UITableViewRowAnimationBottom;
            } else if (animation == UITableViewRowAnimationBottom) {
                removeAnimation = UITableViewRowAnimationTop;
            }
            
            [self beginUpdates];
            [self deleteRowsAtIndexPaths:oldIndexPaths withRowAnimation:removeAnimation];
            [self insertRowsAtIndexPaths:newIndexPaths withRowAnimation:animation];
            [self endUpdates];
        }
    }];
}

- (void)setDelegate:(id<UITableViewDelegate>)delegate {
    [self.viewModel setScrollViewDelegate:delegate];
}

- (void)setDataSource:(id<UITableViewDataSource>)dataSource {
    // do nothing
}

@end
