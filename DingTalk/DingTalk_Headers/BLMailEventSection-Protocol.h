//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol BLMailEventSection <NSObject>
- (void)setAlarmTip:(NSString *)arg1;
- (void)setStatusLabelText:(NSString *)arg1;
- (void)showResponseButtons:(_Bool)arg1;
- (void)setNoMeetingInfo;
- (void)setMeetingDate:(NSString *)arg1;
- (void)setMeetingLocation:(NSString *)arg1;
- (void)setStatusIsAccepted:(_Bool)arg1 isDeclined:(_Bool)arg2 isTentative:(_Bool)arg3;

@optional
- (void)setMeetingOrganizer:(NSString *)arg1;
@end

