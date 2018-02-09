//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DTFTSQuery : NSObject
{
    unsigned long long _queryType;
    NSString *_condition;
    NSString *_filter;
    NSString *_order;
    NSArray *_columns;
    struct _NSRange _range;
}

+ (id)filterSpecialChar:(id)arg1;
+ (id)condition:(id)arg1 or:(id)arg2;
+ (id)condition:(id)arg1 and:(id)arg2;
+ (id)conditionWithColumn:(id)arg1 value:(id)arg2 fullMatch:(_Bool)arg3;
+ (id)conditionWithColumn:(id)arg1 value:(id)arg2;
+ (id)conditionWithValue:(id)arg1 fullMatch:(_Bool)arg2;
+ (id)conditionWithValue:(id)arg1;
+ (id)queryWithType:(unsigned long long)arg1 condition:(id)arg2 filter:(id)arg3 order:(id)arg4 range:(struct _NSRange)arg5 columns:(id)arg6;
+ (id)queryWithType:(unsigned long long)arg1 condition:(id)arg2 range:(struct _NSRange)arg3;
@property(copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *order; // @synthesize order=_order;
@property(copy, nonatomic) NSString *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSString *condition; // @synthesize condition=_condition;
@property(nonatomic) unsigned long long queryType; // @synthesize queryType=_queryType;
- (void).cxx_destruct;

@end
