/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class CMMotionManager, CMAttitude, NSMutableSet, NSOperationQueue;

@interface MPMotionManager : NSObject  {
    NSMutableSet *_accelerometerHandlerClients;
    BOOL _accelerometerUpdatesActive;
    CMAttitude *_attitude;
    CMMotionManager *_motionManager;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedMotionManager;

- (void)_beginMotionUpdates;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (id)addObserverWithAccelerometerHandler:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
