//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class NSString, UIImage;

@interface DTMailSupplierCellItem : DTBaseCellItem
{
    UIImage *_icon;
    NSString *_title;
    NSString *_bottomTitle;
    long long _tag;
}

+ (id)cellItemForTitle:(id)arg1 icon:(id)arg2 cellDidSelectedBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *bottomTitle; // @synthesize bottomTitle=_bottomTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (id)cellForItem;

@end
