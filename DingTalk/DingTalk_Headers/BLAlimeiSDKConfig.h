//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BLAlimeiSDKConfig : NSObject
{
    long long _initTotal;
    long long _mailSessionMode;
    long long _dtcmailSessionMode;
    long long _syncWindowSize;
    long long _pushMode;
    CDUnknownBlockType _passphraseBlock;
    CDUnknownBlockType _signatureBlock;
    CDUnknownBlockType _isContainerLoginBlock;
    CDUnknownBlockType _appendSentMailBlock;
}

+ (id)generateDefaultSDKConfig;
@property(copy, nonatomic) CDUnknownBlockType appendSentMailBlock; // @synthesize appendSentMailBlock=_appendSentMailBlock;
@property(copy, nonatomic) CDUnknownBlockType isContainerLoginBlock; // @synthesize isContainerLoginBlock=_isContainerLoginBlock;
@property(copy, nonatomic) CDUnknownBlockType signatureBlock; // @synthesize signatureBlock=_signatureBlock;
@property(copy, nonatomic) CDUnknownBlockType passphraseBlock; // @synthesize passphraseBlock=_passphraseBlock;
@property(nonatomic) long long pushMode; // @synthesize pushMode=_pushMode;
@property(nonatomic) long long syncWindowSize; // @synthesize syncWindowSize=_syncWindowSize;
@property(nonatomic) long long dtcmailSessionMode; // @synthesize dtcmailSessionMode=_dtcmailSessionMode;
@property(nonatomic) long long mailSessionMode; // @synthesize mailSessionMode=_mailSessionMode;
@property(nonatomic) long long initTotal; // @synthesize initTotal=_initTotal;
- (void).cxx_destruct;

@end

