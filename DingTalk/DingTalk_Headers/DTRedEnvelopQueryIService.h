//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTRedEnvelopQueryIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)checkArguments:(id)arg1 size:(id)arg2 type:(id)arg3 pickPlanTime:(id)arg4 callback:(id)arg5;
- (void)queryPlanSubscribeStatus:(id)arg1 clusterId:(id)arg2 callback:(id)arg3;
- (void)planTimePressurce:(id)arg1 callback:(id)arg2;
- (void)calGoodTime:(id)arg1;
- (void)fetchBalance:(id)arg1;
- (void)queryRedEnvelopClusterByPage:(id)arg1 clusterId:(id)arg2 startTime:(id)arg3 size:(id)arg4 flowId:(id)arg5 callback:(id)arg6;
- (void)queryRedEnvelopCluster:(id)arg1 clusterId:(id)arg2 start:(id)arg3 size:(id)arg4 callback:(id)arg5;
- (void)queryReceivedRedEnvelops:(id)arg1 start:(id)arg2 size:(id)arg3 callback:(id)arg4;
- (void)querySentRedEnvelopClusters:(id)arg1 start:(id)arg2 size:(id)arg3 callback:(id)arg4;

@end
