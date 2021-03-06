/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class FigVideoLayerInternal;

@interface FigVideoLayer : CALayer  {
    FigVideoLayerInternal *_videoLayer;
}


- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (BOOL)isVideoLayerBeingServiced;
- (void)notificationBarrier;
- (void)dealloc;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (void)finalize;

@end
