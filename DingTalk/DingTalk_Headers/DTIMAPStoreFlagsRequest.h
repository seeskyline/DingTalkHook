//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTIMAPRequest.h"

@class NSArray, NSIndexSet, NSString;

@interface DTIMAPStoreFlagsRequest : DTIMAPRequest
{
    int _flagsKind;
    int _flag;
    NSString *_folder;
    NSIndexSet *_uidSets;
    NSArray *_customFlags;
}

@property(retain, nonatomic) NSArray *customFlags; // @synthesize customFlags=_customFlags;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) int flagsKind; // @synthesize flagsKind=_flagsKind;
@property(retain, nonatomic) NSIndexSet *uidSets; // @synthesize uidSets=_uidSets;
@property(copy, nonatomic) NSString *folder; // @synthesize folder=_folder;
- (void).cxx_destruct;
- (void)mainRequest;

@end
