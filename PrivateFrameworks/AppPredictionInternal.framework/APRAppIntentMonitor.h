/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface APRAppIntentMonitor : NSObject <APRIntentStreamUpdateInterface, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _appIntentHistoryQueue;
    _ATXAppLaunchHistogramManager * _appLaunchHistogramManager;
    <_CDLocalContext> * _context;
    _ATXDuetHelper * _duetHelper;
    NSXPCListener * _listener;
    _APRParzenModel * _nonSiriKitParzenModel;
    _CDContextualChangeRegistration * _registration;
    _APRParzenModel * _siriKitParzenModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_syncForTests;
- (void)dealloc;
- (void)handleIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3 intentSource:(long long)arg4;
- (void)handleNonSiriKitIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3;
- (void)handleSiriKitIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3;
- (id)init;
- (id)initWithAppLaunchHistogramManager:(id)arg1 siriKitParzenModel:(id)arg2 nonSiriKitParzenModel:(id)arg3;
- (id)initWithAppLaunchHistogramManager:(id)arg1 siriKitParzenModel:(id)arg2 nonSiriKitParzenModel:(id)arg3 duetHelper:(id)arg4;
- (void)listenToIntentStream;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)logSirikitIntentWithDKUUIDKey:(id)arg1 bundleId:(id)arg2;
- (void)notifyAboutIntentStreamChangeWithReply:(id /* block */)arg1;
- (void)recordIntentDonationWithType:(id)arg1 intentSource:(long long)arg2 bundleId:(id)arg3 startDate:(id)arg4;
- (void)retrainParzenModelForIntentSource:(long long)arg1;
- (void)start;
- (void)stop;
- (void)updateLaunchHistoryFromDuet;
- (void)updateLaunchHistoryFromDuet:(double)arg1 intentSource:(long long)arg2;
- (void)updateLaunchHistoryFromDuetForInterval:(double)arg1;
- (void)updateLaunchHistoryFromDuetForSource:(long long)arg1;

@end
