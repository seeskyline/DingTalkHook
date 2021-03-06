//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTGroupTypeOptionModel, DTOrgIdNameModel, NSArray;

@interface DTGroupTypeDataProvider : NSObject
{
    long long _option;
    _Bool _isPickedByUser;
    _Bool _didChangeOptionOnce;
    NSArray *_optionList;
    DTGroupTypeOptionModel *_pickedOption;
    NSArray *_privateOrgList;
    NSArray *_coopertiveMemberOrgList;
    NSArray *_coopertiveOwnerOrgList;
    DTOrgIdNameModel *_pickedPrivateGroupOrg;
    DTOrgIdNameModel *_pickedCooperativeOwnerOrg;
    NSArray *_pickedCooperativeMemberOrgList;
    CDUnknownBlockType _didChangePrivateGroupOrganizationBlock;
}

+ (_Bool)isSupportCooperativeGroup;
+ (id)cooperativeMemberOrgList:(id)arg1 memberOrgList:(id)arg2;
+ (id)preferredOwnerOrgWithList:(id)arg1;
+ (long long)groupTypeOptionFromGroupTag:(long long)arg1;
+ (id)providerWithOption:(long long)arg1 groupModel:(id)arg2;
+ (id)provoderWithGroupTagModel:(id)arg1;
+ (id)optionListForGroupTagModel:(id)arg1;
+ (id)pickedOptionForTag:(long long)arg1 optionList:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType didChangePrivateGroupOrganizationBlock; // @synthesize didChangePrivateGroupOrganizationBlock=_didChangePrivateGroupOrganizationBlock;
@property(nonatomic) _Bool didChangeOptionOnce; // @synthesize didChangeOptionOnce=_didChangeOptionOnce;
@property(retain, nonatomic) NSArray *pickedCooperativeMemberOrgList; // @synthesize pickedCooperativeMemberOrgList=_pickedCooperativeMemberOrgList;
@property(retain, nonatomic) DTOrgIdNameModel *pickedCooperativeOwnerOrg; // @synthesize pickedCooperativeOwnerOrg=_pickedCooperativeOwnerOrg;
@property(nonatomic) _Bool isPickedByUser; // @synthesize isPickedByUser=_isPickedByUser;
@property(retain, nonatomic) DTOrgIdNameModel *pickedPrivateGroupOrg; // @synthesize pickedPrivateGroupOrg=_pickedPrivateGroupOrg;
@property(readonly, nonatomic) NSArray *coopertiveOwnerOrgList; // @synthesize coopertiveOwnerOrgList=_coopertiveOwnerOrgList;
@property(readonly, nonatomic) NSArray *coopertiveMemberOrgList; // @synthesize coopertiveMemberOrgList=_coopertiveMemberOrgList;
@property(readonly, nonatomic) NSArray *privateOrgList; // @synthesize privateOrgList=_privateOrgList;
@property(retain, nonatomic) DTGroupTypeOptionModel *pickedOption; // @synthesize pickedOption=_pickedOption;
@property(readonly, nonatomic) NSArray *optionList; // @synthesize optionList=_optionList;
- (void).cxx_destruct;
- (id)pickedCooperativeGroupOrgIdList;
- (void)didChangeOption:(long long)arg1;
- (void)didPickCooperativeGroupOwnerOrgModel:(id)arg1 memberOrgList:(id)arg2;
- (void)didPickCooperativeGroupOwnerOrgModel:(id)arg1;
- (void)didPickPrivateGroupOrgModel:(id)arg1;
- (id)groupTypeOptionListWithOption:(long long)arg1;
- (void)setupContext;
- (id)initWithGroupTagModel:(id)arg1;
- (id)initWithOption:(long long)arg1 privateOrgList:(id)arg2 ownerOrgList:(id)arg3 memberOrgList:(id)arg4;

@end

