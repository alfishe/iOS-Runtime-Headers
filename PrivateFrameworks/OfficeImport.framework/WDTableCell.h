/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDText, WDTableRow, WDTableCellProperties;

@interface WDTableCell : NSObject  {
    int mIndex;
    WDTableRow *mRow;
    WDTableCellProperties *mProperties;
    WDText *mText;
    BOOL mUseTrackedProperties;
}


- (void)dealloc;
- (id)properties;
- (int)index;
- (id)text;
- (id)row;
- (int)compareIndex:(id)arg1;
- (void)setUseTrackedProperties:(BOOL)arg1;
- (BOOL)useTrackedProperties;
- (id)initWithRow:(id)arg1 at:(int)arg2;
- (void)clearProperties;
- (double)cellWidth;

@end
