/* made by EzioChiu.
 */

@protocol IXAppInstallObserverProtocol <NSObject>

@required

- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorShouldPauseWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorShouldResumeWithSeed:(IXAppInstallCoordinatorSeed *)arg1;
- (oneway void)_client_coordinatorWithSeed:(IXAppInstallCoordinatorSeed *)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorWithSeed:(IXAppInstallCoordinatorSeed *)arg1 didCancelWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_shouldPrioritizeAppWithBundleID:(NSString *)arg1;

@end