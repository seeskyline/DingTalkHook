//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol DTHybridServiceProtocol <NSObject>
- (void)getLatestPage:(NSString *)arg1 eTag:(NSString *)arg2 corpId:(NSString *)arg3 cookie:(NSString *)arg4 ua:(NSString *)arg5 successBlock:(void (^)(DTRocketRespModel *))arg6 failureBlock:(void (^)(NSError *))arg7;
@end

