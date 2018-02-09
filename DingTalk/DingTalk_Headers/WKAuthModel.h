//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface WKAuthModel : NSObject <NSCoding, NSCopying>
{
    NSString *_accessToken;
    NSString *_refreshToken;
    NSString *_cmd;
    long long _expertIn;
    long long _uid;
}

+ (id)authModelFromDeviceAuthModel:(id)arg1;
+ (id)authModelFromWKAuthModel:(id)arg1;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long expertIn; // @synthesize expertIn=_expertIn;
@property(copy, nonatomic) NSString *cmd; // @synthesize cmd=_cmd;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
