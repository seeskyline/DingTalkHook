//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRecursiveLock;

@interface WKSyncFinishJudger : NSObject
{
    long long _totalCount;
    long long _finishCount;
    NSRecursiveLock *_lock;
    long long _isFinished;
}

+ (id)judgerWithCount:(long long)arg1;
@property(nonatomic) long long isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long finishCount; // @synthesize finishCount=_finishCount;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;
- (long long)judgeWithFinishResult:(_Bool)arg1 isTotalFinish:(_Bool *)arg2;
- (id)initWithCount:(long long)arg1;

@end

