//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class DTEmptyResultView, DTFilterModel, DTLoadMoreController, DTSectionItem, NSString, UIActivityIndicatorView;

@interface DTSearchManageEnterpriseCardViewController : DTTableViewController <UISearchBarDelegate, DTLoadMoreDelegate>
{
    long long _orgId;
    NSString *_orgName;
    DTFilterModel *_filterModel;
    CDUnknownBlockType _updatedBlock;
    CDUnknownBlockType _deletedBlock;
    DTLoadMoreController *_loadMoreController;
    DTEmptyResultView *_searchEmptyView;
    UIActivityIndicatorView *_indicatorView;
    DTSectionItem *_sectionItem;
    NSString *_searchText;
}

@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) DTSectionItem *sectionItem; // @synthesize sectionItem=_sectionItem;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) DTEmptyResultView *searchEmptyView; // @synthesize searchEmptyView=_searchEmptyView;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(copy, nonatomic) CDUnknownBlockType deletedBlock; // @synthesize deletedBlock=_deletedBlock;
@property(copy, nonatomic) CDUnknownBlockType updatedBlock; // @synthesize updatedBlock=_updatedBlock;
@property(retain, nonatomic) DTFilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(copy, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (id)joinedDepartsNameWithDeparts:(id)arg1 andTitle:(id)arg2;
- (void)stopLoadingIndicator;
- (void)showLoadingIndicator;
- (void)showsSearchResult:(id)arg1 withSearchText:(id)arg2;
- (void)searchEnterpriseCardWithSearchText:(id)arg1 offset:(long long)arg2 size:(long long)arg3;
- (void)configBaseUserCellItem:(id)arg1 card:(id)arg2;
- (id)doubleLineUserItemWithEnterpriseCard:(id)arg1 detail:(id)arg2;
- (id)singleLineUserItemWithEnterpriseCard:(id)arg1;
- (void)editEnterpriseCard:(id)arg1 withContactItem:(id)arg2;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)tableViewBeginDragging:(id)arg1;
- (void)tableViewDidScroll:(id)arg1;
- (void)startSearching:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)loadCompoment;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
