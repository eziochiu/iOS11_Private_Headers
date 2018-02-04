/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDExerciseAchievementState : _HDAchievementState {
    double  _bestExerciseMinutes;
    double  _previousExerciseMinutesToday;
}

@property (nonatomic) double bestExerciseMinutes;
@property (nonatomic) double previousExerciseMinutesToday;

- (double)bestExerciseMinutes;
- (double)previousExerciseMinutesToday;
- (void)setBestExerciseMinutes:(double)arg1;
- (void)setPreviousExerciseMinutesToday:(double)arg1;

@end
