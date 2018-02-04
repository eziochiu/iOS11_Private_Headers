/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKActivityChartPointSummary : NSObject <HKGraphSeriesBlockCoordinateInfo> {
    NSString * _activityGoalSummaryString;
    NSString * _energyBurnSummaryString;
    NSString * _formattedDateString;
    NSString * _workoutSummaryString;
}

@property (nonatomic, readonly) NSString *activityGoalSummaryString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *energyBurnSummaryString;
@property (nonatomic, readonly) NSString *formattedDateString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *workoutSummaryString;

+ (id)_dateFormatter;
+ (id)_distanceFormatter;
+ (id)_energyFormatter;
+ (id)_workoutDurationFormatter;

- (void).cxx_destruct;
- (void)_createWorkoutSummaryWithWorkouts:(id)arg1;
- (id)activityGoalSummaryString;
- (id)description;
- (id)energyBurnSummaryString;
- (id)formattedDateString;
- (id)initWithActivityCache:(id)arg1 workouts:(id)arg2;
- (id)workoutSummaryString;

@end