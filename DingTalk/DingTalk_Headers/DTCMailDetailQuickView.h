//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTMailTipsViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class DTCMail, DTCMailDetalInputView, DTMailTipsView, NSMutableArray, NSString, UIButton, UILabel, UITableView;
@protocol DTCMailDetailQuickViewDelegate;

@interface DTCMailDetailQuickView : UIView <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, DTMailTipsViewDelegate>
{
    _Bool _isAll;
    int _lastAction;
    id <DTCMailDetailQuickViewDelegate> _delegate;
    UIView *_backgroundView;
    UITableView *_tableView;
    UIButton *_btnReceiver;
    UIButton *_btnReply;
    UIButton *_btnSend;
    UIButton *_btnKeyShow;
    UILabel *_lblReceiver;
    UILabel *_lblTxtReply;
    DTCMailDetalInputView *_txtReply;
    NSMutableArray *_arrQuicks;
    DTMailTipsView *_tipsView;
    DTCMail *_mail;
    id _keyboardObserver;
    double _currentListHeight;
    UIView *_inputArea;
}

@property(retain, nonatomic) UIView *inputArea; // @synthesize inputArea=_inputArea;
@property(nonatomic) double currentListHeight; // @synthesize currentListHeight=_currentListHeight;
@property(retain, nonatomic) id keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(nonatomic) _Bool isAll; // @synthesize isAll=_isAll;
@property(retain, nonatomic) DTCMail *mail; // @synthesize mail=_mail;
@property(nonatomic) int lastAction; // @synthesize lastAction=_lastAction;
@property(retain, nonatomic) DTMailTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) NSMutableArray *arrQuicks; // @synthesize arrQuicks=_arrQuicks;
@property(retain, nonatomic) DTCMailDetalInputView *txtReply; // @synthesize txtReply=_txtReply;
@property(retain, nonatomic) UILabel *lblTxtReply; // @synthesize lblTxtReply=_lblTxtReply;
@property(retain, nonatomic) UILabel *lblReceiver; // @synthesize lblReceiver=_lblReceiver;
@property(retain, nonatomic) UIButton *btnKeyShow; // @synthesize btnKeyShow=_btnKeyShow;
@property(retain, nonatomic) UIButton *btnSend; // @synthesize btnSend=_btnSend;
@property(retain, nonatomic) UIButton *btnReply; // @synthesize btnReply=_btnReply;
@property(retain, nonatomic) UIButton *btnReceiver; // @synthesize btnReceiver=_btnReceiver;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <DTCMailDetailQuickViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getAllReplyName;
- (void)tipsViewDidClick:(id)arg1;
- (void)disposeTipsView;
- (void)showTipsViewWithTitle:(id)arg1;
- (void)btnKeyShowPress:(id)arg1;
- (void)btnFooterPress:(id)arg1;
- (void)btnSendPress:(id)arg1;
- (void)btnReplyPress:(id)arg1;
- (void)btnReceiverPress:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removeQuickList:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (double)resetBackgroundWihtDuration:(double)arg1 listHeight:(double)arg2;
- (double)textViewHeightPerLine;
- (double)dynamicInputAreaHeight;
- (void)reloadQuickItems:(id)arg1;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)show;
- (void)initHeadView;
- (void)initTableView;
- (void)initBackgroundView;
- (void)bindKeyboardEvent;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withMail:(id)arg2 withQuicks:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

