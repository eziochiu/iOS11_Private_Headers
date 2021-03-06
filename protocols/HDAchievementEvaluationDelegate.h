/* made by EzioChiu.
 */

@protocol HDAchievementEvaluationDelegate <NSObject>

@required

- (_HKAchievement *)createEvaluatedAchievementWithDefinition:(_HKAchievementDefinition *)arg1;
- (NSNumber *)evaluateAchievementExpression:(NSExpression *)arg1;

@end
