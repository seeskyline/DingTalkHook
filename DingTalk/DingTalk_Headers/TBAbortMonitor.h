//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DataSynchronizer, NSString;
@protocol EventWatcherProtocol;

@interface TBAbortMonitor : NSObject
{
    _Bool _isRisky;
    NSString *_appVersion;
    DataSynchronizer *_dataSynchronizer;
    id <EventWatcherProtocol> _h5AbortMonitorDelegate;
    id <EventWatcherProtocol> _transitionMonitorDelegate;
    NSString *_markerFileDir;
    NSString *_riskyMarkerFileDir;
    NSString *_crashMarkerFileDir;
}

+ (id)instance;
@property(copy, nonatomic) NSString *crashMarkerFileDir; // @synthesize crashMarkerFileDir=_crashMarkerFileDir;
@property(copy, nonatomic) NSString *riskyMarkerFileDir; // @synthesize riskyMarkerFileDir=_riskyMarkerFileDir;
@property(copy, nonatomic) NSString *markerFileDir; // @synthesize markerFileDir=_markerFileDir;
@property(retain, nonatomic) id <EventWatcherProtocol> transitionMonitorDelegate; // @synthesize transitionMonitorDelegate=_transitionMonitorDelegate;
@property(retain, nonatomic) id <EventWatcherProtocol> h5AbortMonitorDelegate; // @synthesize h5AbortMonitorDelegate=_h5AbortMonitorDelegate;
@property(retain, nonatomic) DataSynchronizer *dataSynchronizer; // @synthesize dataSynchronizer=_dataSynchronizer;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool isRisky; // @synthesize isRisky=_isRisky;
- (void).cxx_destruct;
- (void)doActionWhenMemoryWarning;
- (float)getMemoryUsage;
- (void)dealloc;
- (void)startFullTraceWatcher;
- (void)markRiskyDevice;
- (void)removeRiskyTag;
- (_Bool)isRiskyDevice;
- (long long)markerStatus:(id *)arg1;
- (void)removeMarkerOnAppTerminate;
- (void)logEnterForground;
- (void)logEnterBackground;
- (void)addAction:(id)arg1 forPage:(id)arg2;
- (void)createCrashMarker;
- (_Bool)isReleaseVersion;
- (void)handleAbortFile;
- (void)onApplicationLaunched;
- (void)registerLifeCycleObservers:(id)arg1;
- (id)init;

@end
