/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject <HMFLogging, WPHomeKitDelegate> {
    long long  _currentScanState;
    <HAPAccessoryServerBrowserWiProxBTLEDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _scanInBackground;
    NSMutableSet * _trackedIdentifiers;
    NSMutableSet * _trackedPeripherals;
    NSObject<OS_dispatch_queue> * _workQueue;
    WPHomeKit * _wpHomeKit;
}

@property (nonatomic) long long currentScanState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HAPAccessoryServerBrowserWiProxBTLEDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool scanInBackground;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableSet *trackedIdentifiers;
@property (nonatomic, readonly) NSMutableSet *trackedPeripherals;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) WPHomeKit *wpHomeKit;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_getTrackedPeripheralWithIdentifier:(id)arg1;
- (id)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2;
- (void)_probeReachabilityForTrackedAccessories;
- (void)_removeTrackedPeripheral:(id)arg1;
- (void)_reportHAPPeripheral:(id)arg1;
- (void)_startBrowsingForHAPBLEAccessories;
- (void)_startScanningWithData:(id)arg1;
- (void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 restartScan:(bool)arg2;
- (void)_stopBrowsingForHAPBLEAccessories;
- (void)_stopScanning;
- (void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (long long)currentScanState;
- (id)delegate;
- (id)delegateQueue;
- (void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4;
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 type:(long long)arg5;
- (void)homeKitDidUpdateState:(id)arg1;
- (void)homeKitStartedScanning:(id)arg1;
- (void)homeKitStoppedScanning:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)probeReachabilityForTrackedAccessories;
- (void)resetLastSeenForTrackedAccessories:(id)arg1;
- (void)retrieveStateForTrackedAccessoryWithIdentifier:(id)arg1 onQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)scanInBackground;
- (void)setCurrentScanState:(long long)arg1;
- (void)setScanInBackground:(bool)arg1;
- (void)startBrowsingForHAPBLEAccessories;
- (void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (void)stopBrowsingForHAPBLEAccessories;
- (void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (id)trackedIdentifiers;
- (id)trackedPeripherals;
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
- (id)workQueue;
- (id)wpHomeKit;

@end
