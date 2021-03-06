/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSItemContentRating, NSArray, NSString, NSNumber;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSNumber *_itemIdentifier;
    BOOL _profileValidated;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
}

@property(retain) NSNumber * accountDSID;
@property(copy) NSString * accountIdentifier;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundleShortVersionString;
@property(copy) NSString * bundleVersion;
@property(copy) NSString * containerPath;
@property(copy) SSItemContentRating * contentRating;
@property(retain) NSNumber * itemIdentifier;
@property(getter=isProfileValidated) BOOL profileValidated;
@property(copy) NSString * softwareType;
@property(retain) NSNumber * storeFrontIdentifier;
@property(retain) NSNumber * versionIdentifier;
@property(copy) NSArray * versionOrdering;

+ (id)lookupAttributeKeys;

- (id)bundleVersion;
- (void)setBundleVersion:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setVersionOrdering:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (void)setSoftwareType:(id)arg1;
- (id)versionOrdering;
- (id)initWithMobileInstallationDictionary:(id)arg1;
- (id)versionIdentifier;
- (id)softwareType;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (id)accountIdentifier;
- (id)storeFrontIdentifier;
- (id)itemIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountDSID;
- (id)bundleIdentifier;
- (id)description;
- (void)dealloc;
- (void)setContentRating:(id)arg1;
- (id)contentRating;
- (void)setProfileValidated:(BOOL)arg1;
- (BOOL)isProfileValidated;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)containerPath;
- (void)_loadMetadataFromContainer:(id)arg1;
- (void)setContainerPath:(id)arg1;
- (void)setAccountDSID:(id)arg1;
- (void)setBundleShortVersionString:(id)arg1;
- (id)bundleShortVersionString;

@end
