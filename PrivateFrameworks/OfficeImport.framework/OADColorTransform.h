/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorTransform : NSObject <NSCopying> {
    int mType;
}

+ (id)applyRGBTransform:(id)arg1 toColor:(id)arg2;
+ (id)applyHSLTransform:(id)arg1 toColor:(id)arg2;
+ (id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2;
+ (id)applyTransforms:(id)arg1 toColor:(id)arg2;
+ (float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2;

- (int)type;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithType:(int)arg1;

@end
