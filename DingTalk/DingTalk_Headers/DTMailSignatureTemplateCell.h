//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

#import "UIWebViewDelegate-Protocol.h"

@class DTMailSignatureTemplateCellItem, NSString, UIImageView, UIView, UIWebView;

@interface DTMailSignatureTemplateCell : DTBaseCell <UIWebViewDelegate>
{
    DTMailSignatureTemplateCellItem *_cellItem;
    UIWebView *_webView;
    UIView *_maskView;
    UIImageView *_selectedIcon;
}

@property(retain, nonatomic) UIImageView *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) DTMailSignatureTemplateCellItem *cellItem; // @synthesize cellItem=_cellItem;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)tapEvent:(id)arg1;
- (void)configCellWithItem:(id)arg1;
- (void)layoutSubViewsForCell;
- (void)loadComponents;
- (id)initWithCellItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
