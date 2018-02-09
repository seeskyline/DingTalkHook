//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class FSCalendar, FSCalendarWeekdayView, NSDate, UILabel, UIView;

@interface FSCalendarStickyHeader : UICollectionReusableView
{
    FSCalendar *_calendar;
    UILabel *_titleLabel;
    NSDate *_month;
    UIView *_contentView;
    UIView *_bottomBorder;
    FSCalendarWeekdayView *_weekdayView;
}

@property(nonatomic) __weak FSCalendarWeekdayView *weekdayView; // @synthesize weekdayView=_weekdayView;
@property(nonatomic) __weak UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSDate *month; // @synthesize month=_month;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak FSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (void)configureAppearance;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
