//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTUserIntimacyPushModel, NSString;

@interface DTPushUserObject : Marshal
{
    NSString *_syncType;
    NSString *_dataType;
    DTUserIntimacyPushModel *_obj;
}

@property(retain, nonatomic) DTUserIntimacyPushModel *obj; // @synthesize obj=_obj;
@property(copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSString *syncType; // @synthesize syncType=_syncType;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

