/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAppleMediaAccessory : HMDMediaAccessory <HMFLogging> {
    HMDDevice * _device;
    HMDRemoteLoginHandler * _remoteLoginHandler;
    HMDSoftwareUpdate * _softwareUpdate;
    HMFSoftwareVersion * _softwareVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) HMDRemoteLoginHandler *remoteLoginHandler;
@property (readonly) HMDSoftwareUpdate *softwareUpdate;
@property (readonly) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__updateDeviceWithDeviceIdentifier:(id)arg1;
- (id)_decodeHashedRouteUID:(id)arg1;
- (void)_fetchAvailableUpdate:(id)arg1;
- (id)_hashRouteID:(id)arg1;
- (void)_registerForMessages;
- (void)_relayRequestMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_startUpdate:(id)arg1;
- (void)_updateSoftwareVersion:(id)arg1;
- (void)addRootSettings;
- (id)assistantObject;
- (id)backingStoreObjects:(long long)arg1;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (void)dealloc;
- (id)device;
- (id)deviceMonitor;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAddedRootSettingsModel:(id)arg1 message:(id)arg2;
- (void)handleAddedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (void)handleCurrentDeviceChanged:(id)arg1;
- (void)handleCurrentDeviceUpdated:(id)arg1;
- (void)handleDeviceIsNotReachable:(id)arg1;
- (void)handleDeviceIsReachable:(id)arg1;
- (void)handleDeviceUpdated:(id)arg1;
- (void)handleRemovedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (bool)isCurrentAccessory;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)remoteLoginHandler;
- (id)remoteMessageDestination;
- (void)setDevice:(id)arg1;
- (void)setRemotelyReachable:(bool)arg1;
- (void)setSoftwareUpdate:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (bool)shouldUpdateWithDevice:(id)arg1;
- (id)softwareUpdate;
- (id)softwareVersion;
- (void)startMonitoringReachability;
- (bool)supportsSettings;
- (bool)supportsSoftwareUpdate;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)updateRootGroup:(id)arg1;
- (void)updateSoftwareUpdate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateWithDevice:(id)arg1;
- (id)url;

@end
