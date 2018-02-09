//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTVCModule.h"

#import "DTVCSharedInstance-Protocol.h"

@class DDFileLogger, DDLogFileManagerDefault, NSString;

@interface DTVCLogModule : DTVCModule <DTVCSharedInstance>
{
    DDLogFileManagerDefault *_logFileManager;
    DDFileLogger *_logger;
    NSString *_logDirectory;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setLogConfigure;
- (id)getLogBase64WithDir:(id)arg1;
- (void)stopLogRecordWithFileName:(CDUnknownBlockType)arg1;
- (void)loggerFormat:(id)arg1;
- (void)instanceInit;
- (void)initModule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
