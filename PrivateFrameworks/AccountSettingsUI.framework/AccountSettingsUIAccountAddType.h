/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class PSSpecifier, NSString, NSArray;

@interface AccountSettingsUIAccountAddType : NSObject  {
    PSSpecifier *_specifier;
    NSArray *_dataclasses;
    NSString *_otherDataclassHeader;
    BOOL _wantsToBeLast;
}

@property(retain) PSSpecifier * specifier;
@property(retain) NSArray * dataclasses;
@property(retain) NSString * otherDataclassHeader;
@property BOOL wantsToBeLast;


- (void)dealloc;
- (BOOL)wantsToBeLast;
- (id)otherDataclassHeader;
- (void)setOtherDataclassHeader:(id)arg1;
- (void)setWantsToBeLast:(BOOL)arg1;
- (id)initWithSpecifier:(id)arg1 dataclasses:(id)arg2;
- (id)initWithSpecifier:(id)arg1 dataclasses:(id)arg2 otherDataclassHeader:(id)arg3;
- (void)setDataclasses:(id)arg1;
- (id)dataclasses;
- (void)setSpecifier:(id)arg1;
- (id)specifier;

@end
