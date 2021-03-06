/* made by EzioChiu.
 */

@protocol HFHomeManagerObserver <HMHomeManagerDelegate>

@optional

- (void)homeKitDispatcher:(HFHomeKitDispatcher *)arg1 manager:(HMHomeManager *)arg2 didChangeHome:(HMHome *)arg3;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateAccessAllowedWhenLocked:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateLocationSensingAvailability:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateResidentEnabledForThisDevice:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStateForIncomingInvitations:(NSArray *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
- (void)homeManagerDidEndBatchNotifications:(HMHomeManager *)arg1;
- (void)homeManagerDidFinishInitialDatabaseLoad:(HMHomeManager *)arg1;
- (void)homeManagerDidFinishUnknownChange:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateApplicationData:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateCurrentHome:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateDataSyncState:(HMHomeManager *)arg1;
- (void)homeManagerWillStartBatchNotifications:(HMHomeManager *)arg1;

@end
