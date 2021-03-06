//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface DTSearchUserDataSource : NSObject
{
    _Bool _shouldSearchServerFriend;
    NSString *_uuid;
    unsigned long long _searchUserType;
    NSDictionary *_userItemDic;
    NSDictionary *_selectedUserItemDic;
    long long _tabType;
    NSArray *_otoUids;
}

+ (void)searchUserWithNumberOrLetter:(id)arg1 searchController:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)openUserProfileWithWithSearchUser:(id)arg1 searchController:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)openConferenceWithUid:(long long)arg1 mobile:(id)arg2 name:(id)arg3 navigationController:(id)arg4;
+ (void)createUidWithPhone:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)openOTOConversationWithUid:(long long)arg1 name:(id)arg2;
+ (void)openConferenceWithWithSearchUser:(id)arg1 searchController:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)openMessageWithSearchUser:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
@property(copy) NSArray *otoUids; // @synthesize otoUids=_otoUids;
@property _Bool shouldSearchServerFriend; // @synthesize shouldSearchServerFriend=_shouldSearchServerFriend;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSDictionary *selectedUserItemDic; // @synthesize selectedUserItemDic=_selectedUserItemDic;
@property(copy) NSDictionary *userItemDic; // @synthesize userItemDic=_userItemDic;
@property(nonatomic) unsigned long long searchUserType; // @synthesize searchUserType=_searchUserType;
@property(copy) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)orgInfoWithEnterprise:(id)arg1;
- (unsigned long long)nextTypeWithCurrentSearchType:(unsigned long long)arg1;
- (void)searchServerEnterprisesWithSearchText:(id)arg1 orgId:(long long)arg2 filter:(id)arg3 offset:(id)arg4 size:(long long)arg5 needSearchFriend:(_Bool)arg6 searchLog:(id)arg7 users:(id)arg8 userItemDic:(id)arg9 recursiveTime:(long long)arg10 successBlock:(CDUnknownBlockType)arg11 failureBlock:(CDUnknownBlockType)arg12;
- (void)searchOTOUsers:(id)arg1 offset:(long long)arg2 size:(long long)arg3 users:(id)arg4 userItemDic:(id)arg5 recursiveTime:(long long)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)searchMobileContacts:(id)arg1 offset:(long long)arg2 size:(long long)arg3 users:(id)arg4 userItemDic:(id)arg5 recursiveTime:(long long)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)searchFriends:(id)arg1 offset:(long long)arg2 size:(long long)arg3 users:(id)arg4 userItemDic:(id)arg5 recursiveTime:(long long)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)searchUsuals:(id)arg1 offset:(long long)arg2 size:(long long)arg3 users:(id)arg4 userItemDic:(id)arg5 recursiveTime:(long long)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)searchAlias:(id)arg1 offset:(long long)arg2 size:(long long)arg3 users:(id)arg4 userItemDic:(id)arg5 recursiveTime:(long long)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)searchUserWithQuery:(id)arg1 searchLog:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)searchDataSourceWithQuery:(id)arg1 searchLog:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)setSelectedUsers:(id)arg1;
- (id)initWithSearchUserType:(unsigned long long)arg1 tabType:(long long)arg2;

@end

