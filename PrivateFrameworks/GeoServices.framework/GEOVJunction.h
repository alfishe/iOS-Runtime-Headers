/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOVJunction : PBCodable  {
    NSMutableArray *_connectingRoads;
    NSMutableArray *_laneConnections;
}

@property(retain) NSMutableArray * connectingRoads;
@property(retain) NSMutableArray * laneConnections;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)connectingRoads;
- (id)laneConnectionsAtIndex:(unsigned int)arg1;
- (void)clearLaneConnections;
- (id)connectingRoadAtIndex:(unsigned int)arg1;
- (void)clearConnectingRoads;
- (unsigned int)connectingRoadsCount;
- (void)addLaneConnections:(id)arg1;
- (void)addConnectingRoad:(id)arg1;
- (void)setLaneConnections:(id)arg1;
- (void)setConnectingRoads:(id)arg1;
- (unsigned int)laneConnectionsCount;
- (id)laneConnections;
- (BOOL)readFrom:(id)arg1;

@end
