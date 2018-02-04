/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface _MediaControlsEndpointsDataSource : NSObject <MPAVRoutingControllerDelegate, MediaControlsCollectionViewDataSource> {
    NSString * _bundleID;
    long long  _discoveryMode;
    MPAVOutputDeviceRoutingDataSource * _outputDeviceRoutingDataSource;
    MediaControlsEndpointsViewController * _panelViewController;
    NSArray * _routes;
    NSString * _routingContextUID;
    MPAVRoutingController * _routingController;
    MPAVRoutingViewController * _routingViewController;
}

@property (nonatomic, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long discoveryMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) MediaControlsEndpointsViewController *panelViewController;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic, retain) MPAVRoutingViewController *routingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allRoutes;
- (id)_filteredRoutes:(id)arg1;
- (void)_setRoutes:(id)arg1;
- (void)_setupEndpointDiscovery;
- (void)_setupRoutingViewController;
- (bool)_showLocalEndpointOnly;
- (id)bundleID;
- (id)createViewControllerForCollectionViewController:(id)arg1;
- (long long)discoveryMode;
- (id)init;
- (long long)numberOfDestinationsInPicker:(id)arg1;
- (id)panelViewController;
- (id)picker:(id)arg1 playerPathForIndex:(long long)arg2;
- (id)routesViewControllerForPicker:(id)arg1;
- (id)routingContextUID;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (id)routingViewController;
- (void)setBundleID:(id)arg1;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setPanelViewController:(id)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setRoutingViewController:(id)arg1;

@end
