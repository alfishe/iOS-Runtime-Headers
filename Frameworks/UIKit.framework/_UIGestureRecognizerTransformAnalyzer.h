/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIGestureRecognizerTransformAnalyzer : NSObject  {
    float _lowPassTranslationMagnitudeDelta;
    float _lowPassScaleDelta;
    float _lowPassRotationDelta;
    float _translationWeight;
    float _pinchingWeight;
    float _rotationWeight;
    int _dominantComponent;
}

@property(readonly) int dominantComponent;
@property float translationWeight;
@property float pinchingWeight;
@property float rotationWeight;


- (void)reset;
- (id)init;
- (int)dominantComponent;
- (void)setRotationWeight:(float)arg1;
- (float)rotationWeight;
- (void)setPinchingWeight:(float)arg1;
- (float)pinchingWeight;
- (void)setTranslationWeight:(float)arg1;
- (float)translationWeight;
- (void)analyzeTouches:(id)arg1;

@end
