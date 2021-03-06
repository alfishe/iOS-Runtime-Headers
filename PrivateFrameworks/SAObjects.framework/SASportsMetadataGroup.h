/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSArray;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable> {
}

@property(copy) NSString * description;
@property(copy) NSArray * metadata;
@property(copy) NSNumber * selected;

+ (id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)metadataGroup;

- (id)groupIdentifier;
- (id)description;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (id)selected;
- (void)setSelected:(id)arg1;
- (id)encodedClassName;
- (void)setDescription:(id)arg1;

@end
