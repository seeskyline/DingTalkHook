//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTConfMemberInfoModel : Marshal
{
    _Bool _canSpeek;
    NSNumber *_uid;
    NSNumber *_status;
    NSString *_nickName;
    NSString *_mediaId;
    NSString *_hangupCause;
}

@property(copy, nonatomic) NSString *hangupCause; // @synthesize hangupCause=_hangupCause;
@property(nonatomic) _Bool canSpeek; // @synthesize canSpeek=_canSpeek;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

