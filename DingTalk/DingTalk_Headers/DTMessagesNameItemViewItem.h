//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIImage;

@interface DTMessagesNameItemViewItem : NSObject
{
    _Bool _needBackgroundImage;
    UIImage *_icon;
    NSString *_title;
    UIColor *_titleColor;
    long long _viewTag;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(nonatomic) long long viewTag; // @synthesize viewTag=_viewTag;
@property(nonatomic) _Bool needBackgroundImage; // @synthesize needBackgroundImage=_needBackgroundImage;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end

