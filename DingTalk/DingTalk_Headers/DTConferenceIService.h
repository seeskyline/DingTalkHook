//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTConferenceIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)createVoipConference:(id)arg1 callback:(id)arg2;
- (void)getConfQuotaInfo:(id)arg1 callback:(id)arg2;
- (void)getDirectCallPhoneNumber:(id)arg1 callback:(id)arg2;
- (void)putSysCallRecord:(id)arg1 callback:(id)arg2;
- (void)getAllBizCallNum:(id)arg1;
- (void)getPreferBizCallNum:(id)arg1;
- (void)cancelBizCall:(id)arg1 callback:(id)arg2;
- (void)createBizCall:(id)arg1 callback:(id)arg2;
- (void)getSupportedCallType:(id)arg1 callback:(id)arg2;
- (void)sendSms:(id)arg1 callback:(id)arg2;
- (void)sendInviteSms:(id)arg1 callback:(id)arg2;
- (void)changeConfHostess:(id)arg1 callback:(id)arg2;
- (void)getConfig:(id)arg1 callback:(id)arg2;
- (void)getUserBill:(id)arg1;
- (void)getFavoriteUserList:(id)arg1;
- (void)putFavoriteUserList:(id)arg1 callback:(id)arg2;
- (void)deleteCallRecordList:(id)arg1 callback:(id)arg2;
- (void)pullCallRecordDetailModelList:(id)arg1 callback:(id)arg2;
- (void)pullCallRecordHeadModelList:(id)arg1 callback:(id)arg2;
- (void)putTeleChatScore:(id)arg1 callback:(id)arg2;
- (void)cancelCall:(id)arg1 callerNumber:(id)arg2 callback:(id)arg3;
- (void)createCall:(id)arg1 callback:(id)arg2;
- (void)unMuteAll:(id)arg1 callback:(id)arg2;
- (void)muteAll:(id)arg1 callback:(id)arg2;
- (void)unMuteMember:(id)arg1 callback:(id)arg2;
- (void)muteMember:(id)arg1 callback:(id)arg2;
- (void)pullConference:(id)arg1 callback:(id)arg2;
- (void)pullMembers:(id)arg1 callback:(id)arg2;
- (void)terminateConference:(id)arg1 callback:(id)arg2;
- (void)leaveConference:(id)arg1 callback:(id)arg2;
- (void)kickOutMember:(id)arg1 callback:(id)arg2;
- (void)pullConferenceStatus:(id)arg1 callback:(id)arg2;
- (void)enterConference:(id)arg1 callback:(id)arg2;
- (void)addMember:(id)arg1 callback:(id)arg2;
- (void)createConference:(id)arg1 callback:(id)arg2;

@end

