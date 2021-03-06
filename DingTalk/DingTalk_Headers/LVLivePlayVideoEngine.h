//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LVLivePlayVideoEngine : NSObject
{
    CDUnknownBlockType _statusChangedBlock;
    CDUnknownBlockType _viewCountBlock;
    CDUnknownBlockType _digCountBlock;
    NSString *_liveUuid;
    NSString *_cid;
}

@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *liveUuid; // @synthesize liveUuid=_liveUuid;
@property(copy, nonatomic) CDUnknownBlockType digCountBlock; // @synthesize digCountBlock=_digCountBlock;
@property(copy, nonatomic) CDUnknownBlockType viewCountBlock; // @synthesize viewCountBlock=_viewCountBlock;
@property(copy, nonatomic) CDUnknownBlockType statusChangedBlock; // @synthesize statusChangedBlock=_statusChangedBlock;
- (void).cxx_destruct;
- (void)leaveLiveRoom;
- (void)registerMessageAdapter;
- (void)unRegisterMessageAdapter;
- (void)enterLiveRoomWithLiveUuid:(id)arg1 cid:(id)arg2;
- (void)dealloc;

@end

