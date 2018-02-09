//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTMessageForwardSubTask, NSArray, NSNumber;

@interface DTMessageForwardTask : NSObject
{
    _Bool _hasFailedSubTask;
    _Bool _finished;
    _Bool _isSucceed;
    NSArray *_subTasks;
    DTMessageForwardSubTask *_runningSubTask;
    NSNumber *_taskId;
    CDUnknownBlockType _runningSubTaskCallbackBlock;
    CDUnknownBlockType _didFinishAllSubTaskBlock;
}

+ (id)taskWithSubTasks:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType didFinishAllSubTaskBlock; // @synthesize didFinishAllSubTaskBlock=_didFinishAllSubTaskBlock;
@property(copy, nonatomic) CDUnknownBlockType runningSubTaskCallbackBlock; // @synthesize runningSubTaskCallbackBlock=_runningSubTaskCallbackBlock;
@property(retain, nonatomic) NSNumber *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) _Bool isSucceed; // @synthesize isSucceed=_isSucceed;
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) DTMessageForwardSubTask *runningSubTask; // @synthesize runningSubTask=_runningSubTask;
@property(readonly, copy, nonatomic) NSArray *subTasks; // @synthesize subTasks=_subTasks;
- (void).cxx_destruct;
- (void)notityDidFinishAllSubTask;
- (void)notifyDidFinishRunningSubTask:(_Bool)arg1;
- (void)executeSubTask:(id)arg1;
- (void)execute;
- (void)appendSubTask:(id)arg1;

@end
