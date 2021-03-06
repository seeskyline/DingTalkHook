//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class DTContentBoardView, DTMessageBottomTagView, DTMessageBubbleTapMaskView, DTMessageBubbleViewItem, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel;
@protocol DTMessageBubbleViewDataSource, DTMessageBubbleViewDelegate;

@interface DTMessageBubbleView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isTouchDown;
    _Bool _enableLongPress;
    double _touchDownTime;
    _Bool _didRemoveObserver;
    id <DTMessageBubbleViewDelegate> _delegate;
    id <DTMessageBubbleViewDataSource> _dataSource;
    DTMessageBubbleTapMaskView *_tapMaskView;
    UIImageView *_dingIconImageView;
    UILabel *_titleLabel;
    UIButton *_confirmDingButton;
    UIImageView *_bubbleBackgroundImageView;
    UIActivityIndicatorView *_confirmIndicatorView;
    UIView *_longPressMaskView;
    UIButton *_safeIconButton;
    UIButton *_safeIconDescButton;
    UIView *_topLine;
    DTContentBoardView *_contentBoardView;
    DTMessageBubbleViewItem *_item;
    DTMessageBottomTagView *_bottomTagView;
}

@property(retain, nonatomic) DTMessageBottomTagView *bottomTagView; // @synthesize bottomTagView=_bottomTagView;
@property(retain, nonatomic) DTMessageBubbleViewItem *item; // @synthesize item=_item;
@property(retain, nonatomic) DTContentBoardView *contentBoardView; // @synthesize contentBoardView=_contentBoardView;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIButton *safeIconDescButton; // @synthesize safeIconDescButton=_safeIconDescButton;
@property(retain, nonatomic) UIButton *safeIconButton; // @synthesize safeIconButton=_safeIconButton;
@property(retain, nonatomic) UIView *longPressMaskView; // @synthesize longPressMaskView=_longPressMaskView;
@property(retain, nonatomic) UIActivityIndicatorView *confirmIndicatorView; // @synthesize confirmIndicatorView=_confirmIndicatorView;
@property(retain, nonatomic) UIImageView *bubbleBackgroundImageView; // @synthesize bubbleBackgroundImageView=_bubbleBackgroundImageView;
@property(retain, nonatomic) UIButton *confirmDingButton; // @synthesize confirmDingButton=_confirmDingButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *dingIconImageView; // @synthesize dingIconImageView=_dingIconImageView;
@property(retain, nonatomic) DTMessageBubbleTapMaskView *tapMaskView; // @synthesize tapMaskView=_tapMaskView;
@property(nonatomic) __weak id <DTMessageBubbleViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <DTMessageBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)moreMenuItem;
- (id)mutePlayMenuItem;
- (id)shareLinkMenuItem;
- (id)packupTextMenuItem;
- (id)audioToTextMenuItem;
- (id)copyAudioTextMenuItem;
- (id)saveToDingDriveMenuItem;
- (id)printMenuItem;
- (id)addToStickersMenuItem;
- (id)copyImageMenuItem;
- (id)shieldMenuItem;
- (id)originalMenuItem;
- (id)translateMenuItem;
- (id)favoriteMenuItem;
- (id)recallMenuItem;
- (id)deleteMenuItem;
- (id)replyMenuItem;
- (id)transmitMenuItem;
- (id)copyTextMenuItem;
- (id)meetingMenuItem;
- (id)taskMenuItem;
- (id)dingMenuItem;
- (id)focusDingItem;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)shield:(id)arg1;
- (void)shareToLink:(id)arg1;
- (void)focusDingItemPressed:(id)arg1;
- (void)moreItem:(id)arg1;
- (void)untranslate:(id)arg1;
- (void)translate:(id)arg1;
- (void)translateAudioToText:(id)arg1;
- (void)collapseAudioContent:(id)arg1;
- (void)addEmotionFavorite:(id)arg1;
- (void)addFavorite:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)printItem:(id)arg1;
- (void)saveToSpace:(id)arg1;
- (void)recallItem:(id)arg1;
- (void)transmitItem:(id)arg1;
- (void)meeting:(id)arg1;
- (void)task:(id)arg1;
- (void)ding:(id)arg1;
- (void)copyAudioTranslatedText:(id)arg1;
- (void)silentPlayVideo:(id)arg1;
- (void)copyImage:(id)arg1;
- (void)saveImage:(id)arg1;
- (void)quote:(id)arg1;
- (void)copyText:(id)arg1;
- (void)triggerMenuActionWithType:(long long)arg1;
- (id)menuItemsWithMessage:(id)arg1;
- (void)handleTapSafeIcon;
- (void)handleLongTap;
- (_Bool)isDisplayingTranslationAudioContent:(id)arg1;
- (_Bool)isOnTranslatingAudio:(id)arg1;
- (_Bool)needShowQuote:(id)arg1;
- (_Bool)needShowShield:(id)arg1;
- (_Bool)needShowCopyImage:(id)arg1;
- (_Bool)needShareToLink:(id)arg1;
- (_Bool)needPrint:(id)arg1;
- (_Bool)needSaveCSpace:(id)arg1;
- (_Bool)needShowUntranslate:(id)arg1;
- (_Bool)needShowTtranslate:(id)arg1;
- (_Bool)needShowRecall:(id)arg1;
- (_Bool)needShowFavorite:(id)arg1;
- (_Bool)needShowTransmit:(id)arg1;
- (_Bool)needShowFocusDing:(id)arg1;
- (_Bool)needShowMeeting:(id)arg1;
- (_Bool)needShowTask:(id)arg1;
- (_Bool)needShowDing:(id)arg1;
- (_Bool)needShowDeleteInConversation:(id)arg1 message:(id)arg2;
- (void)handleDoubleTap;
- (void)handleTap;
- (void)confirmReceived;
- (void)willHideEditMenu:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)delayToLongTap;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)configWithItem:(id)arg1;
- (void)showAlphaLight:(_Bool)arg1;
- (void)showSafeIcon:(id)arg1;
- (void)showDingNeedConfirmButton:(id)arg1;
- (void)showMessageDingWithItem:(id)arg1;
- (void)dismissDing;
- (void)didAddSubview:(id)arg1;
- (void)removeObservers;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

