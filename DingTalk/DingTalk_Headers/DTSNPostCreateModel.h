//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTSNContentModel, DTSNScopeModel, NSString;

@interface DTSNPostCreateModel : Marshal
{
    DTSNContentModel *_content;
    DTSNScopeModel *_scope;
    NSString *_uuid;
}

@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) DTSNScopeModel *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) DTSNContentModel *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

