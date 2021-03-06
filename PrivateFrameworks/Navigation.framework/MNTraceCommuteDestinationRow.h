/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceCommuteDestinationRow : NSObject {
    unsigned long long  _destinationID;
    NSString * _name;
    GEOComposedWaypoint * _waypoint;
}

@property (nonatomic) unsigned long long destinationID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) GEOComposedWaypoint *waypoint;

- (void).cxx_destruct;
- (unsigned long long)destinationID;
- (id)name;
- (void)setDestinationID:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setWaypoint:(id)arg1;
- (id)waypoint;

@end
