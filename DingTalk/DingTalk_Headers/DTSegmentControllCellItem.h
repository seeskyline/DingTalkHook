//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class NSArray, NSAttributedString, NSString, UIColor, UIFont;

@interface DTSegmentControllCellItem : DTBaseCellItem
{
    NSString *_title;
    UIColor *_titleColor;
    UIFont *_titleFont;
    double _cellLeftMargin;
    NSAttributedString *_detailText;
    NSArray *_segmentsText;
    long long _selectedSegment;
    NSArray *_disableSegmentsIndexes;
    CDUnknownBlockType _finishAction;
    CDUnknownBlockType _detailClickAction;
}

@property(copy, nonatomic) CDUnknownBlockType detailClickAction; // @synthesize detailClickAction=_detailClickAction;
@property(copy, nonatomic) CDUnknownBlockType finishAction; // @synthesize finishAction=_finishAction;
@property(copy, nonatomic) NSArray *disableSegmentsIndexes; // @synthesize disableSegmentsIndexes=_disableSegmentsIndexes;
@property(nonatomic) long long selectedSegment; // @synthesize selectedSegment=_selectedSegment;
@property(copy, nonatomic) NSArray *segmentsText; // @synthesize segmentsText=_segmentsText;
@property(copy, nonatomic) NSAttributedString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic) double cellLeftMargin; // @synthesize cellLeftMargin=_cellLeftMargin;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)shouldHighlight;
- (double)heightForCell;
- (id)cellForItem;
- (id)reuseIdentifier;

@end

