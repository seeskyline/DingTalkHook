//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTAbstractMessagePart.h"

@class NSString;

@interface DTIMAPMessagePart : DTAbstractMessagePart
{
    NSString *_partID;
    unsigned long long _size;
    long long _encoding;
}

@property(nonatomic) long long encoding; // @synthesize encoding=_encoding;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *partID; // @synthesize partID=_partID;
- (void).cxx_destruct;

@end

