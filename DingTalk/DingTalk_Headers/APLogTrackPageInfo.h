//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface APLogTrackPageInfo : NSObject
{
    _Bool _needRpc;
    NSString *_pageId;
    NSString *_timestamp;
    NSString *_spmId;
    NSString *_information;
}

@property(readonly) _Bool needRpc; // @synthesize needRpc=_needRpc;
@property(readonly, copy) NSString *information; // @synthesize information=_information;
@property(readonly, copy) NSString *spmId; // @synthesize spmId=_spmId;
@property(readonly, copy) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy) NSString *pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;

@end

