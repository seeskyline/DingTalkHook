//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class YYReachability;

@interface NINetwork : NSObject
{
    YYReachability *_reachability;
}

+ (id)sharedNetwork;
@property(retain, nonatomic) YYReachability *reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
- (id)currentNet;
- (_Bool)isReachable;
- (void)didChangedNotify:(id)arg1;
- (void)startNotify;
- (id)init;

@end

