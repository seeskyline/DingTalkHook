//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTVCModule.h"

@class DTVidyoConfSmartDevsListResultModel;

@interface DTVCDataModule : DTVCModule
{
    DTVidyoConfSmartDevsListResultModel *_smartDevList;
}

@property(retain, nonatomic) DTVidyoConfSmartDevsListResultModel *smartDevList; // @synthesize smartDevList=_smartDevList;
- (void).cxx_destruct;
- (_Bool)hasSmartDevListByOrdId:(id)arg1;
- (id)smartDevListByOrgId:(id)arg1;

@end

