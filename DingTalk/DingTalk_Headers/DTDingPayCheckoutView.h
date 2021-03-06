//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAmountLabel, DTDingPayCheckoutViewModel, DTDingPaymentCell, UIButton, UILabel;

@interface DTDingPayCheckoutView : UIView
{
    DTDingPayCheckoutViewModel *_viewModel;
    UIButton *_closeBtn;
    UILabel *_titleLabel;
    DTAmountLabel *_amountLabel;
    DTDingPaymentCell *_paymentCell;
    UIButton *_payBtn;
    UILabel *_footerLabel;
}

@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) DTDingPaymentCell *paymentCell; // @synthesize paymentCell=_paymentCell;
@property(retain, nonatomic) DTAmountLabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) DTDingPayCheckoutViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)onPay;
- (void)onClose;
- (void)layoutSubviews;
- (void)configWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

