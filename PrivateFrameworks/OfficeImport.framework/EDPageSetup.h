/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPageSetup : NSObject  {
    int mOrientation;
    int mPageOrder;
    boolmCustomFirstPageNumber;
    unsigned int mFirstPageNumber;
    unsigned int mCopies;
    unsigned int mFitToHeight;
    unsigned int mFitToWidth;
    unsigned int mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;

- (id)init;
- (void)setOrientation:(int)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setScale:(unsigned int)arg1;
- (unsigned int)scale;
- (int)orientation;
- (float)footerMargin;
- (unsigned int)fitToWidth;
- (unsigned int)fitToHeight;
- (unsigned int)firstPageNumber;
- (bool)customFirstPageNumber;
- (void)setFooterMargin:(float)arg1;
- (void)setHeaderMargin:(float)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setFitToWidth:(unsigned int)arg1;
- (void)setFitToHeight:(unsigned int)arg1;
- (void)setCustomFirstPageNumber:(bool)arg1;
- (void)setFirstPageNumber:(unsigned int)arg1;
- (int)order;
- (void)setOrder:(int)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setTopMargin:(float)arg1;
- (float)bottomMargin;
- (float)headerMargin;
- (float)topMargin;
- (float)rightMargin;
- (float)leftMargin;

@end
