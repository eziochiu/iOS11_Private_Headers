/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXDataStore : NSObject {
    _PASSqliteDatabase * _db;
    PETScalarEventTracker * _dbMigrationTracker;
    _ATXDuetHelper * _duetHelper;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _schemaVersion;
}

@property (nonatomic, readonly) _PASSqliteDatabase *db;

+ (id)defaultPath;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_databaseSchema;
- (void)_disconnectFromDb;
- (void)_enumerateAppInfoBundlesExecutingBlock:(id /* block */)arg1;
- (void)_markBundleIdAsExtension:(id)arg1;
- (void)_markBundleIdsAsExtension:(id)arg1;
- (void)_removeFeedbackForBundleId:(id)arg1;
- (bool)_reset;
- (void)_simulateCrashForMigrationFailure:(id)arg1;
- (void)_testMigrate;
- (void)_testMigrateToSchema:(unsigned long long)arg1;
- (id)_trimMigrationPlan:(id)arg1 toSchema:(unsigned long long)arg2;
- (void)addAppInstallForBundleId:(id)arg1 date:(id)arg2 genre:(id)arg3 subGenres:(id)arg4;
- (void)addAppLaunchForBundleId:(id)arg1 date:(id)arg2 withLaunchType:(long long)arg3;
- (void)addCategoricalHistogramData:(id)arg1 forHistogramOfType:(long long)arg2;
- (void)addExtensionLaunchForBundleId:(id)arg1 date:(id)arg2;
- (void)addHistogramData:(id)arg1 forHistogramOfType:(long long)arg2;
- (id)appInfoForBundleId:(id)arg1;
- (id)blobOfType:(long long)arg1;
- (id)categoricalHistogramDataForHistogramType:(long long)arg1;
- (void)clearAppInstallInfo;
- (void)clearAppLaunchInfo;
- (void)clearDatabase;
- (long long)configureDatabase;
- (long long)currentSchemaVersion;
- (id)db;
- (void)deleteLaunchesFollowingBundle:(id)arg1;
- (void)enumerateAppInfoBundlesExecutingBlock:(id /* block */)arg1;
- (void)enumerateStateForApps:(id)arg1 withGlobalBlock:(id /* block */)arg2 thenWithPerAppBlock:(id /* block */)arg3;
- (void)enumerateStateForApps:(id)arg1 withGlobalBlock:(id /* block */)arg2 thenWithPerAppBlock:(id /* block */)arg3 readOnly:(bool)arg4;
- (void)enumerateStateForAppsReadOnly:(id)arg1 withGlobalBlock:(id /* block */)arg2 thenWithPerAppBlock:(id /* block */)arg3;
- (id)filenamesAndDataForBackup;
- (id)getColumnNameForLaunchType:(long long)arg1;
- (id)histogramDataForHistogramType:(long long)arg1;
- (id)init;
- (id)initWithInMemoryDataStore;
- (id)initWithPath:(id)arg1 andDuetHelper:(id)arg2;
- (void)integrityCheckOrAbort;
- (long long)launchedAppCount;
- (id)loadAppInfo;
- (id)loadDataFromFile:(id)arg1;
- (id)loadLaunchesFollowingBundle:(id)arg1;
- (void)migrate;
- (long long)migrateToVersion:(unsigned long long)arg1 withMigrationPlan:(id)arg2;
- (void)migrateWithMigrationPlan:(id)arg1;
- (bool)migrationUpdateOrInsertTimestamp:(long long)arg1 intoColumn:(id)arg2 forBundleId:(id)arg3;
- (long long)migration_AddExtensionInfo;
- (long long)migration_AddGenres;
- (long long)migration_AppLaunchHistogramToTable;
- (long long)migration_DelinkFromCoreLocationVisitMonitoring;
- (long long)migration_DeprecateGenericAppIntentModels;
- (long long)migration_InstallDateToAppTable;
- (long long)migration_LaunchHistoriesToAppTable;
- (long long)migration_RemoveAllSubsequentLaunches;
- (long long)migration_RemoveFeedbackForUninstalledApps;
- (long long)migration_RemoveRestoreUserDefault;
- (long long)migration_failForTests;
- (void)removeAllFeedback;
- (void)removeAppInfoForBundleId:(id)arg1;
- (void)removeAppLaunchesForBundleId:(id)arg1;
- (void)removeFeedbackForBundleId:(id)arg1;
- (bool)removeFile:(id)arg1;
- (long long)runMigrationPlan:(id)arg1;
- (long long)skipFromZeroSchema;
- (void)swapInDuetHelperStub:(id)arg1;
- (bool)updateOrInsertCategoricalHistogramData:(id)arg1 forHistogram:(long long)arg2;
- (bool)updateOrInsertGenre:(id)arg1 subGenres:(id)arg2 forBundleId:(id)arg3;
- (bool)updateOrInsertHistogramData:(id)arg1 forHistogram:(long long)arg2;
- (bool)updateOrInsertInstallTimestamp:(long long)arg1 genre:(id)arg2 subGenres:(id)arg3 forBundleId:(id)arg4 isExtension:(bool)arg5;
- (bool)updateOrInsertSubsequentLaunchCountData:(id)arg1 forBundleId:(id)arg2;
- (bool)updateOrInsertTimestamp:(long long)arg1 intoColumn:(id)arg2 forBundleId:(id)arg3 isExtension:(bool)arg4;
- (void)updateSchemaVersionNumberTo:(long long)arg1;
- (void)writeBlob:(id)arg1 type:(long long)arg2;
- (void)writeGenre:(id)arg1 subGenres:(id)arg2 forBundleId:(id)arg3;
- (void)writeLaunches:(id)arg1 followingBundle:(id)arg2;

@end
