//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FLAnimatedImage, FLAnimatedImageView, UIButton, UILabel;

@interface DTSafeAnimationView : UIView
{
    FLAnimatedImageView *_gifImageView;
    FLAnimatedImage *_sceneGif2;
    UIView *_sceneTable;
    UILabel *_label;
    UIButton *_skipBtn;
    UIButton *_enterBtn;
}

@property(retain, nonatomic) UIButton *enterBtn; // @synthesize enterBtn=_enterBtn;
@property(retain, nonatomic) UIButton *skipBtn; // @synthesize skipBtn=_skipBtn;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *sceneTable; // @synthesize sceneTable=_sceneTable;
@property(retain, nonatomic) FLAnimatedImage *sceneGif2; // @synthesize sceneGif2=_sceneGif2;
@property(retain, nonatomic) FLAnimatedImageView *gifImageView; // @synthesize gifImageView=_gifImageView;
- (void).cxx_destruct;
- (void)enter:(id)arg1;
- (void)skip:(id)arg1;
- (void)scene3AnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)scene2AnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)scene1AnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
