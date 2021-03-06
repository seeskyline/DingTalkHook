//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTButton, UIImageView, UILabel;
@protocol DTScreenshotBottomMaskViewDelegate;

@interface DTScreenshotBottomMaskView : UIView
{
    id <DTScreenshotBottomMaskViewDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    DTButton *_actButton;
    DTButton *_closeButton;
}

+ (id)defaultBottomMaskView;
@property(retain, nonatomic) DTButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) DTButton *actButton; // @synthesize actButton=_actButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <DTScreenshotBottomMaskViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cloaseButtonDidClick:(id)arg1;
- (void)actButtonDidClick:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)resetCloseTitle:(id)arg1;
- (void)resetActTitle:(id)arg1;
- (void)resetContent:(id)arg1;
- (void)resetTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 content:(id)arg3 actTitle:(id)arg4;

@end

