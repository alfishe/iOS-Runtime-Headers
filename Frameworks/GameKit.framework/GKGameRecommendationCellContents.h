/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKGameRecommendationCellContents : GKPurchasableGameCellContents  {
    NSString *_reasonForRecommending;
}

@property(retain) NSString * reasonForRecommending;

+ (id)gameRecommendationCellContents;

- (void)setReasonForRecommending:(id)arg1;
- (id)reasonForRecommending;
- (void)updateLines;
- (void)dealloc;
- (void)prepareForReuse;

@end
