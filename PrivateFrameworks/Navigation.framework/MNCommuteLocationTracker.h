/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteLocationTracker : MNLocationTracker <GEOETAUpdaterDelegate> {
    <GEOMapServiceTicket> * _currentLocationTicket;
    GEOComposedWaypoint * _destination;
    unsigned long long  _destinationID;
    <GEODirectionServiceTicket> * _directionsRequestTicket;
    GEOETAUpdater * _etaUpdater;
    MNLocation * _lastLocation;
    GEOComposedWaypoint * _lastOrigin;
    GEONavigationMapMatcher * _mapMatcher;
    bool  _requestNonRecommendedRoutes;
    MNActiveRouteInfo * _routeInfo;
    bool  _routingInProgress;
    MNNavigationTraceManager * _traceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic) unsigned long long destinationID;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool requestNonRecommendedRoutes;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic) bool routingInProgress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_directionsRequestFeedback;
- (void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2;
- (void)_requestRouteFromLocation:(id)arg1;
- (void)_requestRouteFromWaypoint:(id)arg1 location:(id)arg2;
- (id)_routeAttributes;
- (void)_setAuditToken:(id)arg1;
- (void)dealloc;
- (id)destination;
- (unsigned long long)destinationID;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (id)initWithDestination:(id)arg1 traceManager:(id)arg2;
- (bool)requestNonRecommendedRoutes;
- (id)route;
- (bool)routingInProgress;
- (void)setDestinationID:(unsigned long long)arg1;
- (void)setRequestNonRecommendedRoutes:(bool)arg1;
- (void)setRoutingInProgress:(bool)arg1;
- (void)startTracking;
- (void)stopTracking;
- (int)transportType;
- (void)updateETA;
- (void)updateLocation:(id)arg1;

@end