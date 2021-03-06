//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizMessage, DTMessageCollectionViewCell, DTMessageControllerDataSource, HPGrowingTextView, NSArray, NSNotification, NSString, UIColor, UILongPressGestureRecognizer, WKBizXpnPushModel;

@protocol DTMessageBaseViewControllerProtocal <NSObject>

@optional
- (void)clickedLuckyMoneyWithMessage:(DTBizMessage *)arg1;
- (void)inputViewAtSomeone:(long long)arg1;
- (void)cancelSelectStyle;
- (NSArray *)getSelectedMessages;
- (void)openThirdEncryptGuide;
- (void)removeLinkCardView;
- (void)openLuckyMoneyWithMessage:(DTBizMessage *)arg1;
- (void)messageBubbleAttachmentAudioViewStartPlay:(DTMessageCollectionViewCell *)arg1;
- (void)openPhotoBrowserWithMessage:(DTBizMessage *)arg1 needOpenBrowser:(_Bool)arg2;
- (void)delayJudgeUrlText:(NSString *)arg1;
- (void)refreshSettingHotDot;
- (void)receivedMessageListNotification:(NSNotification *)arg1;
- (void)receivedMessageNotification:(NSNotification *)arg1;
- (void)conversationUpdatedNotification:(NSNotification *)arg1;
- (void)OnSendSuccess:(NSNotification *)arg1;
- (void)onBlankAreaLongPressed:(UILongPressGestureRecognizer *)arg1;
- (void)receivedReadMessageNotification:(NSNotification *)arg1;
- (void)makeCallFromPlus:(id)arg1;
- (void)makeCall:(id)arg1;
- (void)toCrmHome:(id)arg1;
- (void)onBossChatAction:(id)arg1;
- (void)onShowMoreAction:(id)arg1;
- (void)onShowFilesHelperMoreAction:(id)arg1;
- (void)dismissUnreadCountBtn;
- (_Bool)growingTextView:(HPGrowingTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (_Bool)growingTextViewShouldEndEditing:(HPGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(HPGrowingTextView *)arg1;
- (void)showUnreadCountBtn;
- (WKBizXpnPushModel *)generateXpnPushModel;
- (void)addObserver;
- (DTMessageControllerDataSource *)buildMessageDataSource;
- (void)becomeActive:(NSNotification *)arg1;
- (void)resignActive:(NSNotification *)arg1;
- (void)endEdit:(_Bool)arg1;
- (void)configureMessagesCollectionViewNeedInputContainerView:(_Bool)arg1;
- (void)updateNavigationBarLeftItemTitle;
- (void)configWaterMarkWithTextColor:(UIColor *)arg1;
- (void)configureMessagesNavigationBarWithTintColor:(UIColor *)arg1;
- (void)configureMessagesNavigationBar;
- (void)configureMessagesViewController;
@end

