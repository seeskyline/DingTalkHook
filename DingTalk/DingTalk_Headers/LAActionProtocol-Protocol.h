//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LAActionQueue;

@protocol LAActionProtocol <NSObject>
@property(nonatomic) _Bool expiredWhenStop;
@property(nonatomic) double actionInterval;
@property(copy, nonatomic) CDUnknownBlockType actionBlock;
- (_Bool)actionQueueActionOperating:(LAActionQueue *)arg1;
- (double)actionQueueTimeInterval:(LAActionQueue *)arg1;
- (void)actionQueueTrigger:(LAActionQueue *)arg1;
@end

