//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickHandler.h"

#import "DTContactPickViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface DTContactPickSmartDevHandler : DTContactPickHandler <DTContactPickViewControllerDelegate>
{
    _Bool _isLoading;
    NSArray *_dataSources;
    NSDictionary *_index;
    NSArray *_smartDevList;
    NSNumber *_orgId;
}

@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSArray *smartDevList; // @synthesize smartDevList=_smartDevList;
@property(copy, nonatomic) NSDictionary *index; // @synthesize index=_index;
@property(copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
- (void).cxx_destruct;
- (void)updateCellItemWithIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)personsHasUnselected:(id)arg1;
- (void)personsHasSelected:(id)arg1;
- (void)personHasUnselected:(id)arg1;
- (void)personHasSelected:(id)arg1;
- (void)showSmartDevList;
- (id)emptyViewForViewController:(id)arg1;
- (_Bool)shouldShowEmptyView:(id)arg1;
- (id)titleForViewController:(id)arg1;
- (id)dataSourceForPickViewController:(id)arg1;
- (void)pickViewWillDestory:(id)arg1;
- (void)pickViewWillShow:(id)arg1;
- (void)dealloc;
- (id)initWithOrgId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
