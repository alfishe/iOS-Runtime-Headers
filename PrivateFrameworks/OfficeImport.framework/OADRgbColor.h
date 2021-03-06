/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADRgbColor : OADColor  {
    float mRed;
    float mGreen;
    float mBlue;
}

+ (id)rgbColorWithWhiteByte:(float)arg1;
+ (id)rgbColorWithWhite:(float)arg1;
+ (id)rgbColorWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
+ (id)rgbColorWithTSUColor:(id)arg1;
+ (id)rgbColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)white;
+ (id)black;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)blue;
- (float)green;
- (float)red;
- (id)initWithWhiteByte:(float)arg1;
- (id)initWithWhite:(float)arg1;
- (id)rgbColorWithFraction:(float)arg1 ofRgbColor:(id)arg2;
- (unsigned char)blueByte;
- (unsigned char)greenByte;
- (unsigned char)redByte;
- (id)initWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;

@end
