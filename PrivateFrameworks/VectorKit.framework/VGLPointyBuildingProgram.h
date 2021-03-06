/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLPointyBuildingProgram : VGLFogProgram  {
    int _uScale;
    float _scale;
    int _uAlpha;
    float _alpha;
    struct { 
        float x; 
        float y; 
        float z; 
    } _cameraPositionInTileSpace;
    int _uCameraPositionInTileSpace;
}

@property float scale;
@property float alpha;
@property struct { float x1; float x2; float x3; } cameraPositionInTileSpace;

+ (id)program;

- (id)init;
- (void)setScale:(float)arg1;
- (float)scale;
- (void)setAlpha:(float)arg1;
- (float)alpha;
- (struct { float x1; float x2; float x3; })cameraPositionInTileSpace;
- (void)setCameraPositionInTileSpace:(struct { float x1; float x2; float x3; })arg1;

@end
