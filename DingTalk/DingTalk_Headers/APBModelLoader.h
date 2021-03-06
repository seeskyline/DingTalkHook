//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface APBModelLoader : NSObject
{
    unsigned long long _modelType;
    NSString *_modelName;
    NSString *_modelFolder;
    NSString *_modelURL;
}

@property(retain, nonatomic) NSString *modelURL; // @synthesize modelURL=_modelURL;
@property(retain, nonatomic) NSString *modelFolder; // @synthesize modelFolder=_modelFolder;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(nonatomic) unsigned long long modelType; // @synthesize modelType=_modelType;
- (void).cxx_destruct;
- (_Bool)checkFile:(id)arg1 withMD5:(id)arg2;
- (void)reDownLoadModel;
- (void)downLoadModel;
- (void)deleteFolderDir;
- (id)modelLoadPath;
- (_Bool)isModelReady;
- (id)initWithModeType:(unsigned long long)arg1;

@end

