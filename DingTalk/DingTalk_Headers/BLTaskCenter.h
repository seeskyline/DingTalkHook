//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class YYThreadSafeDictionary;

@interface BLTaskCenter : NSObject
{
    YYThreadSafeDictionary *_taskQueueMappingForAccount;
}

+ (id)sharedCenter;
@property(retain, nonatomic) YYThreadSafeDictionary *taskQueueMappingForAccount; // @synthesize taskQueueMappingForAccount=_taskQueueMappingForAccount;
- (void).cxx_destruct;
- (int)curStatus;
- (_Bool)isBusy;
- (void)enterBackground;
- (void)enterForeground;
- (void)enumerateTasksWithOption:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2 inQueueType:(int)arg3 forAccount:(id)arg4;
- (void)enumerateTasksWithBlock:(CDUnknownBlockType)arg1 inQueueType:(int)arg2 forAccount:(id)arg3;
- (void)removeTasksWithPredicate:(id)arg1;
- (void)removeTaskWithTaskID:(id)arg1;
- (void)removeAllTasks;
- (void)removeAllTasksForLongLongQueueWithAccount:(id)arg1;
- (void)removeTasksWithAccount:(id)arg1;
- (id)tasksWithAccounts:(id)arg1;
- (void)addTasks:(id)arg1 type:(int)arg2 forAccount:(id)arg3;
- (void)addTask:(id)arg1 type:(int)arg2 forAccount:(id)arg3;
- (void)addTask:(id)arg1 type:(int)arg2;
- (id)taskQueueCreateIfNeededWithType:(int)arg1 account:(id)arg2;
- (id)taskQueuesWithAccount:(id)arg1;
- (id)init;

@end
