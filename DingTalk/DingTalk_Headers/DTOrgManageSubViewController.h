//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTOrganization;

@interface DTOrgManageSubViewController : DTTableViewController
{
    DTOrganization *_organization;
}

@property(retain, nonatomic) DTOrganization *organization; // @synthesize organization=_organization;
- (void).cxx_destruct;
- (long long)orgId;
- (void)openWebViewWithUrlString:(id)arg1 showRightBarButton:(_Bool)arg2;
- (void)popBack;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
