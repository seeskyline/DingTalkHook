//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTSortSelectionView, NSArray, NSString;

@interface DTSortSelectionViewHandler : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isRelate;
    CDUnknownBlockType _selectBlock;
    long long _maxNumberOfRightCell;
    DTSortSelectionView *_pickerView;
    NSArray *_dataSource;
    double _leftCellHeight;
    double _rightCellHeight;
    double _rightCellSectionHeight;
}

@property(nonatomic) _Bool isRelate; // @synthesize isRelate=_isRelate;
@property(nonatomic) double rightCellSectionHeight; // @synthesize rightCellSectionHeight=_rightCellSectionHeight;
@property(nonatomic) double rightCellHeight; // @synthesize rightCellHeight=_rightCellHeight;
@property(nonatomic) double leftCellHeight; // @synthesize leftCellHeight=_leftCellHeight;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) DTSortSelectionView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) long long maxNumberOfRightCell; // @synthesize maxNumberOfRightCell=_maxNumberOfRightCell;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
- (void).cxx_destruct;
- (id)configRightTableViewHeaderViewWithTitle:(id)arg1 width:(double)arg2;
- (long long)calculateLineCount:(long long)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadWithDataSource:(id)arg1;
- (id)sortSelectionViewWithFrame:(struct CGRect)arg1;
- (void)layoutUI;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

