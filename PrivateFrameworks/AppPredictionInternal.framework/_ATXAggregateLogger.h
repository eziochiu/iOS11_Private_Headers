/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAggregateLogger : NSObject {
    PETScalarEventTracker * _allLaunchesPredictionTracker;
    PETScalarEventTracker * _appOutcomeTracker;
    long long  _buildType;
    _ATXBundleIdSet * _bundleIdSet;
    PETScalarEventTracker * _conversionPositionTracker;
    PETScalarEventTracker * _conversionTracker;
    PETScalarEventTracker * _expertOutcomeTracker;
    PETGoalConversionEventTracker * _fidesRecordCreationTracker;
    PETDistributionEventTracker * _inputsTracker;
    PETScalarEventTracker * _itemsShownTracker;
    PETScalarEventTracker * _outcomeConsumerTracker;
    PETScalarEventTracker * _outcomeTracker;
    PETScalarEventTracker * _predictUninstalledAppsTracker;
    PETScalarEventTracker * _predictionTracker;
    PETDistributionEventTracker * _scoreTracker;
    PETScalarEventTracker * _widgetBackgroundRefreshTracker;
}

+ (id)_launchReasonToPropertyString;
+ (bool)isConversionOutcome:(unsigned long long)arg1;
+ (id)predictedItemOutcomesMapping;
+ (id)predictionOutcomesMapping;
+ (id)propertyStringForLaunchReason:(id)arg1;
+ (id)sharedInstance;
+ (id)stringForPredictedItemOutcome:(unsigned long long)arg1;
+ (id)stringForPredictionOutcome:(unsigned long long)arg1;
+ (id)validPropertyStringForLaunchReasonValues;
+ (bool)yesWithProbability:(double)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)logFidesRecordCreation:(bool)arg1;
- (void)logInputs:(const double*)arg1 andScore:(double)arg2 withOutcome:(unsigned long long)arg3;
- (void)logLaunchEventWithLaunchReason:(id)arg1 predicted:(bool)arg2 position:(long long)arg3;
- (void)logPredictUninstalledApps:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2;
- (void)logPredictionEventWith:(id)arg1 outcome:(unsigned long long)arg2 forABGroup:(id)arg3 consumerType:(unsigned long long)arg4 andSubType:(unsigned char)arg5;
- (void)logPredictionOfAppWithBundleId:(id)arg1 inputs:(const double*)arg2 outcome:(unsigned long long)arg3 rank:(unsigned long long)arg4 score:(double)arg5 forABGroup:(id)arg6;
- (void)logRefreshedWidgetInBackground;

@end
