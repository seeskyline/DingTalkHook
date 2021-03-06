//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAbstractMercatorDataSource.h"

@interface MAAbstractWebMapSource : MAAbstractMercatorDataSource
{
    unsigned long long _retryCount;
    double _requestTimeoutSeconds;
}

@property(nonatomic) double requestTimeoutSeconds; // @synthesize requestTimeoutSeconds=_requestTimeoutSeconds;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
- (id)imageForTile:(CDStruct_c8e85508)arg1 inCache:(id)arg2;
- (id)retryURLForTile:(CDStruct_c8e85508)arg1;
- (id)URLsForTile:(CDStruct_c8e85508)arg1;
- (id)URLForTile:(CDStruct_c8e85508)arg1;
- (id)init;

@end

