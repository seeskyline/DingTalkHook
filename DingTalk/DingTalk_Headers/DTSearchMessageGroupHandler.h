//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTDatePickerViewDelegate-Protocol.h"
#import "DTLoadMoreDelegate-Protocol.h"
#import "DTSearchConditionViewControllerProtocol-Protocol.h"
#import "DTSearchHandlerProtocol-Protocol.h"

@class DTDingSelectedMemberItem, DTIcon, DTLoadMoreController, DTSearchConditionViewController, DTSearchHomeHistoryView, DTSearchMessageGroupDataSource, DTSectionItem, DTSingleLineShowingCellItem, NSArray, NSDate, NSString;

@interface DTSearchMessageGroupHandler : NSObject <DTDatePickerViewDelegate, DTLoadMoreDelegate, DTSearchHandlerProtocol, DTSearchConditionViewControllerProtocol>
{
    DTSearchConditionViewController *_searchVC;
    NSArray *_users;
    NSArray *_conversations;
    NSDate *_startDate;
    DTDingSelectedMemberItem *_senderItem;
    DTDingSelectedMemberItem *_conversationItem;
    DTSingleLineShowingCellItem *_dateItem;
    DTIcon *_addIcon;
    DTSearchHomeHistoryView *_historyView;
    NSString *_searchText;
    DTSectionItem *_section;
    DTSectionItem *_tipsSection;
    DTLoadMoreController *_loadMoreController;
    DTSearchMessageGroupDataSource *_searchDataSource;
}

@property(retain, nonatomic) DTSearchMessageGroupDataSource *searchDataSource; // @synthesize searchDataSource=_searchDataSource;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) DTSectionItem *tipsSection; // @synthesize tipsSection=_tipsSection;
@property(retain, nonatomic) DTSectionItem *section; // @synthesize section=_section;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) DTSearchHomeHistoryView *historyView; // @synthesize historyView=_historyView;
@property(retain, nonatomic) DTIcon *addIcon; // @synthesize addIcon=_addIcon;
@property(retain, nonatomic) DTSingleLineShowingCellItem *dateItem; // @synthesize dateItem=_dateItem;
@property(retain, nonatomic) DTDingSelectedMemberItem *conversationItem; // @synthesize conversationItem=_conversationItem;
@property(retain, nonatomic) DTDingSelectedMemberItem *senderItem; // @synthesize senderItem=_senderItem;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSArray *conversations; // @synthesize conversations=_conversations;
@property(copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(nonatomic) __weak DTSearchConditionViewController *searchVC; // @synthesize searchVC=_searchVC;
- (void).cxx_destruct;
- (id)textWithConversationConditionForSelector;
- (id)textWithSenderConditionForSelector;
- (id)textWithDateConditionForHeader;
- (id)textWithConversationConditionForHeader;
- (id)textWithSenderConditionForHeader;
- (id)textWithConditionForHeader;
- (void)reloadSearchDataSource;
- (_Bool)hasSearchCondiction;
- (id)iconMediaIdForConversation:(id)arg1;
- (id)textWithDateConditionForSelector;
- (void)didSelectedDatePickerView:(id)arg1 withDate:(id)arg2;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)searchTableDidScroll:(id)arg1;
- (void)dateItemPressed;
- (void)conversationItemPressed;
- (void)senderItemPressed;
- (void)reloadConditionData;
- (void)confirmButtonDidClicked:(id)arg1;
- (void)cleanData;
- (void)resetButtonDidClicked:(id)arg1;
- (double)heightForCondictionTableViewInViewController:(id)arg1;
- (id)conditionDatasForViewController:(id)arg1;
- (void)searchHistoryDidCleanWithType:(unsigned long long)arg1;
- (id)searchHomeViewWithContainViewFrame:(struct CGRect)arg1;
- (id)handlerTitle;
- (void)searchViewControllerWillHide;
- (void)searchViewControllerWillShow;
- (id)dataSourceWithSearchText:(id)arg1;
- (void)searchTextDidSearch:(id)arg1;
- (void)searchMessageGroupWithSearchText:(id)arg1 searchController:(id)arg2 SearchLog:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
