//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTImageView, NSString, UIButton, UIColor, UIImage, UILabel;

@interface DTBannerView : UIView
{
    _Bool _hasInit;
    unsigned long long _style;
    UIImage *_iconImage;
    NSString *_iconURL;
    NSString *_title;
    long long _titleBreakMode;
    CDUnknownBlockType _pressBlock;
    CDUnknownBlockType _closeBlock;
    DTImageView *_icon;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIButton *_eventButton;
    UIColor *_closeBtnColor;
}

+ (double)fixedHeight;
@property(nonatomic) _Bool hasInit; // @synthesize hasInit=_hasInit;
@property(retain, nonatomic) UIColor *closeBtnColor; // @synthesize closeBtnColor=_closeBtnColor;
@property(retain, nonatomic) UIButton *eventButton; // @synthesize eventButton=_eventButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTImageView *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType pressBlock; // @synthesize pressBlock=_pressBlock;
@property(nonatomic) long long titleBreakMode; // @synthesize titleBreakMode=_titleBreakMode;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)close;
- (void)click;
- (void)configForDTBannerViewStyleYellowIconClose;
- (void)configForDTBannerViewStyleRedIconClose;
- (void)configForDTBannerViewStyleSectionHeader;
- (void)configForDTBannerViewStyleYellowBanner;
- (void)configForDTBannerViewStyleBlueBanner;
- (void)configWithStyle:(unsigned long long)arg1;
- (id)initWithWidth:(double)arg1 style:(unsigned long long)arg2;
- (id)initWithWidth:(double)arg1;

@end

