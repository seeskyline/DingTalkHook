//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class UIImageView;

@interface DTSafePasscodeSettingController : DTTableViewController
{
    _Bool _isPresentSelfVC;
    _Bool _allStaffPasscodeEnable;
    UIImageView *_iconView;
}

@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool allStaffPasscodeEnable; // @synthesize allStaffPasscodeEnable=_allStaffPasscodeEnable;
@property(nonatomic) _Bool isPresentSelfVC; // @synthesize isPresentSelfVC=_isPresentSelfVC;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)dismissCurrentVC;
- (void)setEnableFingerprint:(_Bool)arg1;
- (_Bool)hasEnableFingerprint:(id *)arg1;
- (_Bool)isFingerprintAvailable;
- (_Bool)hasEnableHide;
- (_Bool)hasProtectLockscreen;
- (_Bool)hasSafePasscode;
- (void)forgetPasscode;
- (void)closeSafePasscode:(id)arg1;
- (void)openSafePasscode:(id)arg1;
- (void)changeProtectLockscreen:(_Bool)arg1 sender:(id)arg2;
- (void)loadDataSource;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)labelWithTips:(id)arg1;

@end

