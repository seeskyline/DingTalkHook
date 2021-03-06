//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface DTCMailAccountCell : DTTableViewCell
{
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UIImageView *_checkMarkImageView;
    UILabel *_badgeLabel;
    UIImageView *_redDotView;
    UIView *_bottomLine;
}

+ (double)height;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) UIImageView *checkMarkImageView; // @synthesize checkMarkImageView=_checkMarkImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)totalUnreadMailsForAccount:(id)arg1 label:(id)arg2;
- (id)imageIconOfMailForAccount:(id)arg1;
- (void)configureCell:(id)arg1 unread:(_Bool)arg2 didFocus:(_Bool)arg3 isBottom:(_Bool)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGRect)bottomLineInitFrame;

@end

