/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLBuildingProgram : VGLFogProgram  {
    int _uColor;
    int _uScale;
    int _uAlpha;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _color;
    float _scale;
    struct { 
        float x; 
        float y; 
        float z; 
    } _cameraPositionInTileSpace;
    int _uCameraPositionInTileSpace;
    int _uTextureSampler;
    int _textureSampler;
}

@property struct _VGLColor { float x1; float x2; float x3; float x4; } color;
@property float scale;
@property struct { float x1; float x2; float x3; } cameraPositionInTileSpace;
@property int textureSampler;

+ (id)program;

- (struct _VGLColor { float x1; float x2; float x3; float x4; })color;
- (void)setColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setScale:(float)arg1;
- (float)scale;
- (struct { float x1; float x2; float x3; })cameraPositionInTileSpace;
- (int)textureSampler;
- (void)setTextureSampler:(int)arg1;
- (void)setCameraPositionInTileSpace:(struct { float x1; float x2; float x3; })arg1;
- (id)initWithVertName:(id)arg1 fragName:(id)arg2;

@end
