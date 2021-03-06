//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

#import "DTAgreementCheckBoxDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class DTAgreementCheckBox, DTCellItem, DTPlaceHolderTextView, DTSegmentControllCellItem, LVCreateLiveButtonCellItem, NSString;
@protocol LVLiveStartVCPickImageDelegate;

@interface LVLiveStartViewController : DTTableViewController <UITextViewDelegate, DTAgreementCheckBoxDelegate, UIAlertViewDelegate>
{
    _Bool _shouldStartOnKeyboardHide;
    id <LVLiveStartVCPickImageDelegate> _delegate;
    DTPlaceHolderTextView *_inputTextView;
    DTSegmentControllCellItem *_orientationCellItem;
    DTSegmentControllCellItem *_definitionCellItem;
    DTCellItem *_recordSwitchCellItem;
    LVCreateLiveButtonCellItem *_createLiveCellItem;
    DTAgreementCheckBox *_checkBox;
    NSString *_procolJumpUrl;
    NSString *_procolTextStr;
    NSString *_coverUrl;
    NSString *_cid;
    NSString *_userNick;
}

@property(nonatomic) _Bool shouldStartOnKeyboardHide; // @synthesize shouldStartOnKeyboardHide=_shouldStartOnKeyboardHide;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *procolTextStr; // @synthesize procolTextStr=_procolTextStr;
@property(copy, nonatomic) NSString *procolJumpUrl; // @synthesize procolJumpUrl=_procolJumpUrl;
@property(retain, nonatomic) DTAgreementCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) LVCreateLiveButtonCellItem *createLiveCellItem; // @synthesize createLiveCellItem=_createLiveCellItem;
@property(retain, nonatomic) DTCellItem *recordSwitchCellItem; // @synthesize recordSwitchCellItem=_recordSwitchCellItem;
@property(retain, nonatomic) DTSegmentControllCellItem *definitionCellItem; // @synthesize definitionCellItem=_definitionCellItem;
@property(retain, nonatomic) DTSegmentControllCellItem *orientationCellItem; // @synthesize orientationCellItem=_orientationCellItem;
@property(retain, nonatomic) DTPlaceHolderTextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(nonatomic) __weak id <LVLiveStartVCPickImageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)lv_keyboardDidHide:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkbox:(id)arg1 checked:(_Bool)arg2;
- (void)checkbox:(id)arg1 onAgreementClicked:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onBackGroundClick;
- (void)onBackClick:(id)arg1;
- (void)updateStartBtnState;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)jumpToProtocolDetail;
- (id)internetStatus;
- (void)startLive;
- (_Bool)isLandscapeSelected;
- (void)startLiveAction;
- (id)buildFooterViewWithTitle:(id)arg1;
- (void)setUpView;
- (void)setViewData;
- (void)dealloc;
- (id)initWithLiveParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

