/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKSpotlightBackgroundBrush : GKAbstractGradientBrush  {
    struct CGPoint { 
        float x; 
        float y; 
    } _spotlightCenter;
    float _spotlightScale;
}

@property struct CGPoint { float x1; float x2; } spotlightCenter;
@property float spotlightScale;

+ (id)largeSpotlightBackgroundBrush;
+ (id)spotlightBackgroundBrush;

- (void)setSpotlightCenter:(struct CGPoint { float x1; float x2; })arg1;
- (float)spotlightScale;
- (struct CGPoint { float x1; float x2; })spotlightCenter;
- (void)setSpotlightScale:(float)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)init;

@end
