//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCMailDetailInteractorInput-Protocol.h"

@class BLAccount, DTCMail, DTCMailModule, NSMutableArray, NSMutableDictionary, NSString;
@protocol DTCMailDetailInteractorOutput;

@interface DTCMailDetailInteractor : NSObject <DTCMailDetailInteractorInput>
{
    id <DTCMailDetailInteractorOutput> _output;
    DTCMailModule *_mailModule;
    BLAccount *_currentAccount;
    DTCMail *_mail;
    NSMutableArray *_noinlineAttachments;
    NSMutableDictionary *_attachmentDownloadTaskIDs;
    NSMutableArray *_inlineAttachmentResults;
    NSString *_loadDetailTaskID;
    unsigned long long _inlineAttachmentCount;
    unsigned long long _inlineAttachmentProcessedCount;
}

@property(nonatomic) unsigned long long inlineAttachmentProcessedCount; // @synthesize inlineAttachmentProcessedCount=_inlineAttachmentProcessedCount;
@property(nonatomic) unsigned long long inlineAttachmentCount; // @synthesize inlineAttachmentCount=_inlineAttachmentCount;
@property(retain, nonatomic) NSString *loadDetailTaskID; // @synthesize loadDetailTaskID=_loadDetailTaskID;
@property(retain, nonatomic) NSMutableArray *inlineAttachmentResults; // @synthesize inlineAttachmentResults=_inlineAttachmentResults;
@property(retain, nonatomic) NSMutableDictionary *attachmentDownloadTaskIDs; // @synthesize attachmentDownloadTaskIDs=_attachmentDownloadTaskIDs;
@property(retain, nonatomic) NSMutableArray *noinlineAttachments; // @synthesize noinlineAttachments=_noinlineAttachments;
@property(retain, nonatomic) DTCMail *mail; // @synthesize mail=_mail;
@property(retain, nonatomic) BLAccount *currentAccount; // @synthesize currentAccount=_currentAccount;
@property(retain, nonatomic) DTCMailModule *mailModule; // @synthesize mailModule=_mailModule;
@property(nonatomic) __weak id <DTCMailDetailInteractorOutput> output; // @synthesize output=_output;
- (void).cxx_destruct;
- (id)findAttachmentFromMail:(id)arg1 withURL:(id)arg2;
- (void)showEventOrganizer;
- (void)wantsPreviewAttachmentAtIndex:(unsigned long long)arg1 forceNodownload:(_Bool)arg2;
- (void)handleAllInlineAttachments;
- (void)loadInlineAttachmentsWithData:(id)arg1 forceDownload:(_Bool)arg2 forMail:(id)arg3;
- (void)stopDownloadAttachmentAtIndex:(unsigned long long)arg1;
- (void)startDownloadAttachmentAtIndex:(unsigned long long)arg1 ForMail:(id)arg2;
- (void)loadCalendarInfoForMail:(id)arg1;
- (void)findShouldShowAttachmentsForMail:(id)arg1;
- (void)setReadForMail:(id)arg1;
- (void)cancelLoadingMailContent;
- (void)loadMailBodyIfNeedForMail:(id)arg1;
- (void)saveLastVisitDateForMail:(id)arg1;
- (void)loadMailWithID:(id)arg1 inFolder:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

