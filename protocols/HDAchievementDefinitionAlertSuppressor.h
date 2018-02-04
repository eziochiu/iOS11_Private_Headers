/* made by EzioChiu.
 */

@protocol HDAchievementDefinitionAlertSuppressor

@required

- (bool)alertsAreSuppressed;
- (<HDAchievementDefinitionAlertSuppressorDelegate> *)delegate;
- (void)setDelegate:(id <HDAchievementDefinitionAlertSuppressorDelegate>)arg1;

@end
