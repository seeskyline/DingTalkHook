//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTFullScreenTextViewController, UIWindow;

@interface DTFullScreenTextUtil : NSObject
{
    _Bool _canTap;
    UIWindow *_textWindow;
    DTFullScreenTextViewController *_textViewController;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool canTap; // @synthesize canTap=_canTap;
@property(retain, nonatomic) DTFullScreenTextViewController *textViewController; // @synthesize textViewController=_textViewController;
@property(retain, nonatomic) UIWindow *textWindow; // @synthesize textWindow=_textWindow;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showFullScreenText:(id)arg1 font:(id)arg2;
- (void)showFullScreenText:(id)arg1;

@end

