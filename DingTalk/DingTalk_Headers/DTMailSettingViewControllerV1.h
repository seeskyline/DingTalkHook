//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTCellItem, DTDoubleLineShowingCellItem, DTSingleLineShowingCellItem, NSArray, NSMutableDictionary, UISwitch;

@interface DTMailSettingViewControllerV1 : DTTableViewController
{
    _Bool _isMailHelperExist;
    CDUnknownBlockType _addedAccountBlock;
    CDUnknownBlockType _dingAccountChangedAccountBlock;
    NSArray *_ownedEnterpriseCards;
    NSMutableDictionary *_cardStatusDict;
    DTSingleLineShowingCellItem *_orgMailItem;
    DTSingleLineShowingCellItem *_orgSignatureItem;
    DTSingleLineShowingCellItem *_accountsItem;
    DTDoubleLineShowingCellItem *_dingtalkMailItem;
    DTSingleLineShowingCellItem *_signatureItem;
    DTSingleLineShowingCellItem *_subscribeItem;
    DTCellItem *_mailNotificationItem;
    DTCellItem *_liftMailItem;
    UISwitch *_liftMailSwitcher;
    NSArray *_localAccounts;
}

@property(copy, nonatomic) NSArray *localAccounts; // @synthesize localAccounts=_localAccounts;
@property(retain, nonatomic) UISwitch *liftMailSwitcher; // @synthesize liftMailSwitcher=_liftMailSwitcher;
@property(retain, nonatomic) DTCellItem *liftMailItem; // @synthesize liftMailItem=_liftMailItem;
@property(retain, nonatomic) DTCellItem *mailNotificationItem; // @synthesize mailNotificationItem=_mailNotificationItem;
@property(retain, nonatomic) DTSingleLineShowingCellItem *subscribeItem; // @synthesize subscribeItem=_subscribeItem;
@property(retain, nonatomic) DTSingleLineShowingCellItem *signatureItem; // @synthesize signatureItem=_signatureItem;
@property(retain, nonatomic) DTDoubleLineShowingCellItem *dingtalkMailItem; // @synthesize dingtalkMailItem=_dingtalkMailItem;
@property(retain, nonatomic) DTSingleLineShowingCellItem *accountsItem; // @synthesize accountsItem=_accountsItem;
@property(retain, nonatomic) DTSingleLineShowingCellItem *orgSignatureItem; // @synthesize orgSignatureItem=_orgSignatureItem;
@property(retain, nonatomic) DTSingleLineShowingCellItem *orgMailItem; // @synthesize orgMailItem=_orgMailItem;
@property(retain, nonatomic) NSMutableDictionary *cardStatusDict; // @synthesize cardStatusDict=_cardStatusDict;
@property(copy, nonatomic) NSArray *ownedEnterpriseCards; // @synthesize ownedEnterpriseCards=_ownedEnterpriseCards;
@property(nonatomic) _Bool isMailHelperExist; // @synthesize isMailHelperExist=_isMailHelperExist;
@property(copy, nonatomic) CDUnknownBlockType dingAccountChangedAccountBlock; // @synthesize dingAccountChangedAccountBlock=_dingAccountChangedAccountBlock;
@property(copy, nonatomic) CDUnknownBlockType addedAccountBlock; // @synthesize addedAccountBlock=_addedAccountBlock;
- (void).cxx_destruct;
- (void)gotoPushSetting;
- (void)gotoSubscribeVC;
- (void)onAddAcountClicked:(id)arg1;
- (void)gotoAccountSetting:(id)arg1;
- (void)changeMailAddress;
- (void)openWebViewWithUrlString:(id)arg1;
- (void)onOrgMailManageClicked:(id)arg1;
- (void)onHeadlineClicked:(id)arg1;
- (void)onLiftTopChanged:(id)arg1;
- (void)onMailNoticeChanged:(id)arg1;
- (void)openURL:(id)arg1 title:(id)arg2;
- (void)onFeedbackPressed:(id)arg1;
- (id)commentForOrgMailSection;
- (void)requestEntStatus;
- (void)checkOperationAccount:(CDUnknownBlockType)arg1;
- (void)onMailSenderNameClicked:(id)arg1;
- (void)onMailSignatureClicked:(id)arg1;
- (void)onLiftMailSwitcherClicked:(id)arg1;
- (void)tableView:(id)arg1 rowWithCell:(id)arg2 withItem:(id)arg3;
- (void)buildDataSource;
- (void)buildEnterpriseCard;
- (void)buildLocalAccounts;
- (void)refreshEmailInfo;
- (void)viewDidLoad;

@end

