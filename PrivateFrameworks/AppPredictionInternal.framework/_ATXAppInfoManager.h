/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppInfoManager : NSObject {
    NSMutableDictionary * _appInfo;
    _ATXDataStore * _dataStore;
    NSMutableArray * _installDeltaLog;
    _ATXInternalInstallNotification * _installNotificationListener;
    NSString * _lastLaunch;
    NSDate * _lastLaunchDate;
    NSDate * _lastUnlockDate;
    long long  _launchCount;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
    long long  _spotlightLaunchCount;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addLaunchInfoForBundle:(id)arg1 date:(id)arg2 updateLaunchBlock:(id /* block */)arg3;
- (id)_getInfoOrCreateForBundleId:(id)arg1;
- (bool)_hasBeenLaunchedForBundleId:(id)arg1;
- (void)_setupInMemoryCacheWithAppInfoMapLocked:(id)arg1;
- (void)addExtensionLaunchForBundleId:(id)arg1 date:(id)arg2;
- (void)addInstallForBundleId:(id)arg1 date:(id)arg2;
- (void)addInstallForBundleInfoMap:(id)arg1;
- (void)addLaunchForBundleId:(id)arg1 date:(id)arg2;
- (void)addScreenLockAtDate:(id)arg1;
- (void)addSpotlightLaunchForBundleId:(id)arg1 date:(id)arg2;
- (id)allApps;
- (id)allAppsWithInstallDate;
- (id)appInfoForBundleId:(id)arg1;
- (void)clearAppInstallInfo;
- (void)clearAppLaunchInfo;
- (void)dealloc;
- (id)genreForBundleId:(id)arg1;
- (id)genresForBundleId:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)initWithInMemoryStore;
- (id)lastAppLaunch;
- (id)lastAppLaunchDate;
- (id)lastAppLaunchWithHistory:(id)arg1;
- (id)lastUnlockDate;
- (long long)launchedAppCount;
- (void)removeAppInfoForBundleId:(id)arg1;
- (void)removeAppInfoForBundleIds:(id)arg1;
- (void)removeAppLaunchesForBundleId:(id)arg1;
- (void)startInstallDeltaRecording;
- (id)stopInstallDeltaRecording;
- (id)subGenresForBundleId:(id)arg1;
- (void)updateGenresForBundleId:(id)arg1 genre:(id)arg2 subGenres:(id)arg3;

@end
