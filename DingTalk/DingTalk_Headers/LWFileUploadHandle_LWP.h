//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LWFileUploadHandle.h"

@interface LWFileUploadHandle_LWP : LWFileUploadHandle
{
}

+ (id)getFailedError:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)cancel;
- (_Bool)isExecuting;
- (void)startWithFile;
- (void)didUploadFinish:(id)arg1 fileResult:(id)arg2 err:(id)arg3;
- (void)willUploadWithTask:(id)arg1;
- (id)fileBasicAttributes;
- (unsigned long long)calcFileSize:(id)arg1;
- (void)clearCallbackAndCancel;
- (void)closeStream;
- (void)checkAndUploadStream;
- (void)openStream;
- (void)triggerCompleteBlock:(struct LWPFileResultValue *)arg1 error:(id)arg2;
- (void)start;
- (_Bool)isStreaming;
- (id)init;

@end
