//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSDictionary, NSNumber, NSString;

@interface WKIDLMessageMemberExtensionModel : Marshal
{
    NSString *_conversationId;
    NSNumber *_messageId;
    NSDictionary *_memberExtension;
}

@property(copy, nonatomic) NSDictionary *memberExtension; // @synthesize memberExtension=_memberExtension;
@property(retain, nonatomic) NSNumber *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
