//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTCMailPushManager : NSObject
{
    _Bool _handledNoAccountFound;
}

+ (id)shareInstance;
@property(nonatomic) _Bool handledNoAccountFound; // @synthesize handledNoAccountFound=_handledNoAccountFound;
- (void)handleNoLocalAccount:(id)arg1;
- (void)handleEmailMessage:(id)arg1;
- (void)receivedMessageListNotification:(id)arg1;
- (void)receivedMessageNotification:(id)arg1;
- (void)dealloc;
- (void)addNotification;
- (id)init;

@end
