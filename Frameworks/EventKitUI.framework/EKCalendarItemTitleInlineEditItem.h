/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITableViewCell;

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate> {
    UITableViewCell *_titleCell;
    UITableViewCell *_locationCell;
    unsigned int _showsLocation : 1;
}


- (void)reset;
- (void)dealloc;
- (id)init;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)_makeCell:(int)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(int)arg2 inSubsection:(int)arg3;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 inSubsection:(int)arg2 forWidth:(float)arg3;
- (id)cellForSubitemAtIndex:(int)arg1 inSubsection:(int)arg2;
- (int)numberOfSubitemsInSubsection:(int)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (id)initWithLocation:(BOOL)arg1;
- (BOOL)isInline;

@end
