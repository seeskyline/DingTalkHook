//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@interface BLSimpleAPITask : BLBaseAPITask
{
    CDUnknownBlockType _processBlock;
    id _responseContext;
}

@property(retain, nonatomic) id responseContext; // @synthesize responseContext=_responseContext;
@property(copy, nonatomic) CDUnknownBlockType processBlock; // @synthesize processBlock=_processBlock;
- (void).cxx_destruct;
- (void)process;

@end
