//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface FSCalendarTransitionAttributes : NSObject
{
    NSDate *_sourcePage;
    NSDate *_targetPage;
    long long _focusedRowNumber;
    NSDate *_focusedDate;
    NSDate *_firstDayOfMonth;
    struct CGRect _sourceBounds;
    struct CGRect _targetBounds;
}

@property(retain, nonatomic) NSDate *firstDayOfMonth; // @synthesize firstDayOfMonth=_firstDayOfMonth;
@property(nonatomic) NSDate *focusedDate; // @synthesize focusedDate=_focusedDate;
@property(nonatomic) long long focusedRowNumber; // @synthesize focusedRowNumber=_focusedRowNumber;
@property(retain, nonatomic) NSDate *targetPage; // @synthesize targetPage=_targetPage;
@property(retain, nonatomic) NSDate *sourcePage; // @synthesize sourcePage=_sourcePage;
@property(nonatomic) struct CGRect targetBounds; // @synthesize targetBounds=_targetBounds;
@property(nonatomic) struct CGRect sourceBounds; // @synthesize sourceBounds=_sourceBounds;
- (void).cxx_destruct;

@end

