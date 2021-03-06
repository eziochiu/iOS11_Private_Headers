/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppMonitor.framework/NanoAppMonitor
 */

@interface NanoAppUsageSync : NSObject <NanoAppUsageMonitoring> {
    NSMutableArray * _lastReceivedUsages;
    NSMutableArray * _lastSyncdUsages;
    long long  _maximumApps;
    NanoAppSyncService * _nass;
    NPSManager * _nps;
    int  _springBoardLockStateNotifyToken;
    bool  _syncWithNPS;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadPreferencesOnInit;
- (bool)_usageHasChanged;
- (void)dealloc;
- (id)init;
- (void)nanoAppUsageMonitor:(id)arg1 recentlyUsedAppsChanged:(id)arg2;
- (void)start:(id /* block */)arg1;
- (void)sync;

@end
