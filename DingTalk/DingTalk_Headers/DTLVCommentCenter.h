//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTLVCommentCenter : NSObject
{
}

+ (id)sharedInstance;
- (void)endSimulGroupLiveWithTitle:(id)arg1;
- (void)joinSimulGroupsWithTitle:(id)arg1;
- (void)liveChangedToSimulModeWithLiveUuid:(id)arg1;
- (void)didReceiveRoomSystemMessage:(id)arg1;
- (void)requestCommentWithPageSize:(int)arg1 cid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeCommentObserver:(id)arg1 liveUuid:(id)arg2;
- (void)addCommentObserver:(id)arg1 liveUuid:(id)arg2;
- (void)removeCommentObserver:(id)arg1 cid:(id)arg2;
- (void)addCommentObserver:(id)arg1 cid:(id)arg2;

@end

