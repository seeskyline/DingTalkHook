//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface H5AMAppStorage : NSObject
{
    NSString *_appstorageFilePath;
    NSMutableDictionary *_appsDict;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *appsDict; // @synthesize appsDict=_appsDict;
@property(copy, nonatomic) NSString *appstorageFilePath; // @synthesize appstorageFilePath=_appstorageFilePath;
- (void).cxx_destruct;
- (void)removeApp:(id)arg1;
- (void)addApp:(id)arg1;
- (id)findAppById:(id)arg1;
- (id)apps;
- (void)appUpdated:(id)arg1;
- (void)archiver;
- (void)unarchiver;
- (id)init;

@end

