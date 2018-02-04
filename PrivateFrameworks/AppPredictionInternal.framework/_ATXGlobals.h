/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXGlobals : NSObject {
    NSDictionary * _parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)airplaneModeLaunchDecayHalflife;
- (int)appConnectionMinAverageLaunches;
- (int)appConnectionMinTotalLaunches;
- (double)appConnectionSessionObjectLogSamplingRate;
- (double)appLaunchDecayHalflife;
- (double)dayOfWeekLaunchDecayHalflife;
- (int)extraAppsToLog;
- (id)init;
- (id)initWithAssetClass:(Class)arg1;
- (double)launchSequenceDecayHalflife;
- (int)maxMagicalMomentsPredictions;
- (id)sasEnabledIntents;
- (id)sasOOBEHighConfidenceApps;
- (double)sessionObjectLogSamplingRate;
- (double)shadowLogSamplingRate;
- (int)siriExperienceHighConfidenceIntentCountThreshold;
- (int)siriExperienceHighConfidenceLaunchCountThreshold;
- (double)siriExperienceHighConfidenceThreshold;
- (int)siriExperienceMediumConfidenceIntentCountThreshold;
- (int)siriExperienceMediumConfidenceLaunchCountThreshold;
- (double)siriExperienceMediumConfidenceThreshold;
- (double)smartAppSelectionSessionObjectLogSamplingRate;
- (double)smartAppSelectionShadowLogSamplingRate;
- (double)spotlightLaunchDecayHalflife;
- (double)trendingLaunchDecayHalflife;
- (double)unlockTimeDecayHalflife;
- (double)wifiSSIDLaunchDecayHalflife;

@end
