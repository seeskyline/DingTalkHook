//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTMergeMessageTimeLineItem, UILabel;

@interface DTMergeMessageTimeLineView : UIView
{
    UIView *_leftLine;
    UIView *_rightLine;
    UILabel *_timeLabel;
    DTMergeMessageTimeLineItem *_item;
}

@property(retain, nonatomic) DTMergeMessageTimeLineItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
- (void).cxx_destruct;
- (void)configWithItem:(id)arg1;

@end

