//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTCFolder;

@interface DTCMailNotificationManager : NSObject
{
    DTCFolder *_currentUsingFolder;
}

+ (id)sharedInstance;
@property(retain, nonatomic) DTCFolder *currentUsingFolder; // @synthesize currentUsingFolder=_currentUsingFolder;
- (void).cxx_destruct;
- (void)onAccountLoggedOut:(id)arg1;
- (void)onAccountLoginIn:(id)arg1;
- (void)didSaveMailDraft:(id)arg1;
- (void)didSendMail:(id)arg1;
- (void)didRefreshMailFail:(id)arg1;
- (void)didRefreshMail:(id)arg1;
- (void)mailCtrlClicked:(id)arg1;
- (void)folderStatusModified:(id)arg1;
- (void)unregisterNotifcation;
- (void)registerNotification;
- (void)dealloc;

@end
