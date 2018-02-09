//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PulsingHaloLayer, UIImageView;

@interface DTSmartDeviceConnectMaskViewV3 : UIView
{
    double _pulsingRadius;
    UIImageView *_circleView;
    PulsingHaloLayer *_halo;
}

@property(nonatomic) __weak PulsingHaloLayer *halo; // @synthesize halo=_halo;
@property(retain, nonatomic) UIImageView *circleView; // @synthesize circleView=_circleView;
@property(nonatomic) double pulsingRadius; // @synthesize pulsingRadius=_pulsingRadius;
- (void).cxx_destruct;
- (void)resetMaskProperties;
- (void)loadComponents;
- (void)stopPulsing;
- (void)startPulsing;
- (id)initWithFrame:(struct CGRect)arg1;

@end
