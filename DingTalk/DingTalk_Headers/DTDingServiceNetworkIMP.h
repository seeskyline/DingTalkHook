//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTDingServiceNetworkProtocol-Protocol.h"

@class NSString;

@interface DTDingServiceNetworkIMP : NSObject <DTDingServiceNetworkProtocol>
{
}

+ (void)reportExceptionWithMethod:(id)arg1 parameters:(id)arg2 error:(id)arg3 errorType:(long long)arg4;
- (void)remindLaterWithDingId:(long long)arg1 laterMinutes:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)createTaskWithSendModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)updateTaskReceivers:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)changeExecutorFinishStatus:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)checkCalendarAttenders:(id)arg1 startDate:(long long)arg2 endDate:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)exportDingCheckInExcel:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)updateRecorderId:(long long)arg1 uid:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getDingReceiverUidsByRole:(long long)arg1 role:(long long)arg2 cursor:(long long)arg3 size:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)loadSubTasksWithDingId:(long long)arg1 cursor:(long long)arg2 pageSize:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)loadDetailSubTasksWithDingId:(long long)arg1 pageSize:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)checkInMeetingInvitation:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getDingCheckInCodeWithDingId:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)cancelMeetingInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateEventsWrapper:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)listDingReceiversV3:(long long)arg1 bizType:(long long)arg2 status:(long long)arg3 cursor:(long long)arg4 size:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updateConferenceInvitationStatusWithDing:(id)arg1 status:(long long)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateConferenceInvitationStatusWithDing:(id)arg1 status:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createConferenceInvitationWithEventsWrapper:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getDingIndustryGuideWtihId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getHolidayArrangements:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)updateDingDeadLine:(long long)arg1 blockingTime:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)taskReceiverList:(long long)arg1 cursor:(long long)arg2 size:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)addReceiversForDing:(long long)arg1 receiverUids:(id)arg2 ignorePrevent:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)pullAllReceiversWithDingId:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)confirmAllDingsWithsuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)changeDingModel:(id)arg1 focusStatus:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getDingGuideInfoSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)sendDingByTemplateId:(id)arg1 uuid:(id)arg2 receiverUids:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)clearDeletedDingListWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)getConfirmStatusInfo:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)canSendDingToday:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)listDingWithDingIds:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getDingRelatedUids:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)commentNotify:(long long)arg1 turnOn:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)confirmDing:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)listDingReceiverListV2:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)listDingReceiverList:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)dingRemind:(long long)arg1 turnOn:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)recallDing:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)changeCloseStatusWithTask:(id)arg1 closeStatus:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)changeDingSelfFinishStatus:(id)arg1 finishStatus:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)changeDingFinishStatus:(id)arg1 finishStatus:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)changeDingStatusInBatch:(id)arg1 status:(id)arg2 dingListType:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)changeDingStatus:(long long)arg1 status:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)pullDingList:(_Bool)arg1 cursor:(long long)arg2 size:(long long)arg3 type:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)listDeletedDing:(_Bool)arg1 cursor:(long long)arg2 size:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)listSentDing:(_Bool)arg1 cursor:(long long)arg2 size:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)listReceivedDing:(_Bool)arg1 cursor:(long long)arg2 size:(long long)arg3 confirmStatus:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)listAllDing:(_Bool)arg1 cursor:(long long)arg2 size:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)dingTransform:(id)arg1 uuid:(id)arg2 urgentLevel:(long long)arg3 remindTime:(long long)arg4 entityType:(long long)arg5 entityId:(long long)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)sendDingAgainV2:(id)arg1 uids:(id)arg2 urgentLevel:(id)arg3 ignorePrevent:(_Bool)arg4 type:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)sendDingAgain:(id)arg1 uids:(id)arg2 urgentLevel:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)updateTaskDingWithBizSendModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)updateDingWithBizUpdateModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)sendDingWithBizSendModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)createDingMessage:(id)arg1 uuid:(id)arg2 urgentLevel:(long long)arg3 remindTime:(long long)arg4 attachment:(id)arg5 extension:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)createDingMessage:(id)arg1 uuid:(id)arg2 urgentLevel:(long long)arg3 remindTime:(long long)arg4 attachment:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

