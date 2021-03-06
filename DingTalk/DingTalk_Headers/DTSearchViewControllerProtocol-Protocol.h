//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTSearchController, DTTableViewDataSource, NSIndexPath, NSString, UITableViewCell, UIViewController;
@protocol DTSearchViewControllerProtocol;

@protocol DTSearchViewControllerProtocol <NSObject>
@property(nonatomic) long long searchViewTabType;
@property(nonatomic) __weak DTSearchController *searchController;
- (NSIndexPath *)indexForCell:(UITableViewCell *)arg1;
- (void)searchTextDidSearch:(NSString *)arg1;

@optional
- (void)searchConfirmButtonDidClick:(DTSearchController *)arg1;
- (void)searchHistoryDidCleanWithType:(unsigned long long)arg1;
- (void)searchHistoryDidUpdatedWithType:(unsigned long long)arg1;
- (void)searchControllerWillHide:(DTSearchController *)arg1;
- (void)searchControllerWillShow:(DTSearchController *)arg1;
- (DTTableViewDataSource *)searchViewControllerDataSourceWithSearchText:(NSString *)arg1;
- (void)dataSourceHasUpdatedWithSearchViewController:(UIViewController<DTSearchViewControllerProtocol> *)arg1 searchText:(NSString *)arg2;
- (NSString *)searchViewControllerTitleWithSearchText:(NSString *)arg1;
- (void)titleHasUpdatedWithSearchViewController:(UIViewController<DTSearchViewControllerProtocol> *)arg1 searchText:(NSString *)arg2;
- (void)searchTextDidEndEditting;
- (void)searchTextDidBeginEditting;
@end

