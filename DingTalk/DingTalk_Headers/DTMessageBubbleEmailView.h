//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface DTMessageBubbleEmailView : UIView
{
    UILabel *_fromLabel;
    UIImageView *_attachmentIcon;
    UILabel *_subjectLabel;
    UILabel *_contentLabel;
}

@property(readonly, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(readonly, nonatomic) UILabel *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
@property(readonly, nonatomic) UIImageView *attachmentIcon; // @synthesize attachmentIcon=_attachmentIcon;
@property(readonly, nonatomic) UILabel *fromLabel; // @synthesize fromLabel=_fromLabel;
- (void).cxx_destruct;
- (void)setFrom:(id)arg1 subject:(id)arg2 content:(id)arg3 hasAttachment:(_Bool)arg4;
- (void)resetBubbleFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
