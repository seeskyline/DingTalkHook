//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, WKBizXpnActionModel;

@interface WKBizXpnPushModel : NSObject
{
    NSString *_alertContent;
    NSString *_sound;
    NSDictionary *_params;
    long long _isXpnOff;
    long long _timeTolive;
    long long _incrbadge;
    long long _templateId;
    NSString *_msgText;
    WKBizXpnActionModel *_action;
}

@property(retain, nonatomic) WKBizXpnActionModel *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *msgText; // @synthesize msgText=_msgText;
@property(nonatomic) long long templateId; // @synthesize templateId=_templateId;
@property(nonatomic) long long incrbadge; // @synthesize incrbadge=_incrbadge;
@property(nonatomic) long long timeTolive; // @synthesize timeTolive=_timeTolive;
@property(nonatomic) long long isXpnOff; // @synthesize isXpnOff=_isXpnOff;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property(copy, nonatomic) NSString *alertContent; // @synthesize alertContent=_alertContent;
- (void).cxx_destruct;

@end
