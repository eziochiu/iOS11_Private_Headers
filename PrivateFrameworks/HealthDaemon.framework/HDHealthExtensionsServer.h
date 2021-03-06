/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthExtensionsServer : NSObject <HDDiagnosticObject, HKExtendedServerInterface, _HKXPCExportable> {
    HDXPCClient * _client;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForAchievementDefinitionUnviewedCountChangeNotifications;
    bool  _registeredForAchievementNotifications;
}

@property (nonatomic, retain) HDXPCClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool registeredForAchievementDefinitionUnviewedCountChangeNotifications;
@property (nonatomic) bool registeredForAchievementNotifications;
@property (readonly) Class superclass;

+ (bool)_shouldAcceptConnectionForClient:(id)arg1 error:(id*)arg2;
+ (id)serverWithClient:(id)arg1 profile:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_achievementDefinitionAvailabilityChanged:(id)arg1;
- (void)_achievementDefinitionUnviewedCountChanged:(id)arg1;
- (void)_achievementsAddedOrRemoved:(id)arg1;
- (void)_callClientRemoteAchievementDefinitionUnviewedCountChanged;
- (void)_checkForUpdatedAchievementAssetsOnce;
- (id)client;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)exportedInterface;
- (id)initWithClient:(id)arg1 profile:(id)arg2;
- (id)profile;
- (id)queue;
- (bool)registeredForAchievementDefinitionUnviewedCountChangeNotifications;
- (bool)registeredForAchievementNotifications;
- (id)remoteInterface;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)remote_achievementAssetAvailabilityOnPairedDeviceForIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_addAchievement:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_createMonthlyChallengeAchievementForMonth:(long long)arg1 year:(long long)arg2 predicateString:(id)arg3 progressExpressionString:(id)arg4 goalExpressionString:(id)arg5 completion:(id /* block */)arg6;
- (void)remote_deleteAchievementWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_deleteAllAchievementsWithCompletion:(id /* block */)arg1;
- (void)remote_expressionValue:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchAchievementAssetsServerURLWithCompletion:(id /* block */)arg1;
- (void)remote_fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_fetchDynamicAchievementDefinitionsWithCompletion:(id /* block */)arg1;
- (void)remote_fetchHiddenUnearnedAchievementDefinitionIdentifiersAmongIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchNumberOfUnviewedAchievementsWithCompletion:(id /* block */)arg1;
- (void)remote_fetchUnviewedAchievementDefinitionIdentifiersWithCompletion:(id /* block */)arg1;
- (void)remote_markAchievementAsViewed:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_markAchievementDefinitionIdentifierAlertViewed:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_markAchievementsAlerted:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_nextScheduledAchievementDefinitionAlertTaskDateWithCompletion:(id /* block */)arg1;
- (void)remote_progressAchievementWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_registerForAchievementDefinitionNotificationsWithCompletion:(id /* block */)arg1;
- (void)remote_registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(id /* block */)arg1;
- (void)remote_resetAchievementDefinitionAlertedStates:(bool)arg1 availabilityStates:(bool)arg2 completion:(id /* block */)arg3;
- (void)remote_runAchievementsFixupAsDryRun:(bool)arg1 completion:(id /* block */)arg2;
- (void)remote_runCompanionAchievementManagerWithCompletion:(id /* block */)arg1;
- (void)remote_setAchievementAssetsServerURL:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_updateAllAchievementAssetsWithCompletion:(id /* block */)arg1;
- (void)setClient:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setRegisteredForAchievementDefinitionUnviewedCountChangeNotifications:(bool)arg1;
- (void)setRegisteredForAchievementNotifications:(bool)arg1;

@end
