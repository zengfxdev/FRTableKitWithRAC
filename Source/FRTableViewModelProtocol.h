//
//  FRTableViewModelProtocol.h
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/5/31.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>
#import "FRTableItemViewModelProtocol.h"
#import "FRTableSectionViewModelProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FRTableViewModelProtocol <NSObject>

@required

#pragma mark - read data methods

- (nullable NSIndexPath *)indexPathForCellViewModel:(__kindof id<FRTableItemViewModelProtocol>)cellViewModel;

- (nullable __kindof id<FRTableItemViewModelProtocol>)cellViewModelFromIndexPath:(NSIndexPath *)indexPath;

- (NSInteger)sectionIndexForHeaderViewModel:(__kindof id<FRTableItemViewModelProtocol>)headerViewModel;

- (nullable __kindof id<FRTableItemViewModelProtocol>)headerViewModelFromSection:(NSInteger)sectionIndex;

- (NSInteger)sectionIndexForFooterViewModel:(__kindof id<FRTableItemViewModelProtocol>)footerViewModel;

- (nullable __kindof id<FRTableItemViewModelProtocol>)footerViewModelFromSection:(NSInteger)sectionIndex;

#pragma mark - add cells methods

/**
 *  @brief 添加cellViewModel到最后一个section，如果不存在section默认添加一个section
 *
 *  @param cellViewModel 同一个cellViewModel不可添加多次
 */
- (void)addCellViewModel:(__kindof id<FRTableItemViewModelProtocol>)cellViewModel;

/**
 *  @brief 添加cellViewModel到最后一个section，如果不存在section默认添加一个section
 *
 *  @param cellViewModel 同一个cellViewModel不可添加多次
 *  @param animation      animation
 */
- (void)addCellViewModel:(__kindof id<FRTableItemViewModelProtocol>)cellViewModel
        withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 添加cellViewModel
 *
 *  @param cellViewModel 同一个cellViewModel不可添加多次
 *  @param sectionIndex   sectionIndex
 */
- (void)addCellViewModel:(__kindof id<FRTableItemViewModelProtocol>)cellViewModel toSection:(NSUInteger)sectionIndex;

/**
 *  @brief 添加cellViewModel
 *
 *  @param cellViewModel 同一个cellViewModel不可添加多次
 *  @param sectionIndex   sectionIndex
 *  @param animation      animation
 */
- (void)addCellViewModel:(__kindof id<FRTableItemViewModelProtocol>)cellViewModel
               toSection:(NSUInteger)sectionIndex
        withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 添加cellViewModels到最后一个section，如果不存在section默认添加一个section
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 */
- (void)addCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels;

/**
 *  @brief 添加cellViewModel到最后一个section，如果不存在section默认添加一个section
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param animation      animation
 */
- (void)addCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
         withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 添加cellViewModels到最后一个section，如果不存在section默认添加一个section
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param sectionIndex   sectionIndex
 */
- (void)addCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                toSection:(NSUInteger)sectionIndex;

/**
 *  @brief 添加cellViewModels
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param sectionIndex   sectionIndex
 *  @param animation      animation
 */
- (void)addCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                toSection:(NSUInteger)sectionIndex
         withRowAnimation:(UITableViewRowAnimation)animation;

#pragma mark - insert cells methods

/**
 *  @brief 插入cellViewModel到最后一个section，如果不存在section默认添加一个section
 *
 *  @param cellViewModel 同一个cellViewModel不可添加多次
 *  @param index         index
 */
- (void)insertCellViewModel:(__kindof id<FRTableItemViewModelProtocol>)cellViewModel atIndex:(NSUInteger)index;

/**
 *  @brief 插入cellViewModel到最后一个section，如果不存在section默认添加一个section
 *
 *  @param cellViewModel 同一个cellViewModel不可添加多次
 *  @param index         index
 *  @param animation     animation
 */
- (void)insertCellViewModel:(__kindof id<FRTableItemViewModelProtocol>)cellViewModel
                    atIndex:(NSUInteger)index
           withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 插入cellViewModel
 *
 *  @param cellViewModel 同一个cellViewModel不可添加多次
 *  @param index         index
 *  @param sectionIndex  sectionIndex
 */
- (void)insertCellViewModel:(__kindof id<FRTableItemViewModelProtocol>)cellViewModel
                    atIndex:(NSUInteger)index
                  inSection:(NSUInteger)sectionIndex;

/**
 *  @brief 插入cellViewModel
 *
 *  @param cellViewModel 同一个cellViewModel不可添加多次
 *  @param index         index
 *  @param sectionIndex  sectionIndex
 *  @param animation     animation
 */
- (void)insertCellViewModel:(__kindof id<FRTableItemViewModelProtocol>)cellViewModel
                    atIndex:(NSUInteger)index
                  inSection:(NSUInteger)sectionIndex
           withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 插入cellViewModels到最后一个section，如果不存在section默认添加一个section
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param index          index
 */
- (void)insertCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                     atIndex:(NSUInteger)index;

/**
 *  @brief 插入cellViewModels到最后一个section，如果不存在section默认添加一个section
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param index          index
 *  @param animation      animation
 */
- (void)insertCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                     atIndex:(NSUInteger)index
            withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 插入cellViewModels
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param index          index
 *  @param sectionIndex   sectionIndex
 */
- (void)insertCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                     atIndex:(NSUInteger)index
                   inSection:(NSUInteger)sectionIndex;

/**
 *  @brief 插入cellViewModels到最后一个section，如果不存在section默认添加一个section
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param index          index
 *  @param animation      animation
 */
- (void)insertCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                     atIndex:(NSUInteger)index
               withAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 插入cellViewModels
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param index          index
 *  @param sectionIndex   sectionIndex
 *  @param animation      animation
 */
- (void)insertCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                     atIndex:(NSUInteger)index
                   inSection:(NSUInteger)sectionIndex
            withRowAnimation:(UITableViewRowAnimation)animation;

#pragma mark - reload cells methods

/**
 *  @brief 重载cellViewModel
 *
 *  @param index         index
 *  @param sectionIndex  sectionIndex
 */
- (void)reloadCellViewModelAtIndex:(NSUInteger)index inSection:(NSInteger)sectionIndex;

/**
 *  @brief 重载cellViewModel
 *
 *  @param index         index
 *  @param sectionIndex  sectionIndex
 *  @param animation     animation
 */
- (void)reloadCellViewModelAtIndex:(NSUInteger)index
                         inSection:(NSInteger)sectionIndex
                  withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 重载cellViewModels
 *
 *  @param range         range
 *  @param sectionIndex  sectionIndex
 *  @param animation     animation
 */
- (void)reloadCellViewModelsAtRange:(NSRange)range inSection:(NSInteger)sectionIndex;

/**
 *  @brief 重载cellViewModels
 *
 *  @param range         range
 *  @param sectionIndex  sectionIndex
 *  @param animation     animation
 */
- (void)reloadCellViewModelsAtRange:(NSRange)range
                          inSection:(NSInteger)sectionIndex
                   withRowAnimation:(UITableViewRowAnimation)animation;

#pragma mark - remove cells methods

/**
 *  @brief 移除最后一个section的最后一个cellViewModel
 */
- (void)removeLastCellViewModel;

/**
 *  @brief 移除最后一个section的最后一个cellViewModel
 */
- (void)removeLastCellViewModelWithRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 移除指定section的最后一个cellViewModel
 */
- (void)removeLastCellViewModelFromSection:(NSUInteger)sectionIndex;

/**
 *  @brief 移除指定section的最后一个cellViewModel
 */
- (void)removeLastCellViewModelFromSection:(NSUInteger)sectionIndex withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 移除最后一个section的指定cellViewModel
 */
- (void)removeCellViewModelAtIndex:(NSUInteger)index;

/**
 *  @brief 移除最后一个section的指定cellViewModel
 */
- (void)removeCellViewModelAtIndex:(NSUInteger)index withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 移除指定section的指定cellViewModel
 */
- (void)removeCellViewModelAtIndex:(NSUInteger)index fromSection:(NSUInteger)sectionIndex;

/**
 *  @brief 移除指定section的指定cellViewModel
 */
- (void)removeCellViewModelAtIndex:(NSUInteger)index
                       fromSection:(NSUInteger)sectionIndex
                  withRowAnimation:(UITableViewRowAnimation)animation;

#pragma mark - replace cells methods

/**
 *  @brief 替换最后一个section指定的index之后的cellViewModels
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param index          index
 */
- (void)replaceCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                    fromIndex:(NSUInteger)index;

/**
 *  @brief 替换最后一个section指定的index之后的cellViewModels
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param index          index
 *  @param animation      animation
 */
- (void)replaceCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                    fromIndex:(NSUInteger)index
             withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 替换指定section指定的index之后的cellViewModels
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param index          index
 *  @param sectionIndex   sectionIndex
 */
- (void)replaceCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                    fromIndex:(NSUInteger)index
                    inSection:(NSUInteger)sectionIndex;

/**
 *  @brief 替换指定section指定的index之后的cellViewModels
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param index          index
 *  @param sectionIndex   sectionIndex
 *  @param animation      animation
 */
- (void)replaceCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                    fromIndex:(NSUInteger)index
                    inSection:(NSUInteger)sectionIndex
             withRowAnimation:(UITableViewRowAnimation)animation;

#pragma mark - add section methods

/**
 *  @brief 添加sectionViewModel
 *
 *  @param sectionViewModel 同一个sectionViewModel不可添加多次
 */
- (void)addSectionViewModel:(id<FRTableSectionViewModelProtocol>)sectionViewModel;

/**
 *  @brief 添加sectionViewModel
 *
 *  @param sectionViewModel 同一个sectionViewModel不可添加多次
 *  @param animation        animation
 */
- (void)addSectionViewModel:(id<FRTableSectionViewModelProtocol>)sectionViewModel
           withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 添加sectionViewModel
 *
 *  @param sectionViewModel 同一个sectionViewModel不可添加多次
 *  @param cellViewModels   同一个cellViewModel不可添加多次
 */
- (void)addSectionViewModel:(id<FRTableSectionViewModelProtocol>)sectionViewModel
         withCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels;

/**
 *  @brief 添加sectionViewModel
 *
 *  @param sectionViewModel 同一个sectionViewModel不可添加多次
 *  @param cellViewModels   同一个cellViewModel不可添加多次
 *  @param animation        animation
 */
- (void)addSectionViewModel:(id<FRTableSectionViewModelProtocol>)sectionViewModel
         withCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
           withRowAnimation:(UITableViewRowAnimation)animation;

#pragma mark - insert section methods

/**
 *  @brief 插入sectionViewModel
 *
 *  @param sectionViewModel 同一个sectionViewModel不可添加多次
 *  @param index            index
 */
- (void)insertSectionViewModel:(id<FRTableSectionViewModelProtocol>)sectionViewModel atIndex:(NSUInteger)index;

/**
 *  @brief 插入sectionViewModel
 *
 *  @param sectionViewModel 同一个sectionViewModel不可添加多次
 *  @param index            index
 *  @param animation        animation
 */
- (void)insertSectionViewModel:(id<FRTableSectionViewModelProtocol>)sectionViewModel
                       atIndex:(NSUInteger)index
              withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 插入sectionViewModel
 *
 *  @param sectionViewModel 同一个sectionViewModel不可添加多次
 *  @param cellViewModels   同一个cellViewModel不可添加多次
 *  @param index            index
 */
- (void)insertSectionViewModel:(id<FRTableSectionViewModelProtocol>)sectionViewModel
            withCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                       atIndex:(NSUInteger)index;

/**
 *  @brief 插入sectionViewModel到指定index
 *
 *  @param sectionViewModel 同一个sectionViewModel不可添加多次
 *  @param cellViewModels   同一个cellViewModel不可添加多次
 *  @param index            index
 *  @param animation        animation
 */
- (void)insertSectionViewModel:(id<FRTableSectionViewModelProtocol>)sectionViewModel
            withCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                       atIndex:(NSUInteger)index
              withRowAnimation:(UITableViewRowAnimation)animation;

#pragma mark - reload section methods

/**
 *  @brief 重载section
 *
 *  @param index        index
 */
- (void)reloadSectionAtIndex:(NSUInteger)index;

/**
 *  @brief 重载cellViewModel
 *
 *  @param index         index
 *  @param sectionIndex  sectionIndex
 *  @param animation     animation
 */
- (void)reloadSectionAtIndex:(NSUInteger)index withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 重载cellViewModels
 *
 *  @param range         range
 *  @param sectionIndex  sectionIndex
 *  @param animation     animation
 */
- (void)reloadSectionsAtRange:(NSRange)range;

/**
 *  @brief 重载cellViewModels
 *
 *  @param range         range
 *  @param sectionIndex  sectionIndex
 *  @param animation     animation
 */
- (void)reloadSectionsAtRange:(NSRange)range withRowAnimation:(UITableViewRowAnimation)animation;

#pragma mark - remove section methods

/**
 *  @brief 移除指定的section
 *
 *  @param index     index
 */
- (void)removeSectionAtIndex:(NSUInteger)index;

/**
 *  @brief 移除所有的的section
 */
- (void)removeAllSections;

/**
 *  @brief 移除指定的section
 *
 *  @param index     index
 *  @param animation animation
 */
- (void)removeSectionAtIndex:(NSUInteger)index withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 移除所有的的section
 *
 *  @param animation animation
 */
- (void)removeAllSectionsWithRowAnimation:(UITableViewRowAnimation)animation;

#pragma mark - replace section methods

/**
 *  @brief 重置最后的section，替换该section下所有的cellViewModel
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 */
- (void)replaceSectionWithCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels;

/**
 *  @brief 重置最后的section，替换该section下所有的cellViewModel
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param animation      animation
 */
- (void)replaceSectionWithCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                        withRowAnimation:(UITableViewRowAnimation)animation;

/**
 *  @brief 重置指定的section，替换该section下所有的cellViewModel
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param sectionIndex   sectionIndex
 */
- (void)replaceSectionWithCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                               atSection:(NSUInteger)sectionIndex;

/**
 *  @brief 重置指定的section，替换该section下所有的cellViewModel
 *
 *  @param cellViewModels 同一个cellViewModel不可添加多次
 *  @param sectionIndex   sectionIndex
 *  @param animation      animation
 */
- (void)replaceSectionWithCellViewModels:(NSArray<__kindof id<FRTableItemViewModelProtocol>> *)cellViewModels
                               atSection:(NSUInteger)sectionIndex
                        withRowAnimation:(UITableViewRowAnimation)animation;


#pragma mark - action signals

@property (nonatomic, strong, readonly) RACSignal *willDisplayCellSignal;
@property (nonatomic, strong, readonly) RACSignal *willDisplayHeaderViewSignal;
@property (nonatomic, strong, readonly) RACSignal *willDisplayFooterViewSignal;
@property (nonatomic, strong, readonly) RACSignal *didEndDisplayingCellSignal;
@property (nonatomic, strong, readonly) RACSignal *didEndDisplayingHeaderViewSignal;
@property (nonatomic, strong, readonly) RACSignal *didEndDisplayingFooterViewSignal;
@property (nonatomic, strong, readonly) RACSignal *didHighlightRowAtIndexPathSignal;
@property (nonatomic, strong, readonly) RACSignal *didUnhighlightRowAtIndexPathSignal;
@property (nonatomic, strong, readonly) RACSignal *didSelectRowAtIndexPathSignal;
@property (nonatomic, strong, readonly) RACSignal *didDeselectRowAtIndexPathSignal;
@property (nonatomic, strong, readonly) RACSignal *willBeginEditingRowAtIndexPathSignal;
@property (nonatomic, strong, readonly) RACSignal *didEndEditingRowAtIndexPathSignal;

@optional

@end

NS_ASSUME_NONNULL_END
