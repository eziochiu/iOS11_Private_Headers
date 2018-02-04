/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementPredicateActivityDataEnvironment : _HKBaseAchievementPredicateEnvironment {
    _HKAchievementPredicateActivitySummaryHistoryEnvironment * _history;
    _HKAchievementPredicateActivitySummaryEnvironment * _today;
    _HKAchievementPredicateActivitySummaryEnvironment * _yesterday;
}

@property (nonatomic, readonly) _HKAchievementPredicateActivitySummaryHistoryEnvironment *history;
@property (nonatomic, readonly) _HKAchievementPredicateActivitySummaryEnvironment *today;
@property (nonatomic, readonly) _HKAchievementPredicateActivitySummaryEnvironment *yesterday;

- (void).cxx_destruct;
- (id)history;
- (id)initWithTodayEnvironment:(id)arg1 yesterdayEnvironment:(id)arg2 historyEnvironment:(id)arg3;
- (id)today;
- (id)yesterday;

@end
