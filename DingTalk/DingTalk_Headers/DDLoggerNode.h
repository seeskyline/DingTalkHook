//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol DDLogger;

@interface DDLoggerNode : NSObject
{
    id <DDLogger> logger;
    struct dispatch_queue_s *loggerQueue;
    int logLevel;
}

+ (id)nodeWithLogger:(id)arg1 loggerQueue:(struct dispatch_queue_s *)arg2 logLevel:(int)arg3;
@property(readonly, nonatomic) int logLevel; // @synthesize logLevel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLogger:(id)arg1 loggerQueue:(struct dispatch_queue_s *)arg2 logLevel:(int)arg3;

@end
