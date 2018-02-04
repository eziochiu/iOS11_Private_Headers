/* made by EzioChiu.
 */

@protocol WBSCyclerSecondaryDeviceCoordinatorDelegate <NSObject>

@optional

- (void)secondaryDeviceCoordinator:(WBSCyclerSecondaryDeviceCoordinator *)arg1 didEncounterError:(NSError *)arg2;
- (void)secondaryDeviceCoordinator:(WBSCyclerSecondaryDeviceCoordinator *)arg1 didReceiveDataFromPrimaryDevice:(NSData *)arg2;
- (void)secondaryDeviceCoordinatorDidConnectToPrimaryDevice:(WBSCyclerSecondaryDeviceCoordinator *)arg1;

@end
