//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTCallManageCardMiddleDetailBottomModel, DTCallManageJumpModel, NSString;

@interface DTCallManageCardMiddleDetailModel : Marshal
{
    NSString *_title;
    NSString *_content;
    NSString *_label;
    DTCallManageCardMiddleDetailBottomModel *_remarks;
    DTCallManageJumpModel *_jumpModel;
}

@property(retain, nonatomic) DTCallManageJumpModel *jumpModel; // @synthesize jumpModel=_jumpModel;
@property(retain, nonatomic) DTCallManageCardMiddleDetailBottomModel *remarks; // @synthesize remarks=_remarks;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
