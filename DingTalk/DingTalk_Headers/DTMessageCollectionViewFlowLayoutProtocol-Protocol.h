//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizMessage, DTMessageCollectionViewLayoutAttributes, NSIndexPath;

@protocol DTMessageCollectionViewFlowLayoutProtocol <NSObject>
- (void)configureMessageCellLayoutAttributes:(DTMessageCollectionViewLayoutAttributes *)arg1 indexPath:(NSIndexPath *)arg2;
- (void)configureNormalMessageCellLayoutAttributes:(DTMessageCollectionViewLayoutAttributes *)arg1 messageBubbleSize:(struct CGSize)arg2 sharpWidth:(double)arg3 isMerge:(_Bool)arg4 message:(DTBizMessage *)arg5;
- (void)configureCMessageCellLayoutAttributes:(DTMessageCollectionViewLayoutAttributes *)arg1 messageBubbleSize:(struct CGSize)arg2 sharpWidth:(double)arg3 isMerge:(_Bool)arg4 message:(DTBizMessage *)arg5;
@end

