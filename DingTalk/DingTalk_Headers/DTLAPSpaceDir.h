//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

@class LAActionRequest, LAActionResponse, NSString;

@interface DTLAPSpaceDir : LAPluginBase
{
    _Bool _chooseStart;
    NSString *_corpId;
    long long _orgId;
    LAActionRequest *_dirRequest;
    LAActionResponse *_dirResponse;
}

+ (id)pluginExactName;
@property(retain, nonatomic) LAActionResponse *dirResponse; // @synthesize dirResponse=_dirResponse;
@property(retain, nonatomic) LAActionRequest *dirRequest; // @synthesize dirRequest=_dirRequest;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property _Bool chooseStart; // @synthesize chooseStart=_chooseStart;
- (void).cxx_destruct;
- (void)resetSafety;
- (void)failedResponse;
- (void)startPicker;
- (void)chooseSpaceDir:(id)arg1 to:(id)arg2;
- (void)__exported__chooseSpaceDir:(id)arg1 to:(id)arg2;

@end

