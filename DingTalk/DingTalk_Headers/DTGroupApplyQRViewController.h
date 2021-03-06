//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTButton, DTEmptyResultView, DTGroupInvite, DTShareJSInfoModel, UIImage, UIImageView, UILabel, UIView, UTShareContent;

@interface DTGroupApplyQRViewController : DTViewController
{
    DTGroupInvite *_inviteModel;
    UIImageView *_orgCardView;
    UIImageView *_qrCodeImageView;
    UIView *_orgCardTitleView;
    UIImageView *_dingIcon;
    UILabel *_footerTipLabel;
    DTButton *_saveButton;
    DTButton *_shareButton;
    UTShareContent *_shareContent;
    DTShareJSInfoModel *_shareInfo;
    UIImage *_qrCode;
    DTEmptyResultView *_emptyResultView;
}

@property(retain, nonatomic) DTEmptyResultView *emptyResultView; // @synthesize emptyResultView=_emptyResultView;
@property(retain, nonatomic) UIImage *qrCode; // @synthesize qrCode=_qrCode;
@property(retain, nonatomic) DTShareJSInfoModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) UTShareContent *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) DTButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) DTButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UILabel *footerTipLabel; // @synthesize footerTipLabel=_footerTipLabel;
@property(retain, nonatomic) UIImageView *dingIcon; // @synthesize dingIcon=_dingIcon;
@property(retain, nonatomic) UIView *orgCardTitleView; // @synthesize orgCardTitleView=_orgCardTitleView;
@property(retain, nonatomic) UIImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(retain, nonatomic) UIImageView *orgCardView; // @synthesize orgCardView=_orgCardView;
@property(retain, nonatomic) DTGroupInvite *inviteModel; // @synthesize inviteModel=_inviteModel;
- (void).cxx_destruct;
- (void)StatisticsEventWithArg:(id)arg1;
- (void)gotoConversationSelectController;
- (void)showMenu;
- (void)shareTo:(id)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveCardToAlumb:(id)arg1;
- (void)generateQRImage;
- (void)loadViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

