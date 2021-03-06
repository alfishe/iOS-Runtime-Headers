/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CITriangleKaleidoscope : CIFilter  {
    CIImage *inputImage;
    CIVector *inputPoint;
    NSNumber *inputSize;
    NSNumber *inputRotation;
    NSNumber *inputDecay;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputPoint;
@property(copy) NSNumber * inputSize;
@property(copy) NSNumber * inputRotation;
@property(copy) NSNumber * inputDecay;

+ (id)customAttributes;

- (id)inputRotation;
- (void)setInputRotation:(id)arg1;
- (void)setInputPoint:(id)arg1;
- (id)inputDecay;
- (id)inputSize;
- (id)_colorKernel;
- (id)_geomKernel;
- (void)setInputDecay:(id)arg1;
- (void)setInputSize:(id)arg1;
- (id)inputPoint;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
