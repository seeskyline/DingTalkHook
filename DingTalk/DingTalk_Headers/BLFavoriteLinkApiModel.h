//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLFavoriteContentApiModel.h"

@class NSString;

@interface BLFavoriteLinkApiModel : BLFavoriteContentApiModel
{
    NSString *_link_url;
    NSString *_lickPicUrl;
}

@property(copy, nonatomic) NSString *lickPicUrl; // @synthesize lickPicUrl=_lickPicUrl;
@property(copy, nonatomic) NSString *link_url; // @synthesize link_url=_link_url;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

