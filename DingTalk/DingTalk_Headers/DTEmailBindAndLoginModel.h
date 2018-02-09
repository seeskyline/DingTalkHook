//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface DTEmailBindAndLoginModel : NSObject
{
    _Bool _needSecureText;
    _Bool _enableChangeText;
    _Bool _enableShowMoreIcon;
    _Bool _enableEyeIcon;
    NSString *_title;
    NSString *_text;
    NSString *_placeHolderText;
    NSString *_suffixText;
    NSString *_captchaSessionID;
    UIImage *_verifyImage;
    double _minTextFieldLeftMargin;
    CDUnknownBlockType _returnBlock;
}

+ (id)itemWithTitle:(id)arg1 text:(id)arg2 placeHolder:(id)arg3 image:(id)arg4;
@property(copy, nonatomic) CDUnknownBlockType returnBlock; // @synthesize returnBlock=_returnBlock;
@property(nonatomic) _Bool enableEyeIcon; // @synthesize enableEyeIcon=_enableEyeIcon;
@property(nonatomic) _Bool enableShowMoreIcon; // @synthesize enableShowMoreIcon=_enableShowMoreIcon;
@property(nonatomic) _Bool enableChangeText; // @synthesize enableChangeText=_enableChangeText;
@property(nonatomic) _Bool needSecureText; // @synthesize needSecureText=_needSecureText;
@property(nonatomic) double minTextFieldLeftMargin; // @synthesize minTextFieldLeftMargin=_minTextFieldLeftMargin;
@property(retain, nonatomic) UIImage *verifyImage; // @synthesize verifyImage=_verifyImage;
@property(copy, nonatomic) NSString *captchaSessionID; // @synthesize captchaSessionID=_captchaSessionID;
@property(copy, nonatomic) NSString *suffixText; // @synthesize suffixText=_suffixText;
@property(copy, nonatomic) NSString *placeHolderText; // @synthesize placeHolderText=_placeHolderText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 text:(id)arg2 placeHolder:(id)arg3 image:(id)arg4;

@end
