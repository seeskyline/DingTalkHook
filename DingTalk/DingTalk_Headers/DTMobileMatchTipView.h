//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol DTMobileMatchTipViewDelegate;

@interface DTMobileMatchTipView : UIView
{
    id <DTMobileMatchTipViewDelegate> _delegate;
    UIButton *_confirmBtn;
    UIButton *_cancelBtn;
}

@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(nonatomic) __weak id <DTMobileMatchTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelAction:(id)arg1;
- (void)confirmAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

