/* made by EzioChiu.
 */

@protocol DCConnectivityTrackerDelegate

@required

- (void)connectivityTracker:(DCConnectivityTracker *)arg1 didUpdateConnectionStatus:(bool)arg2;
- (DCService *)service;

@end