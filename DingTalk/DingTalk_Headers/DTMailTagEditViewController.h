//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class DTMailColorPickerView, DTMailTagEditViewModel, NSArray, NSString, UITextField, UIView;

@interface DTMailTagEditViewController : UIViewController <UITextFieldDelegate>
{
    DTMailTagEditViewModel *_viewModel;
    UIView *_inputBackgroundView;
    UITextField *_inputView;
    DTMailColorPickerView *_colorPickerView;
    NSString *_tagName;
    NSString *_tagColor;
    NSArray *_colorValuesToPick;
}

@property(retain, nonatomic) NSArray *colorValuesToPick; // @synthesize colorValuesToPick=_colorValuesToPick;
@property(copy, nonatomic) NSString *tagColor; // @synthesize tagColor=_tagColor;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(retain, nonatomic) DTMailColorPickerView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property(retain, nonatomic) UITextField *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(retain, nonatomic) DTMailTagEditViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)onInputViewTextChanged:(id)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

