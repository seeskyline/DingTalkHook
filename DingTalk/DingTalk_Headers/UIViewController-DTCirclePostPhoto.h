//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ELCImagePickerControllerDelegate-Protocol.h"

@class NSString;

@interface UIViewController (DTCirclePostPhoto) <ELCImagePickerControllerDelegate>
- (_Bool)dt_circleCheckSourceTypeAvaiable:(long long)arg1 warningTitle:(id)arg2;
- (void)elcImagePickerControllerDidCancel:(id)arg1;
- (void)elcImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)dt_circlePresentCameraController;
- (void)dt_circlePresentImagePickerControllerWithMaximumImagesCount:(long long)arg1;
- (void)dt_circlePresentPostActionSheetControllerWithMaximumImagesCount:(long long)arg1 textOnlyActionEnabled:(_Bool)arg2 textOnlyActionDidTapCallback:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
