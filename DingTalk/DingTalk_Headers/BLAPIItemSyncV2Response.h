//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLAPIBaseResponse.h"

@class NSMutableArray, NSString;

@interface BLAPIItemSyncV2Response : BLAPIBaseResponse
{
    NSString *_syncBizType;
    long long _syncDataScope;
    NSMutableArray *_syncResults;
}

@property(retain, nonatomic) NSMutableArray *syncResults; // @synthesize syncResults=_syncResults;
@property(nonatomic) long long syncDataScope; // @synthesize syncDataScope=_syncDataScope;
@property(retain, nonatomic) NSString *syncBizType; // @synthesize syncBizType=_syncBizType;
- (void).cxx_destruct;
- (void)buildSyncItemsWithDict:(id)arg1;

@end
