//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTColorPickCellItem, DTExternalLabelGroup, DTSectionItem, DTTextFieldCellItem, NSArray;

@interface DTExternalLabelSettingViewController : DTTableViewController
{
    _Bool _isEditMode;
    long long _orgId;
    DTExternalLabelGroup *_group;
    CDUnknownBlockType _saveLabelGroupSuccessBlock;
    CDUnknownBlockType _removeLabelGroupSuccessBlock;
    DTTextFieldCellItem *_nameItem;
    DTSectionItem *_labelSection;
    DTColorPickCellItem *_colorItem;
    NSArray *_colors;
}

@property(nonatomic) _Bool isEditMode; // @synthesize isEditMode=_isEditMode;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) DTColorPickCellItem *colorItem; // @synthesize colorItem=_colorItem;
@property(retain, nonatomic) DTSectionItem *labelSection; // @synthesize labelSection=_labelSection;
@property(retain, nonatomic) DTTextFieldCellItem *nameItem; // @synthesize nameItem=_nameItem;
@property(copy, nonatomic) CDUnknownBlockType removeLabelGroupSuccessBlock; // @synthesize removeLabelGroupSuccessBlock=_removeLabelGroupSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType saveLabelGroupSuccessBlock; // @synthesize saveLabelGroupSuccessBlock=_saveLabelGroupSuccessBlock;
@property(copy, nonatomic) DTExternalLabelGroup *group; // @synthesize group=_group;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (id)createTextFieldCellItemWithLabel:(id)arg1;
- (void)removeLabelGroup:(id)arg1;
- (void)saveLabelGroup:(id)arg1;
- (_Bool)checkLabelGroup;
- (void)loadDatasource;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadComponent;
- (void)viewDidLoad;

@end

