/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSArray;

@interface CAWindowServer : NSObject  {
    struct CAWindowServerImpl { struct __CFArray {} *x1; unsigned int x2; } *_impl;
}

@property(readonly) NSArray * displays;
@property(getter=isMirroringEnabled) BOOL mirroringEnabled;
@property unsigned int rendererFlags;

+ (id)context;
+ (id)contextWithOptions:(id)arg1;
+ (id)serverIfRunning;
+ (id)server;

- (id)description;
- (void)dealloc;
- (id)init;
- (id)displays;
- (void)setRendererFlags:(unsigned int)arg1;
- (id)_init;
- (unsigned int)rendererFlags;
- (BOOL)isMirroringEnabled;
- (void)setMirroringEnabled:(BOOL)arg1;
- (void)_detectDisplays;
- (id)displayWithName:(id)arg1;
- (void)removeAllDisplays;
- (void)removeDisplay:(id)arg1;
- (void)addDisplay:(id)arg1;

@end
