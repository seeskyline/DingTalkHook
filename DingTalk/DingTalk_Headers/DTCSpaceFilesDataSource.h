//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCSpaceFilesDataHandlerDelegate-Protocol.h"
#import "DTCSpaceFilesDataSourceProtocol-Protocol.h"
#import "DTCSpacePhotoBrowserDataSource-Protocol.h"
#import "DTObjectProgressProtocol-Protocol.h"

@class BLSpaceEntry, DTBizCSpaceDentry, DTBizCSpaceDentryListInfo, DTCSpaceFilesDataHandler, DTCSpaceOperationProcessor, DTDentryChooserConfig, LWFetchRequest, NSMutableArray, NSMutableDictionary, NSString, UITableView;
@protocol DTCSpaceFilesDataSourceDelegate;

@interface DTCSpaceFilesDataSource : NSObject <DTCSpaceFilesDataHandlerDelegate, DTObjectProgressProtocol, DTCSpaceFilesDataSourceProtocol, DTCSpacePhotoBrowserDataSource>
{
    struct {
        unsigned int isRefreshing:1;
        unsigned int isLoadingMore:1;
    } _flags;
    _Bool _startUpload;
    _Bool _mustStopUpload;
    _Bool _taskAlreadyBegin;
    _Bool _beginObserver;
    id <DTCSpaceFilesDataSourceDelegate> _delegate;
    UITableView *_tableView;
    NSString *_spaceId;
    NSString *_token;
    long long _sourceType;
    BLSpaceEntry *_spaceEntry;
    DTDentryChooserConfig *_chooseConfig;
    NSMutableDictionary *_selectCache;
    NSMutableArray *_photoDataSource;
    NSMutableDictionary *_photoIndeciesMap;
    unsigned long long _currentAssetIndex;
    DTBizCSpaceDentry *_currentDentry;
    DTBizCSpaceDentryListInfo *_currentDentryListInfo;
    LWFetchRequest *_fetchRequest;
    NSMutableArray *_chooserDentries;
    DTBizCSpaceDentryListInfo *_chooserListInfo;
    NSMutableDictionary *_pickerCache;
    DTCSpaceFilesDataHandler *_dataHandler;
    NSMutableArray *_needToUploadDentries;
    DTCSpaceOperationProcessor *_operationProcessor;
}

@property(nonatomic) _Bool beginObserver; // @synthesize beginObserver=_beginObserver;
@property(retain, nonatomic) DTCSpaceOperationProcessor *operationProcessor; // @synthesize operationProcessor=_operationProcessor;
@property _Bool taskAlreadyBegin; // @synthesize taskAlreadyBegin=_taskAlreadyBegin;
@property _Bool mustStopUpload; // @synthesize mustStopUpload=_mustStopUpload;
@property(retain, nonatomic) NSMutableArray *needToUploadDentries; // @synthesize needToUploadDentries=_needToUploadDentries;
@property(nonatomic) _Bool startUpload; // @synthesize startUpload=_startUpload;
@property(retain, nonatomic) DTCSpaceFilesDataHandler *dataHandler; // @synthesize dataHandler=_dataHandler;
@property(retain, nonatomic) NSMutableDictionary *pickerCache; // @synthesize pickerCache=_pickerCache;
@property(retain, nonatomic) DTBizCSpaceDentryListInfo *chooserListInfo; // @synthesize chooserListInfo=_chooserListInfo;
@property(retain, nonatomic) NSMutableArray *chooserDentries; // @synthesize chooserDentries=_chooserDentries;
@property(retain, nonatomic) LWFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) DTBizCSpaceDentryListInfo *currentDentryListInfo; // @synthesize currentDentryListInfo=_currentDentryListInfo;
@property(retain, nonatomic) DTBizCSpaceDentry *currentDentry; // @synthesize currentDentry=_currentDentry;
@property(nonatomic) unsigned long long currentAssetIndex; // @synthesize currentAssetIndex=_currentAssetIndex;
@property(retain, nonatomic) NSMutableDictionary *photoIndeciesMap; // @synthesize photoIndeciesMap=_photoIndeciesMap;
@property(retain, nonatomic) NSMutableArray *photoDataSource; // @synthesize photoDataSource=_photoDataSource;
@property(retain, nonatomic) NSMutableDictionary *selectCache; // @synthesize selectCache=_selectCache;
@property(retain, nonatomic) DTDentryChooserConfig *chooseConfig; // @synthesize chooseConfig=_chooseConfig;
@property(retain, nonatomic) BLSpaceEntry *spaceEntry; // @synthesize spaceEntry=_spaceEntry;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <DTCSpaceFilesDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)processMoveDentries:(id)arg1 from:(id)arg2 toTargetDentry:(id)arg3;
- (void)processDeleteDentries:(id)arg1;
- (void)processCreateFolder:(id)arg1 vcShouldOp:(_Bool)arg2;
- (id)_dentryForCacheKey:(id)arg1;
- (void)onUploadAdded:(id)arg1;
- (void)onFailed:(id)arg1;
- (void)removeNeedUplodateDentry:(id)arg1;
- (void)onSuccess:(id)arg1;
- (void)objectProgressChanged:(id)arg1 finished:(_Bool)arg2 progress:(double)arg3 userInfo:(id)arg4;
- (void)didDataHanlderFinished:(id)arg1;
- (_Bool)usingDingPanLWPUpload;
- (void)cspaceControllerDidChangeContent:(id)arg1;
- (void)toggleDentryInPickerMode:(id)arg1;
- (_Bool)isDentryToggleSelect:(id)arg1;
- (void)toggleWithSelectDentry:(id)arg1;
- (void)loadMoreCurrentDentry;
- (void)refreshCurrentDentry;
- (void)didSortedAllDentries;
- (void)showEmptyDentryListIfNeed:(id)arg1;
- (void)loadDataHandler;
- (void)filterPhotoDentriesAndSelectedDentries;
- (void)loadFolderDentryData:(id)arg1;
- (long long)serviceSortType;
- (void)initDataSourceWithSpaceId:(id)arg1 withParentFolder:(id)arg2;
- (void)setCurrentPhotoIndexWithIndex:(id)arg1;
- (id)sourceSpace;
- (unsigned long long)sourceOperationType;
- (void)cancelDownloadPhotoWithKey:(id)arg1;
- (id)downloadPhotoAtIndex:(unsigned long long)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)photoRequestHeader;
- (id)photoAtIndex:(unsigned long long)arg1;
- (id)photoes;
- (unsigned long long)currentPhotoIndex;
- (unsigned long long)photoCounts;
- (unsigned long long)removeAllSelectedItems;
- (id)allSelectedItems;
- (id)allDentriesArray;
- (void)deleteDentries:(id)arg1;
- (void)moveDentries:(id)arg1 toTargetFolder:(id)arg2;
- (void)didRenameDentry:(id)arg1;
- (void)addNewFolder:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)pauseToUploadFile:(id)arg1;
- (void)reuploadFileWithDentry:(id)arg1;
- (void)processToCreate;
- (void)addNewFilesWithPhotoAssets:(id)arg1 originalImage:(_Bool)arg2 needNotify:(_Bool)arg3;
- (void)sendUTWithDentry:(id)arg1;
- (void)switchListOrderToDataSourceType:(long long)arg1;
- (id)titleForHeaderInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfRowsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)dentryDataAtIndexPath:(id)arg1;
- (_Bool)currentFolderHasMore;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

