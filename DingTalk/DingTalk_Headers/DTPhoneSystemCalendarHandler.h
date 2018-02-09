//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKEventStore;

@interface DTPhoneSystemCalendarHandler : NSObject
{
    EKEventStore *_eventStore;
}

+ (id)safeModelWithEvent:(id)arg1;
+ (id)validMobileCalendarEvents:(id)arg1;
+ (id)filterUnCheckedMobileCalendarEvents:(id)arg1;
+ (void)uploadMobileCalendarEventList:(id)arg1;
+ (_Bool)allMobileCalendarNotice;
+ (void)postNoticeWithEventIdentifier:(id)arg1;
+ (_Bool)handleLocalPushWithNotification:(id)arg1;
+ (_Bool)canHandleLocalNotification:(id)arg1;
+ (void)checkEventStoreAccessForCalendar:(CDUnknownBlockType)arg1;
+ (void)cancelAllCalendarNotification;
+ (void)cancelCalendarNotificationWithPredicate:(id)arg1;
+ (void)cancelNotificationWithEventIdentifier:(id)arg1;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void).cxx_destruct;
- (void)safeCalendarDataChanged:(id)arg1;
- (void)storeChanged:(id)arg1;
- (void)requestCalendarAccess:(CDUnknownBlockType)arg1;
- (id)loadLocalPushEventIdentifiers;
- (id)fireDateWithNoAlarmEvent:(id)arg1;
- (id)fireDateEvent:(id)arg1 alarm:(id)arg2;
- (void)createLocalPushWithEvent:(id)arg1;
- (void)createLocalPushWithEventList:(id)arg1;
- (void)updateLocalPushNotifyWithEvents:(id)arg1;
- (id)allPushEventIdentifiersWithEvents:(id)arg1;
- (id)secheduleSystemLocalNotification;
- (void)updateSystemLocalPush;
- (void)delayUpdateSystemLocalPush;
- (void)dealloc;
- (void)addObservers;
- (id)init;

@end
