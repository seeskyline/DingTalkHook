//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTSpaceOnlineDocAddEditorViewController, NSArray, NSDate;

@interface DTSpaceOnlineDocAddEditorPresenter : NSObject
{
    NSArray *_selectedEditors;
    NSArray *_editors;
    NSArray *_notifyEditors;
    NSDate *_deadline;
    DTSpaceOnlineDocAddEditorViewController *_controller;
}

@property(nonatomic) __weak DTSpaceOnlineDocAddEditorViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSDate *deadline; // @synthesize deadline=_deadline;
@property(copy, nonatomic) NSArray *notifyEditors; // @synthesize notifyEditors=_notifyEditors;
@property(copy, nonatomic) NSArray *editors; // @synthesize editors=_editors;
@property(copy, nonatomic) NSArray *selectedEditors; // @synthesize selectedEditors=_selectedEditors;
- (void).cxx_destruct;
- (id)pickedEditorAvatars;
- (void)openDatePicker;
- (void)openContactPicker;
- (void)openLink:(id)arg1;
- (id)deadlineTimeCellItem;
- (id)deadlineSwitchCellItem;
- (id)editorCellItem;
- (void)reloadTableView;
- (void)showInvitedEditors:(id)arg1;
- (id)initWithController:(id)arg1;

@end

