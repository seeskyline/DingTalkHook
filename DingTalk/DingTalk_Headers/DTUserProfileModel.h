//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTAuthOrgModel, DTUserProfileSettingsModel, NSArray, NSDate, NSNumber, NSString;

@interface DTUserProfileModel : Marshal
{
    _Bool _isActive;
    _Bool _isDataComplete;
    _Bool _isOrgUser;
    NSNumber *_uid;
    NSString *_nick;
    NSString *_nickPinyin;
    NSString *_gender;
    NSString *_avatarMediaId;
    NSDate *_dob;
    NSString *_city;
    NSString *_stateCode;
    NSString *_mobile;
    NSNumber *_ver;
    NSArray *_labels;
    NSString *_name;
    NSNumber *_type;
    NSString *_extension;
    NSString *_dingTalkId;
    NSString *_email;
    NSArray *_authOrgs;
    NSNumber *_activeTime;
    NSNumber *_status;
    NSString *_orgEmail;
    NSNumber *_industryCode;
    NSString *_industry;
    NSNumber *_numberType;
    NSString *_workMobileStateCode;
    NSString *_workMobile;
    DTAuthOrgModel *_orgInfo;
    NSArray *_orgIdList;
    DTUserProfileSettingsModel *_settings;
    NSString *_jobPosition;
    NSString *_orgInfoStr;
}

@property(copy, nonatomic) NSString *orgInfoStr; // @synthesize orgInfoStr=_orgInfoStr;
@property(copy, nonatomic) NSString *jobPosition; // @synthesize jobPosition=_jobPosition;
@property(retain, nonatomic) DTUserProfileSettingsModel *settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSArray *orgIdList; // @synthesize orgIdList=_orgIdList;
@property(retain, nonatomic) DTAuthOrgModel *orgInfo; // @synthesize orgInfo=_orgInfo;
@property(copy, nonatomic) NSString *workMobile; // @synthesize workMobile=_workMobile;
@property(copy, nonatomic) NSString *workMobileStateCode; // @synthesize workMobileStateCode=_workMobileStateCode;
@property(retain, nonatomic) NSNumber *numberType; // @synthesize numberType=_numberType;
@property(copy, nonatomic) NSString *industry; // @synthesize industry=_industry;
@property(retain, nonatomic) NSNumber *industryCode; // @synthesize industryCode=_industryCode;
@property(copy, nonatomic) NSString *orgEmail; // @synthesize orgEmail=_orgEmail;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *activeTime; // @synthesize activeTime=_activeTime;
@property(copy, nonatomic) NSArray *authOrgs; // @synthesize authOrgs=_authOrgs;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *dingTalkId; // @synthesize dingTalkId=_dingTalkId;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isOrgUser; // @synthesize isOrgUser=_isOrgUser;
@property(nonatomic) _Bool isDataComplete; // @synthesize isDataComplete=_isDataComplete;
@property(copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSNumber *ver; // @synthesize ver=_ver;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *stateCode; // @synthesize stateCode=_stateCode;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSDate *dob; // @synthesize dob=_dob;
@property(copy, nonatomic) NSString *avatarMediaId; // @synthesize avatarMediaId=_avatarMediaId;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *nickPinyin; // @synthesize nickPinyin=_nickPinyin;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

