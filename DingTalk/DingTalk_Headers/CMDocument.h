//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CMNode;

@interface CMDocument : NSObject
{
    CMNode *_rootNode;
    long long _options;
}

@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) CMNode *rootNode; // @synthesize rootNode=_rootNode;
- (void).cxx_destruct;
- (id)initWithContentsOfFile:(id)arg1 options:(long long)arg2;
- (id)initWithData:(id)arg1 options:(long long)arg2;

@end

