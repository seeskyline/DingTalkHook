//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTHybridKVStorageProtocol-Protocol.h"

@class DTKVStorage, NSString;

@interface DTHybridKVStorageIMP : NSObject <DTHybridKVStorageProtocol>
{
    DTKVStorage *_kvStorage;
}

@property(retain, nonatomic) DTKVStorage *kvStorage; // @synthesize kvStorage=_kvStorage;
- (void).cxx_destruct;
- (void)saveHybridKeyValuesWithDictionary:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)removeHybridValueFouKey:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)getHybridValueForKey:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)saveHybridValue:(id)arg1 forKey:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (_Bool)saveHybridKeyValuesWithDictionary:(id)arg1;
- (void)removeHybridValueFouKey:(id)arg1;
- (id)getHybridValueForKey:(id)arg1;
- (_Bool)saveHybridValue:(id)arg1 forKey:(id)arg2;
- (id)initWithDbConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
