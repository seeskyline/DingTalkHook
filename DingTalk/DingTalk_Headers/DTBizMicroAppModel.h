//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTBizMicroAppModel-Protocol.h"
#import "DTMicroAppProtocol-Protocol.h"

@class NSArray, NSString;

@interface DTBizMicroAppModel : NSObject <DTMicroAppProtocol, DTBizMicroAppModel>
{
    _Bool _hintShow;
    _Bool _imShow;
    _Bool _imMuti;
    _Bool _isSafeTunnel;
    _Bool _isIntercept;
    _Bool _isOnlyHpm;
    long long _agent;
    NSString *_author;
    NSString *_name;
    NSString *_desc;
    NSString *_icon;
    NSString *_homePage;
    long long _senderUid;
    long long _appId;
    long long _csOrder;
    long long _location;
    NSString *_hintText;
    long long _hintVersion;
    NSString *_rawHomePage;
    NSString *_groupKey;
    NSString *_groupName;
    long long _config;
    NSString *_imName;
    NSString *_imIcon;
    NSString *_imAction;
    NSArray *_imConvTypes;
    NSArray *_imMsgTypes;
    long long _securityTag;
    long long _sectionId;
    NSString *_sectionName;
    long long _sectionOrder;
    NSArray *_safePaths;
    NSArray *_safeThirdPaths;
    NSArray *_safeOpenLinkPaths;
    NSString *_iconIM;
    long long _flag;
    NSString *_nameZhCn;
    NSString *_nameZhTw;
    NSString *_nameEnUs;
    NSString *_nameJaJp;
}

+ (long long)appIdWithMicroApp:(long long)arg1;
@property(copy, nonatomic) NSString *nameJaJp; // @synthesize nameJaJp=_nameJaJp;
@property(copy, nonatomic) NSString *nameEnUs; // @synthesize nameEnUs=_nameEnUs;
@property(copy, nonatomic) NSString *nameZhTw; // @synthesize nameZhTw=_nameZhTw;
@property(copy, nonatomic) NSString *nameZhCn; // @synthesize nameZhCn=_nameZhCn;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *iconIM; // @synthesize iconIM=_iconIM;
@property(copy, nonatomic) NSArray *safeOpenLinkPaths; // @synthesize safeOpenLinkPaths=_safeOpenLinkPaths;
@property(copy, nonatomic) NSArray *safeThirdPaths; // @synthesize safeThirdPaths=_safeThirdPaths;
@property(copy, nonatomic) NSArray *safePaths; // @synthesize safePaths=_safePaths;
@property(nonatomic) _Bool isOnlyHpm; // @synthesize isOnlyHpm=_isOnlyHpm;
@property(nonatomic) _Bool isIntercept; // @synthesize isIntercept=_isIntercept;
@property(nonatomic) _Bool isSafeTunnel; // @synthesize isSafeTunnel=_isSafeTunnel;
@property(nonatomic) long long sectionOrder; // @synthesize sectionOrder=_sectionOrder;
@property(copy, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(nonatomic) long long sectionId; // @synthesize sectionId=_sectionId;
@property(nonatomic) long long securityTag; // @synthesize securityTag=_securityTag;
@property(copy, nonatomic) NSArray *imMsgTypes; // @synthesize imMsgTypes=_imMsgTypes;
@property(copy, nonatomic) NSArray *imConvTypes; // @synthesize imConvTypes=_imConvTypes;
@property(nonatomic) _Bool imMuti; // @synthesize imMuti=_imMuti;
@property(copy, nonatomic) NSString *imAction; // @synthesize imAction=_imAction;
@property(copy, nonatomic) NSString *imIcon; // @synthesize imIcon=_imIcon;
@property(copy, nonatomic) NSString *imName; // @synthesize imName=_imName;
@property(nonatomic) _Bool imShow; // @synthesize imShow=_imShow;
@property(nonatomic) long long config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupKey; // @synthesize groupKey=_groupKey;
@property(copy, nonatomic) NSString *rawHomePage; // @synthesize rawHomePage=_rawHomePage;
@property(nonatomic) long long hintVersion; // @synthesize hintVersion=_hintVersion;
@property(copy, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(nonatomic) _Bool hintShow; // @synthesize hintShow=_hintShow;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(nonatomic) long long csOrder; // @synthesize csOrder=_csOrder;
@property(nonatomic) long long appId; // @synthesize appId=_appId;
@property(nonatomic) long long senderUid; // @synthesize senderUid=_senderUid;
@property(copy, nonatomic) NSString *homePage; // @synthesize homePage=_homePage;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(nonatomic) long long agent; // @synthesize agent=_agent;
- (void).cxx_destruct;
- (id)name_i18n;
- (_Bool)isEqualToWidget:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isGrouped;
- (id)appendParamToAgentHttpLink:(id)arg1 value:(id)arg2;
- (id)parseAgentURL;
- (id)parseAgentHttpLink;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
