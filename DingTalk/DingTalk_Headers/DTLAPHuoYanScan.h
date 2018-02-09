//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

#import "DTHuoyanViewControllerDelegate-Protocol.h"

@class NSString;

@interface DTLAPHuoYanScan : LAPluginBase <DTHuoyanViewControllerDelegate>
{
    _Bool _keepScanning;
}

+ (id)pluginExactName;
@property(nonatomic) _Bool keepScanning; // @synthesize keepScanning=_keepScanning;
- (void)exitHuoyanViewController:(id)arg1;
- (_Bool)shouldContinueWithCode:(id)arg1 code:(id)arg2;
- (void)startScanWithScanType:(int)arg1 tips:(id)arg2 shouldCallback:(_Bool)arg3 request:(id)arg4 response:(id)arg5;
- (void)scan:(id)arg1 to:(id)arg2;
- (void)__exported__scan:(id)arg1 to:(id)arg2;
- (void)qrcode:(id)arg1 to:(id)arg2;
- (void)__exported__qrcode:(id)arg1 to:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
