/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */



@interface ABPersonAdditions : NSObject 
{
}

+ (struct __CFArray { }*)copyAllProperties;
+ (struct __CFArray { }*)copyDefaultDisplayedProperties;
+ (struct __CFArray { }*)copyOptionalProperties;
+ (struct __CFArray { }*)copyNameProperties;
+ (BOOL)isNameProperty:(NSInteger)arg1;
+ (struct __CFArray { }*)copyOptionalNameProperties;
+ (struct __CFArray { }*)copyOptionalJobProperties;
+ (struct __CFArray { }*)copyOptionalNameAffixProperties;
+ (struct __CFArray { }*)copyNamePropertiesForEditing:(BOOL)arg1 person:(void*)arg2;
+ (struct __CFArray { }*)copyNamePropertiesForEditing:(BOOL)arg1 includeRequiredNameProperties:(BOOL)arg2 person:(void*)arg3;
+ (BOOL)personHasRingtone:(void*)arg1;
+ (BOOL)person:(void*)arg1 hasProperty:(NSInteger)arg2;
+ (void)person:(void*)arg1 allowsLabels:(BOOL*)arg2 customLabels:(BOOL*)arg3 forProperty:(NSInteger)arg4;
+ (BOOL)personAllowsCustomLabels:(void*)arg1 forProperty:(NSInteger)arg2;
+ (BOOL)personAllowsLabels:(void*)arg1 forProperty:(NSInteger)arg2;


@end