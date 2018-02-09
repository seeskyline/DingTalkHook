//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTUserNameLabelDelegate-Protocol.h"

@class DTAvatarImageView, DTAvatarListView, DTBizRedEnvelopClusterPickingStatus, DTUserNameLabel, DTWebImageView, NSString, UIButton, UIImageView, UILabel;
@protocol DTOpenLuckyMoneyEntityViewDelegate;

@interface DTOpenLuckyMoneyEntityView : UIView <DTUserNameLabelDelegate>
{
    double _scale;
    _Bool _showPickButton;
    id <DTOpenLuckyMoneyEntityViewDelegate> _delegate;
    DTBizRedEnvelopClusterPickingStatus *_pickingModel;
    UIImageView *_backgroundImageView;
    UIImageView *_sealMoneyPartImageView;
    DTAvatarImageView *_luckMoneySenderAvatarView;
    DTWebImageView *_enterpriseAvatarView;
    DTUserNameLabel *_senderFromLabel;
    DTUserNameLabel *_luckMoneyTypeInfoLabel;
    DTAvatarListView *_sendToListView;
    UILabel *_congratulationsLabel;
    UILabel *_moneyLabel;
    UIButton *_viewMoreButton;
    UIButton *_viewEnterpriseMoreButton;
    UIButton *_openLuckyMoneyButton;
    UIImageView *_openBtnBackgroundImageView;
    UIButton *_viewRandomDetailButton;
}

@property(nonatomic) _Bool showPickButton; // @synthesize showPickButton=_showPickButton;
@property(retain, nonatomic) UIButton *viewRandomDetailButton; // @synthesize viewRandomDetailButton=_viewRandomDetailButton;
@property(retain, nonatomic) UIImageView *openBtnBackgroundImageView; // @synthesize openBtnBackgroundImageView=_openBtnBackgroundImageView;
@property(retain, nonatomic) UIButton *openLuckyMoneyButton; // @synthesize openLuckyMoneyButton=_openLuckyMoneyButton;
@property(retain, nonatomic) UIButton *viewEnterpriseMoreButton; // @synthesize viewEnterpriseMoreButton=_viewEnterpriseMoreButton;
@property(retain, nonatomic) UIButton *viewMoreButton; // @synthesize viewMoreButton=_viewMoreButton;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UILabel *congratulationsLabel; // @synthesize congratulationsLabel=_congratulationsLabel;
@property(retain, nonatomic) DTAvatarListView *sendToListView; // @synthesize sendToListView=_sendToListView;
@property(retain, nonatomic) DTUserNameLabel *luckMoneyTypeInfoLabel; // @synthesize luckMoneyTypeInfoLabel=_luckMoneyTypeInfoLabel;
@property(retain, nonatomic) DTUserNameLabel *senderFromLabel; // @synthesize senderFromLabel=_senderFromLabel;
@property(retain, nonatomic) DTWebImageView *enterpriseAvatarView; // @synthesize enterpriseAvatarView=_enterpriseAvatarView;
@property(retain, nonatomic) DTAvatarImageView *luckMoneySenderAvatarView; // @synthesize luckMoneySenderAvatarView=_luckMoneySenderAvatarView;
@property(retain, nonatomic) UIImageView *sealMoneyPartImageView; // @synthesize sealMoneyPartImageView=_sealMoneyPartImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) DTBizRedEnvelopClusterPickingStatus *pickingModel; // @synthesize pickingModel=_pickingModel;
@property(nonatomic) __weak id <DTOpenLuckyMoneyEntityViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadViewsFromModel:(id)arg1;
- (void)_configRandomRedEnvelop:(id)arg1;
- (void)_configNormalRedEnvelop:(id)arg1;
- (void)userNameLabelTextDidChange:(id)arg1 change:(id)arg2;
- (void)_configEnterpriseNewRedEnvelop:(id)arg1;
- (void)_configEnterpriseRedEnvelop:(id)arg1;
- (id)currentCluster;
- (void)openLuckyMoney:(double)arg1 stopDuration:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)startRotateOpenLuckyMoneyBtn:(long long)arg1 angle:(double)arg2;
- (void)stopLoading;
- (void)performLoading;
- (void)sizeCtrlToFit;
- (void)didClickViewMoreBtn:(id)arg1;
- (void)didClickOpenLuckyMoneyBtn:(id)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsForOthers;
- (void)layoutSubviewsForRandom;
- (void)layoutSubviewsForEnterpriseNew;
- (void)layoutSubviewsForEnterprise;
- (_Bool)isRandomLuckyMoney;
- (_Bool)isEnterpriseNewLuckyMoney;
- (_Bool)isEnterpriseLuckyMoney;
- (double)scale;
- (double)infoMarginTop;
- (double)sendFromTopMargin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
