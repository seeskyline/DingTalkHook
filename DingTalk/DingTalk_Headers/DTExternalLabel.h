//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface DTExternalLabel : NSObject <NSCopying>
{
    _Bool _isSelected;
    long long _labelId;
    NSString *_name;
    long long _color;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) long long color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long labelId; // @synthesize labelId=_labelId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
