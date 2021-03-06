//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "LWPDownloadOperation-Protocol.h"

@class LWPDownloadTask, NSString, NSThread, NSURL, NSURLCredential, NSURLRequest;

@interface LWPImageDownloaderOperation : NSOperation <LWPDownloadOperation>
{
    _Bool _executing;
    _Bool _finished;
    _Bool _shouldDecompressImages;
    _Bool _shouldUseCredentialStorage;
    NSURL *_url;
    NSString *_filePath;
    unsigned long long _options;
    NSURLRequest *_request;
    NSURLCredential *_credential;
    double _startTm;
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completedBlock;
    CDUnknownBlockType _cancelBlock;
    NSThread *_thread;
    LWPDownloadTask *_downloadTask;
    unsigned long long _backgroundTaskId;
}

+ (void)protectCheck:(id)arg1;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(retain) LWPDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(copy) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(nonatomic) double startTm; // @synthesize startTm=_startTm;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(nonatomic) _Bool shouldUseCredentialStorage; // @synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage;
@property(nonatomic) _Bool shouldDecompressImages; // @synthesize shouldDecompressImages=_shouldDecompressImages;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (_Bool)shouldContinueWhenAppEntersBackground;
- (_Bool)isConcurrent;
- (void)cancelInternal;
- (void)cancelInternalAndStop;
- (void)cancel;
- (void)reset;
- (void)done;
- (id)loadImageForFileInfo:(id)arg1 data:(id *)arg2;
- (void)completeDownload:(id)arg1 error:(id)arg2;
- (void)_internalCompletedBlock:(CDUnknownBlockType)arg1 image:(id)arg2 data:(id)arg3 error:(id)arg4 finished:(_Bool)arg5 commentUrl:(id)arg6;
- (void)recordDownloadPerformance:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)scaledImageForKey:(id)arg1 image:(id)arg2;
- (void)internalComplete:(id)arg1;
- (void)internalProgress:(id)arg1;
- (id)buildFileAttrFromReq:(id)arg1;
- (void)invalidBackgroundTask;
- (void)start;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4 cancelled:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

