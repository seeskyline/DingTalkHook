//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTPhotoBrowerPaginator;

@interface DTPhotoBrowerPaginationCombinator : NSObject
{
    _Bool _hasPrevious;
    _Bool _hasNext;
    DTPhotoBrowerPaginator *_previousPaginator;
    DTPhotoBrowerPaginator *_nextPaginator;
    CDUnknownBlockType _loadPhotoDataBlock;
}

+ (id)paginationCombinatorWithHasPrevious:(_Bool)arg1 hasNext:(_Bool)arg2;
@property(copy, nonatomic) CDUnknownBlockType loadPhotoDataBlock; // @synthesize loadPhotoDataBlock=_loadPhotoDataBlock;
@property(retain, nonatomic) DTPhotoBrowerPaginator *nextPaginator; // @synthesize nextPaginator=_nextPaginator;
@property(retain, nonatomic) DTPhotoBrowerPaginator *previousPaginator; // @synthesize previousPaginator=_previousPaginator;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) _Bool hasPrevious; // @synthesize hasPrevious=_hasPrevious;
- (void).cxx_destruct;

@end
