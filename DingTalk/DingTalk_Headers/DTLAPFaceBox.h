//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

#import "DTShareMegCardDelegate-Protocol.h"

@class DTFaceBoxServiceForJSAPIHelper, NSArray, NSDictionary, NSString;

@interface DTLAPFaceBox : LAPluginBase <DTShareMegCardDelegate>
{
    DTFaceBoxServiceForJSAPIHelper *_faceBoxService;
    NSDictionary *_shareData;
    NSArray *_users;
    NSString *_conversationId;
    NSString *_corpId;
    long long _senderUid;
    long long _receiverUid;
}

+ (id)pluginExactName;
@property(nonatomic) long long receiverUid; // @synthesize receiverUid=_receiverUid;
@property(nonatomic) long long senderUid; // @synthesize senderUid=_senderUid;
@property(retain, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSDictionary *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) DTFaceBoxServiceForJSAPIHelper *faceBoxService; // @synthesize faceBoxService=_faceBoxService;
- (void).cxx_destruct;
- (void)sendShareInfoFail:(id)arg1;
- (void)sendShareInfoToConversation:(id)arg1;
- (void)cancelSendShareInfoToConversation;
- (void)processDing:(id)arg1;
- (void)showInviteUI:(id)arg1 content:(id)arg2 attachment:(id)arg3 corpId:(id)arg4 users:(id)arg5;
- (void)showFaceRecordUI:(id)arg1 response:(id)arg2 registerUserModel:(id)arg3 cameraType:(id)arg4 from:(id)arg5 recordTips:(id)arg6;
- (void)showFaceHasRecordedUI:(id)arg1;
- (void)experienceFunction:(id)arg1 to:(id)arg2;
- (void)__exported__experienceFunction:(id)arg1 to:(id)arg2;
- (void)sendMessageToContact:(id)arg1 to:(id)arg2;
- (void)__exported__sendMessageToContact:(id)arg1 to:(id)arg2;
- (void)showRemind:(id)arg1 to:(id)arg2;
- (void)__exported__showRemind:(id)arg1 to:(id)arg2;
- (void)setRecognition:(id)arg1 to:(id)arg2;
- (void)__exported__setRecognition:(id)arg1 to:(id)arg2;
- (void)getRecognition:(id)arg1 to:(id)arg2;
- (void)__exported__getRecognition:(id)arg1 to:(id)arg2;
- (void)removeFace:(id)arg1 to:(id)arg2;
- (void)__exported__removeFace:(id)arg1 to:(id)arg2;
- (void)startPictureRecord:(id)arg1 to:(id)arg2;
- (void)__exported__startPictureRecord:(id)arg1 to:(id)arg2;
- (void)startCameraRecord:(id)arg1 to:(id)arg2;
- (void)__exported__startCameraRecord:(id)arg1 to:(id)arg2;
- (void)disposePlugin;
- (void)pluginInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

