//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTNetworkingResultModel : Marshal
{
    _Bool _success;
    NSNumber *_deviceCount;
    NSString *_corpId;
}

@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(retain, nonatomic) NSNumber *deviceCount; // @synthesize deviceCount=_deviceCount;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
