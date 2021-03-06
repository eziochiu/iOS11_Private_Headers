/* made by EzioChiu.
 */

@protocol SBRemoteAlertDelegate <NSObject>

@required

- (void)remoteAlert:(id <SBRemoteAlert>)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteAlertDidActivate:(id <SBRemoteAlert>)arg1;
- (void)remoteAlertDidDeactivate:(id <SBRemoteAlert>)arg1;
- (void)remoteAlertDidRequestDismissal:(id <SBRemoteAlert>)arg1;

@end
