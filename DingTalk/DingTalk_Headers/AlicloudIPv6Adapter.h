//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AlicloudIPv6Adapter : NSObject
{
    _Bool isIPv6Only;
    _Bool isIPv6OnlyResolved;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
- (_Bool)isIPv6Address:(id)arg1;
- (_Bool)isIPv4Address:(id)arg1;
- (int)getDNSServersIpStack;
- (id)handleIpv4Address:(id)arg1;
- (_Bool)reResolveIPv6OnlyStatus;
- (void)appDidBecomeActiveFunc;
- (_Bool)isIPv6OnlyNetwork;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

