//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTOrgEmployeeSimple : NSObject
{
    unsigned long long _orgId;
    unsigned long long _uId;
    NSString *_staffId;
    NSString *_name;
}

+ (id)arrayWithPickerModels:(id)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *staffId; // @synthesize staffId=_staffId;
@property(nonatomic) unsigned long long uId; // @synthesize uId=_uId;
@property(nonatomic) unsigned long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (id)initWithPickModel:(id)arg1;
- (id)toIDLModel;
- (id)initWithIDLModel:(id)arg1;

@end
