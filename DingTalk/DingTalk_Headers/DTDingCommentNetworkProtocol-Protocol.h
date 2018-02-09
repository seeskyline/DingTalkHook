//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizDingCommentModel, NSDictionary;

@protocol DTDingCommentNetworkProtocol <NSObject>
- (void)listDingCommentByType:(long long)arg1 type:(unsigned long long)arg2 latest:(_Bool)arg3 cursor:(long long)arg4 size:(long long)arg5 successBlock:(void (^)(DTBizDingCommentListModel *))arg6 failureBlock:(void (^)(id <IMError>))arg7;
- (void)listDingComment:(long long)arg1 latest:(_Bool)arg2 cursor:(long long)arg3 size:(int)arg4 success:(void (^)(DTBizDingCommentListModel *))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)removeDingComment:(long long)arg1 commentId:(long long)arg2 success:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)sendDingComment:(DTBizDingCommentModel *)arg1 atOpenIds:(NSDictionary *)arg2 success:(void (^)(DTBizDingCommentModel *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
@end
