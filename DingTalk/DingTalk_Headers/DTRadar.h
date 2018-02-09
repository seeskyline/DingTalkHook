//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIFont;

@interface DTRadar : UIView
{
    double _radius;
    double _extendRadius;
    double _radarLineWidth;
    UIColor *_radarLineColor;
    UIColor *_radarBackgroundColor;
    unsigned long long _sectionNumber;
    NSArray *_dimensions;
    UIColor *_dimensionTitleColor;
    UIFont *_dimensionTitleFont;
    CDUnknownBlockType _dimensionDidPress;
    unsigned long long _dimensionNumber;
    double _averageRadius;
}

@property(nonatomic) double averageRadius; // @synthesize averageRadius=_averageRadius;
@property(nonatomic) unsigned long long dimensionNumber; // @synthesize dimensionNumber=_dimensionNumber;
@property(copy, nonatomic) CDUnknownBlockType dimensionDidPress; // @synthesize dimensionDidPress=_dimensionDidPress;
@property(retain, nonatomic) UIFont *dimensionTitleFont; // @synthesize dimensionTitleFont=_dimensionTitleFont;
@property(retain, nonatomic) UIColor *dimensionTitleColor; // @synthesize dimensionTitleColor=_dimensionTitleColor;
@property(copy, nonatomic) NSArray *dimensions; // @synthesize dimensions=_dimensions;
@property(nonatomic) unsigned long long sectionNumber; // @synthesize sectionNumber=_sectionNumber;
@property(retain, nonatomic) UIColor *radarBackgroundColor; // @synthesize radarBackgroundColor=_radarBackgroundColor;
@property(retain, nonatomic) UIColor *radarLineColor; // @synthesize radarLineColor=_radarLineColor;
@property(nonatomic) double radarLineWidth; // @synthesize radarLineWidth=_radarLineWidth;
@property(nonatomic) double extendRadius; // @synthesize extendRadius=_extendRadius;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void).cxx_destruct;
- (struct CGRect)textRect:(id)arg1 withSize:(struct CGSize)arg2 font:(id)arg3;
- (void)dimensionAction:(id)arg1;
- (void)addDimesionLabelsOnChart;
- (id)drawSeparate:(struct CGPoint)arg1;
- (id)separateShapeLayer:(struct CGPoint)arg1;
- (id)drawRadar:(long long)arg1;
- (id)radarShapeLayer:(long long)arg1;
- (id)repeatArrayWithRadius:(double)arg1 times:(unsigned long long)arg2;
- (void)removeAllSubLayers;
- (void)caculateGlobalParameters;
- (void)draw;
- (id)initWithFrame:(struct CGRect)arg1;

@end
