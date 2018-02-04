/* made by EzioChiu.
 */

@protocol _HKActivitySummaryHistoryEnvironmentDataSource <NSObject>

@required

- (_HKAchievementPredicateMonthlyAggregatesEnvironment *)aggregateEnvironmentForMonthOffsetFromNow:(long long)arg1;
- (NSArray *)dayEnvironmentsInDateInterval:(NSDateInterval *)arg1;

@end
