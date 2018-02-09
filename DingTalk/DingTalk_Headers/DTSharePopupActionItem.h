//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIImage;

@interface DTSharePopupActionItem : NSObject
{
    NSString *_title;
    UIColor *_titleColor;
    UIImage *_iconImage;
    UIImage *_hightlightIconImage;
    NSString *_iconUrl;
    id _target;
    SEL _action;
    CDUnknownBlockType _didTapItem;
}

+ (id)invitePeopleActionItem:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType didTapItem; // @synthesize didTapItem=_didTapItem;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIImage *hightlightIconImage; // @synthesize hightlightIconImage=_hightlightIconImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
