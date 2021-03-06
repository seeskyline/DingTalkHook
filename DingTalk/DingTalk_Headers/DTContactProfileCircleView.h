//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel, UIView;

@interface DTContactProfileCircleView : UIButton
{
    UILabel *_label;
    UIView *_iconView;
    UIImageView *_arrowImageView;
    UIView *_bottomSeparator;
    UIView *_thumbnailContainer;
}

@property(retain, nonatomic) UIView *thumbnailContainer; // @synthesize thumbnailContainer=_thumbnailContainer;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)configWithCirclePhotos:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

