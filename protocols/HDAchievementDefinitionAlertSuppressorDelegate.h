/* made by EzioChiu.
 */

@protocol HDAchievementDefinitionAlertSuppressorDelegate

@required

- (void)alertSuppressionStatusDidChange:(id <HDAchievementDefinitionAlertSuppressor>)arg1;
- (NSDate *)currentDate;
- (bool)wantsToAlert;

@end
