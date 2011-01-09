/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class MKRoute, NSMutableArray;



@interface MKRouteView : MKLevelView 
{
    MKRoute *_route;
    NSMutableArray *_paths;
    struct { 
        double latitude; 
        double longitude; 
    } _routeTopLeftCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    } _routeBottomRightCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    } _routeCenterCoordinate;
}

@property(readonly) ? routeCenterCoordinate; /* unknown property attribute: V_routeCenterCoordinate */
@property(readonly) ? routeBottomRightCoordinate; /* unknown property attribute: V_routeBottomRightCoordinate */
@property(readonly) ? routeTopLeftCoordinate; /* unknown property attribute: V_routeTopLeftCoordinate */
@property(retain) MKRoute *route; /* unknown property attribute: V_route */


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)_createTileWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setNeedsNewPath;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pathRect;
- (void)setOffset:(struct { double x1; double x2; })arg1;
- (void)setZoomLevel:(NSInteger)arg1;
- (void)setRoute:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct { double x1; double x2; })routeCenterCoordinate;
- (struct { double x1; double x2; })routeBottomRightCoordinate;
- (struct { double x1; double x2; })routeTopLeftCoordinate;
- (id)route;

@end