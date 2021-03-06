//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;
@protocol DTCallKitDataSource, DTCallKitDelegate, DTCallKitDisplayInfo;

@protocol DTCallKitProtocol <NSObject>
@property(readonly, copy, nonatomic) NSString *callId;
@property(readonly, nonatomic, getter=isCallKitRunning) _Bool callKitRunning;
@property(readonly, nonatomic, getter=isEnableCallKit) _Bool callKitEnable;
@property(nonatomic) id <DTCallKitDataSource> dtCallKitDateSource;
@property(nonatomic) id <DTCallKitDelegate> dtCallKitDelegate;
@property(copy, nonatomic) CDUnknownBlockType callKitLogBlock;
- (void)reportEndCallWithCallId:(NSString *)arg1;
- (void)updateDisplayInfo:(id <DTCallKitDisplayInfo>)arg1;
- (void)reportOutGoingConnectWithContact:(id <DTCallKitDisplayInfo>)arg1;
- (void)reportOutGoingCallWithContact:(id <DTCallKitDisplayInfo>)arg1 completion:(void (^)(NSError *, NSString *))arg2;
- (void)reportIncomingCallWithContact:(id <DTCallKitDisplayInfo>)arg1 completion:(void (^)(NSError *, NSString *))arg2;
- (void)unRegisterCallKit;
- (void)registerCallKitWithName:(NSString *)arg1 soundName:(NSString *)arg2 icon:(UIImage *)arg3;
@end

