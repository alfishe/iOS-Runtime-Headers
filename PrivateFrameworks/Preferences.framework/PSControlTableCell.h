/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIControl;

@interface PSControlTableCell : PSTableCell  {
    UIControl *_control;
}

@property(retain) UIControl * control;


- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)controlValue;
- (id)newControl;
- (id)valueLabel;
- (void)controlChanged:(id)arg1;
- (void)dealloc;
- (id)control;
- (void)setControl:(id)arg1;

@end
