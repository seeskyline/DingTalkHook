//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class DTTimeLineViewItem, NSArray, NSString;

@interface DTBusinessContactCellItem : DTBaseCellItem
{
    _Bool _showIndicator;
    _Bool _isExtended;
    DTTimeLineViewItem *_timeLineItem;
    NSString *_title;
    NSString *_content;
    NSString *_showMoreTitle;
    NSArray *_formatModelList;
    NSString *_url;
    CDUnknownBlockType _showMoreAction;
}

+ (id)buildWithTimeLineItem:(id)arg1 title:(id)arg2 content:(id)arg3 showMoreTitle:(id)arg4 showIndicator:(_Bool)arg5 formatModelList:(id)arg6;
+ (id)buildWithBusinessItemConvertModel:(id)arg1 showMoreTitle:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType showMoreAction; // @synthesize showMoreAction=_showMoreAction;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSArray *formatModelList; // @synthesize formatModelList=_formatModelList;
@property(nonatomic) _Bool isExtended; // @synthesize isExtended=_isExtended;
@property(nonatomic) _Bool showIndicator; // @synthesize showIndicator=_showIndicator;
@property(copy, nonatomic) NSString *showMoreTitle; // @synthesize showMoreTitle=_showMoreTitle;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) DTTimeLineViewItem *timeLineItem; // @synthesize timeLineItem=_timeLineItem;
- (void).cxx_destruct;
- (id)cellForItem;
- (id)reuseIdentifier;
- (_Bool)cellShouldHighlight;

@end
