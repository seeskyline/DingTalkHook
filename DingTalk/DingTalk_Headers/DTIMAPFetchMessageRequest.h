//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTIMAPRequest.h"

@class DTIMAPFolder, NSData, NSString;

@interface DTIMAPFetchMessageRequest : DTIMAPRequest
{
    unsigned int _uid;
    NSString *_path;
    DTIMAPFolder *_folder;
    NSData *_rfc822Data;
}

@property(readonly, nonatomic) NSData *rfc822Data; // @synthesize rfc822Data=_rfc822Data;
@property(retain, nonatomic) DTIMAPFolder *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)mainRequest;

@end

