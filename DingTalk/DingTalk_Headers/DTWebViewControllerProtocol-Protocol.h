//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAWebViewControllerProtocol-Protocol.h"

@class NSString;

@protocol DTWebViewControllerProtocol <LAWebViewControllerProtocol>
- (NSString *)private_agentId;
- (NSString *)private_corpId;
- (void)setWebViewTitle:(NSString *)arg1;
- (void)setNavigationBarButton;
- (void)goBackOrCloseWebView;
- (void)closeWebViewController;
@end
