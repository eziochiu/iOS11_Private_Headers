/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXLocationManagerWrapper : NSObject <CLLocationManagerDelegate, _ATXLocationManagerWrapperProtocol> {
    _ATXLocation * _currentLOI;
    CLLocation * _currentLocation;
    NSDate * _lastLOIUpdateTimestamp;
    CLLocationManager * _locationManager;
    RTRoutineManager * _routineManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CLLocationManager *locationManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getCurrentLocation;
- (void)_updateCurrentLocationOfInterest;
- (void)clearLocationOfInterest;
- (void)fetchAllLocationsOfInterest:(id /* block */)arg1;
- (id)init;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationOfInterestAtCurrentLocation;
- (void)setLocationManager:(id)arg1;

@end
