//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol DTCModel;

@protocol DTBizDingLinkModel <NSObject>
@property(copy, nonatomic) NSDictionary *extension;
@property(copy, nonatomic) NSString *linkUrl;
@property(copy, nonatomic) NSString *picMediaId;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) long long type;
- (id <DTCModel>)getCModel;
@end
