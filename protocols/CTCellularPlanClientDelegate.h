/* made by EzioChiu.
 */

@protocol CTCellularPlanClientDelegate <NSObject>

@required

- (void)planInfoDidUpdate;
- (void)remoteProvisioningDidBecomeAvailable;

@end
