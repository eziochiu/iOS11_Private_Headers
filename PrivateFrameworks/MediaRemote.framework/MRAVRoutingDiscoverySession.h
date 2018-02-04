/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVRoutingDiscoverySession : NSObject {
    AVOutputDeviceDiscoverySession * _avDiscoverySession;
    NSArray * _availableEndpoints;
    struct NSMapTable { Class x1; } * _deviceIDsToWeakOutputDevicesTable;
    unsigned int  _discoveryMode;
    unsigned int  _endpointFeatures;
    struct NSMutableDictionary { Class x1; } * _endpointsChangedCallbacks;
    struct NSMapTable { Class x1; } * _groupIDsToWeakEndpointsTable;
    struct NSMutableDictionary { Class x1; } * _outputDevicesChangedCallbacks;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) NSArray *availableEndpoints;
@property (nonatomic, readonly) NSArray *availableOutputDevices;
@property (nonatomic) unsigned int discoveryMode;
@property (nonatomic, readonly) unsigned int endpointFeatures;
@property (nonatomic, readonly) bool hasAvailableEndpoints;

- (void)_availableOutputDevicesDidChangeNotification:(id)arg1;
- (void)_registerNotifications;
- (void)_reloadAvailableEndpoints;
- (void)_unregisterNotifications;
- (id)addEndpointsChangedCallback:(id /* block */)arg1;
- (id)addOutputDevicesChangedCallback:(id /* block */)arg1;
- (id)availableEndpoints;
- (id)availableOutputDevices;
- (void)dealloc;
- (unsigned int)discoveryMode;
- (unsigned int)endpointFeatures;
- (bool)hasAvailableEndpoints;
- (id)initWithEndpointFeatures:(unsigned int)arg1;
- (void)removeEndpointsChangedCallback:(id)arg1;
- (void)removeOutputDevicesChangedCallback:(id)arg1;
- (void)setAvailableEndpoints:(id)arg1;
- (void)setDiscoveryMode:(unsigned int)arg1;

@end
