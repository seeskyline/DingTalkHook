//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTOrgEmailsDisaptchResult : Marshal
{
    NSNumber *_resultCode;
    NSString *_alertTitle;
    NSString *_alertContent;
}

@property(copy, nonatomic) NSString *alertContent; // @synthesize alertContent=_alertContent;
@property(copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(retain, nonatomic) NSNumber *resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

