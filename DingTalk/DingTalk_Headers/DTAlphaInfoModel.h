//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTAlphaInfoModel : OpenModel <OpenModelProtocol>
{
    NSString *_ssid;
    NSString *_pwd;
    NSString *_corpId;
}

+ (unsigned long long)currentNewestVersion;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(copy, nonatomic) NSString *pwd; // @synthesize pwd=_pwd;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
