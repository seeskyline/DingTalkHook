//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface DTCAttendee : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_email;
    NSString *_pinYinName;
    unsigned long long _source;
}

+ (id)attenderWithObjects:(id)arg1 account:(id)arg2;
+ (id)attenderWithObject:(id)arg1 account:(id)arg2;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *pinYinName; // @synthesize pinYinName=_pinYinName;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

