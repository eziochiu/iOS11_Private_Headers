/* made by EzioChiu.
 */

@protocol FCAppConfigurationObserving <NSObject>

@optional

- (void)appConfigurationDidChange:(FCAppConfigurationManager *)arg1;
- (void)appConfigurationManagerUserDidJoinOrLeaveExperiment:(FCAppConfigurationManager *)arg1;
- (void)appConfigurationTrendingTopicsDidChange:(FCAppConfigurationManager *)arg1;

@end
