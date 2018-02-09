//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTCSpaceChooserConfig : NSObject
{
    _Bool _allowMulitSelect;
    _Bool _sharedFileAccessDenied;
    _Bool _allowChooseEncryptFile;
    NSString *_warningMessageForReachLimit;
    unsigned long long _selectedMaxCount;
    unsigned long long _chooseType;
}

@property(nonatomic) _Bool allowChooseEncryptFile; // @synthesize allowChooseEncryptFile=_allowChooseEncryptFile;
@property(nonatomic) _Bool sharedFileAccessDenied; // @synthesize sharedFileAccessDenied=_sharedFileAccessDenied;
@property(nonatomic) _Bool allowMulitSelect; // @synthesize allowMulitSelect=_allowMulitSelect;
@property(nonatomic) unsigned long long chooseType; // @synthesize chooseType=_chooseType;
@property(nonatomic) unsigned long long selectedMaxCount; // @synthesize selectedMaxCount=_selectedMaxCount;
@property(retain, nonatomic) NSString *warningMessageForReachLimit; // @synthesize warningMessageForReachLimit=_warningMessageForReachLimit;
- (void).cxx_destruct;
- (id)buildDentryChooserConfigWithConv:(id)arg1;

@end
