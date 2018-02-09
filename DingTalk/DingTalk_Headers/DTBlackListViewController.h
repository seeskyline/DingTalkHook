//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTEmptyResultView, DTLoadMoreController, DTTableView, NSArray, NSString, UIActivityIndicatorView;

@interface DTBlackListViewController : DTViewController <UITableViewDelegate, UITableViewDataSource, DTLoadMoreDelegate>
{
    DTTableView *_tableView;
    NSArray *_datasource;
    DTEmptyResultView *_emptyView;
    UIActivityIndicatorView *_indicatorView;
    DTLoadMoreController *_loadMoreController;
    long long _nextCursor;
}

@property(nonatomic) long long nextCursor; // @synthesize nextCursor=_nextCursor;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) DTTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)blacklistDidChange:(id)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadData;
- (id)avatarModelWithFriend:(id)arg1;
- (id)itemWithUid:(long long)arg1;
- (void)showsBlacklistWithResults:(id)arg1;
- (void)loadDatasource;
- (void)loadComponent;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
