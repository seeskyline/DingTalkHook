//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DTMessageReactionEntity;

@protocol DTIMMessageReactionServiceProtocol <NSObject>
- (void)cancelLikeWithEntity:(id <DTMessageReactionEntity>)arg1 completion:(void (^)(_Bool, id, id <IMError>))arg2;
- (void)createLikeWithEntity:(id <DTMessageReactionEntity>)arg1 completion:(void (^)(_Bool, id, id <IMError>))arg2;
@end

