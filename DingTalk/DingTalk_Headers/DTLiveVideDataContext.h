//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface DTLiveVideDataContext : NSObject
{
    _Bool _hasLoadInitData;
    NSMutableDictionary *_extensionSet;
    NSMutableSet *_livingCidSet;
}

- (void).cxx_destruct;
- (void)conversationUpdatedNotification:(id)arg1;
- (id)livingCids;
- (id)livingConversations;
- (_Bool)hasLivingConversation;
- (void)updateWithConversations:(id)arg1 deleteCids:(id)arg2;
- (void)updateWithConversations:(id)arg1;
- (_Bool)doUpdateConv:(id)arg1 added:(_Bool *)arg2;
- (_Bool)removeLivingCids:(id)arg1;
- (_Bool)updateConv:(id)arg1 added:(_Bool *)arg2;
- (void)dealloc;
- (id)init;

@end
