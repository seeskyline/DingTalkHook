//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTBalanceModel : Marshal
{
    NSString *_dingdingBalance;
    NSString *_hongbaoBalance;
    NSNumber *_enable;
}

@property(retain, nonatomic) NSNumber *enable; // @synthesize enable=_enable;
@property(copy, nonatomic) NSString *hongbaoBalance; // @synthesize hongbaoBalance=_hongbaoBalance;
@property(copy, nonatomic) NSString *dingdingBalance; // @synthesize dingdingBalance=_dingdingBalance;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
