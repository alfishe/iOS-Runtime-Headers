/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSURL, NSOperationQueue, PFUbiquityLocation;

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter> {
    NSURL *_presentedItemURL;
    PFUbiquityLocation *_presentedItemLocation;
}

@property(readonly) NSURL * presentedItemURL;
@property(readonly) PFUbiquityLocation * presentedItemLocation;
@property(readonly) NSOperationQueue * presentedItemOperationQueue;
@property(readonly) NSURL * primaryPresentedItemURL;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)presentedItemLocation;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)relinquishPresentedItemToReader:(id)arg1;

@end
