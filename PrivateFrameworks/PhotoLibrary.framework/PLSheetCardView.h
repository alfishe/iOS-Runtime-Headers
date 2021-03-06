/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAGradientLayer, UIImageView, UIView;

@interface PLSheetCardView : UIView  {
    UIView *_contentView;
    UIView *_paperBG;
    UIView *_paperTexture;
    CAGradientLayer *_gradientLayer;
    UIImageView *_bevel;
    UIView *_headerView;
}

@property(readonly) UIView * contentView;


- (void)_setupSubviews;
- (void)dealloc;
- (id)contentView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_headerRect;
- (void)_updateHeader;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bevelRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_paperBounds;

@end
