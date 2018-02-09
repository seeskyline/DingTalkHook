//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTDingTableViewCellDelegate-Protocol.h"
#import "DTOpenLuckyMoneyViewDelegate-Protocol.h"

@class DTDingMoreOperationHandler, DTTableView, NSMutableDictionary, NSSet, NSString;

@interface DTDingViewController : DTViewController <DTDingTableViewCellDelegate, DTOpenLuckyMoneyViewDelegate>
{
    DTTableView *_dingTableView;
    NSSet *_requestUids;
    NSMutableDictionary *_cacheConversation;
    NSMutableDictionary *_cacheHeightDictionary;
    DTDingMoreOperationHandler *_moreOperationHandler;
}

@property(retain, nonatomic) DTDingMoreOperationHandler *moreOperationHandler; // @synthesize moreOperationHandler=_moreOperationHandler;
@property(retain, nonatomic) NSMutableDictionary *cacheHeightDictionary; // @synthesize cacheHeightDictionary=_cacheHeightDictionary;
@property(retain, nonatomic) NSMutableDictionary *cacheConversation; // @synthesize cacheConversation=_cacheConversation;
@property(copy, nonatomic) NSSet *requestUids; // @synthesize requestUids=_requestUids;
@property(retain, nonatomic) DTTableView *dingTableView; // @synthesize dingTableView=_dingTableView;
- (void).cxx_destruct;
- (id)dingTableViewWithoutGet;
- (void)showDingGuideV3IfNeed;
- (void)didClickViewMore:(id)arg1 pickingStatus:(id)arg2;
- (id)conversationWithDing:(id)arg1;
- (void)delayRequestContactsName;
- (void)openUrlInWebView:(id)arg1;
- (void)handleUrl:(id)arg1;
- (void)dinglistCellfinishButtonClick:(id)arg1;
- (void)openCSpaceAttachment:(id)arg1 senderId:(long long)arg2;
- (void)openAttachmentLink:(id)arg1 senderId:(long long)arg2;
- (void)needConfirmDing:(id)arg1;
- (void)openUserProfile:(id)arg1;
- (void)jumpToDingStatusDingModel:(id)arg1 withType:(unsigned long long)arg2;
- (void)openDingFinishStatusList:(_Bool)arg1 dingModel:(id)arg2;
- (void)openDingReceiverStatusList:(_Bool)arg1 dingModel:(id)arg2;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
