//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTSearchServiceResult-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface DTSearchServiceResult : NSObject <DTSearchServiceResult>
{
    _Bool _hasMore;
    NSArray *_values;
    unsigned long long _totalCount;
    long long _offset;
    NSString *_offsetString;
    NSDictionary *_logMap;
}

+ (id)resultWithValues:(id)arg1 totalCount:(unsigned long long)arg2 offsetString:(id)arg3 hasMore:(_Bool)arg4 logMap:(id)arg5;
+ (id)resultWithValues:(id)arg1 totalCount:(unsigned long long)arg2 offset:(long long)arg3 hasMore:(_Bool)arg4 logMap:(id)arg5;
@property(copy, nonatomic) NSDictionary *logMap; // @synthesize logMap=_logMap;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSString *offsetString; // @synthesize offsetString=_offsetString;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bucket;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

