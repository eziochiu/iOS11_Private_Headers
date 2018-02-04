/* made by EzioChiu.
 */

@protocol HDAchievementDefinitionAlertNotifier <NSObject>

@required

- (void)notifyAchievementDefinitions:(NSArray *)arg1;

@optional

- (void)achievementDefinitionsDidExpire:(NSArray *)arg1;

@end
