//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseUserCellItem.h"

@class DTBaseCellViewsMargins, DTIcon;

@interface DTDoubleLineUserTagsCellItem : DTBaseUserCellItem
{
    DTBaseCellViewsMargins *_tagMargin;
    DTIcon *_tag;
}

@property(retain, nonatomic) DTIcon *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) DTBaseCellViewsMargins *tagMargin; // @synthesize tagMargin=_tagMargin;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (id)cellForItem;

@end
