//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol DTLocationManagerConfigDelegate;

@interface DTLocationManagerConfig : NSObject
{
    id <DTLocationManagerConfigDelegate> _delegate;
}

+ (id)defaultConfig;
@property(nonatomic) __weak id <DTLocationManagerConfigDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *operatorType;
@property(readonly, copy, nonatomic) NSString *netType;
@property(readonly, copy, nonatomic) NSString *amapApiKey;

@end

