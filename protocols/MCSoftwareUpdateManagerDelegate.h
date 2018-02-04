/* made by EzioChiu.
 */

@protocol MCSoftwareUpdateManagerDelegate <NSObject>

@required

- (void)manager:(MCSoftwareUpdateManager *)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(NSError *)arg4;
- (void)manager:(MCSoftwareUpdateManager *)arg1 download:(SUDownload *)arg2 failedWithError:(NSError *)arg3;
- (void)manager:(MCSoftwareUpdateManager *)arg1 downloadProgressChanged:(SUDownload *)arg2;
- (void)manager:(MCSoftwareUpdateManager *)arg1 installFailedWithError:(NSError *)arg2;
- (void)manager:(MCSoftwareUpdateManager *)arg1 scanFoundUpdate:(SUDescriptor *)arg2 error:(NSError *)arg3;

@end
