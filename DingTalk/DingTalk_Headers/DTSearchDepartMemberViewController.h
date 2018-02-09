//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTPickViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTEmptyResultView, DTLoadMoreController, DTPickIdentifier, DTPickNavigationController, DTSearchBar, NSArray, NSString, UIActivityIndicatorView, UITableView, UIViewController;

@interface DTSearchDepartMemberViewController : DTPickViewController <UITableViewDelegate, UITableViewDataSource, DTLoadMoreDelegate, UISearchBarDelegate>
{
    DTPickIdentifier *_identifier;
    DTSearchBar *_contactSearchBar;
    DTPickNavigationController *_pickVCNavigation;
    UIViewController *_containerVC;
    UITableView *_contactTableView;
    NSArray *_contactDataSource;
    long long _keyboardHeight;
    DTLoadMoreController *_loadMoreController;
    NSString *_searchText;
    UIActivityIndicatorView *_activityView;
    DTEmptyResultView *_searchEmptyView;
}

@property(retain, nonatomic) DTEmptyResultView *searchEmptyView; // @synthesize searchEmptyView=_searchEmptyView;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(nonatomic) long long keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) NSArray *contactDataSource; // @synthesize contactDataSource=_contactDataSource;
@property(retain, nonatomic) UITableView *contactTableView; // @synthesize contactTableView=_contactTableView;
@property(nonatomic) __weak UIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) __weak DTPickNavigationController *pickVCNavigation; // @synthesize pickVCNavigation=_pickVCNavigation;
@property(retain, nonatomic) DTSearchBar *contactSearchBar; // @synthesize contactSearchBar=_contactSearchBar;
@property(retain, nonatomic) DTPickIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)pickerDatasourceDidChange:(id)arg1;
- (void)cellDidSelect:(id)arg1;
- (void)showsSearchResult:(id)arg1 sesarchText:(id)arg2;
- (void)searchEnterpriseCardWithSearchText:(id)arg1 offset:(long long)arg2 size:(long long)arg3;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)pickDataSourceHandler;
- (void)loadDataSource;
- (void)loadComponent;
- (void)dealloc;
- (void)addObservers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
