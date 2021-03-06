//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITextView, UIWindow;

@interface DTCreateFocusDingView : UIView <UITextViewDelegate>
{
    _Bool _dismissAfterSend;
    UITextView *_inPutTextView;
    UIImageView *_pinIconView;
    UILabel *_placeholderLabel;
    UIButton *_sendButton;
    UIView *_inputBgView;
    UIWindow *_maskWindow;
    UIView *_backgroundMaskView;
}

@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(retain, nonatomic) UIWindow *maskWindow; // @synthesize maskWindow=_maskWindow;
@property(retain, nonatomic) UIView *inputBgView; // @synthesize inputBgView=_inputBgView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UIImageView *pinIconView; // @synthesize pinIconView=_pinIconView;
@property(retain, nonatomic) UITextView *inPutTextView; // @synthesize inPutTextView=_inPutTextView;
- (void).cxx_destruct;
- (id)cachedFocusDingText;
- (void)cacheFocusDingTextToDisk:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)handleWillShowKeyboard:(id)arg1;
- (void)sendFocusDing;
- (void)sendButtonClicked:(id)arg1;
- (void)show;
- (void)dismiss;
- (void)bgTapClick:(id)arg1;
- (void)loadUIComponent;
- (void)addObservers;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

