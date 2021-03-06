/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitMockSyncState : NSObject {
    unsigned long long  _IMCKSyncControllerSyncState;
    unsigned long long  _IMCKSyncControllerSyncType;
    bool  _IMCloudKitIsEligibleForTruthZone;
    bool  _IMCloudKitIsInExitState;
    bool  _IMCloudKitIsRampedIntoTruthZone;
    bool  _IMCloudKitIsRemovedFromBackup;
    bool  _IMCloudKitIsSyncing;
    bool  _IMCloudKitStartingDisableDevices;
    long long  _IMCloudKitStartingEnabledSettingChange;
    bool  _IMCloudKitStartingInitialSync;
    bool  _IMCloudKitStartingPeriodicSync;
    NSDate * _IMCloudKitSyncDate;
    bool  _IMCloudKitSyncingEnabled;
}

@property unsigned long long IMCKSyncControllerSyncState;
@property unsigned long long IMCKSyncControllerSyncType;
@property bool IMCloudKitIsEligibleForTruthZone;
@property bool IMCloudKitIsInExitState;
@property bool IMCloudKitIsRampedIntoTruthZone;
@property bool IMCloudKitIsRemovedFromBackup;
@property bool IMCloudKitIsSyncing;
@property bool IMCloudKitStartingDisableDevices;
@property long long IMCloudKitStartingEnabledSettingChange;
@property bool IMCloudKitStartingInitialSync;
@property bool IMCloudKitStartingPeriodicSync;
@property (retain) NSDate *IMCloudKitSyncDate;
@property bool IMCloudKitSyncingEnabled;

- (void).cxx_destruct;
- (unsigned long long)IMCKSyncControllerSyncState;
- (unsigned long long)IMCKSyncControllerSyncType;
- (bool)IMCloudKitIsEligibleForTruthZone;
- (bool)IMCloudKitIsInExitState;
- (bool)IMCloudKitIsRampedIntoTruthZone;
- (bool)IMCloudKitIsRemovedFromBackup;
- (bool)IMCloudKitIsSyncing;
- (bool)IMCloudKitStartingDisableDevices;
- (long long)IMCloudKitStartingEnabledSettingChange;
- (bool)IMCloudKitStartingInitialSync;
- (bool)IMCloudKitStartingPeriodicSync;
- (id)IMCloudKitSyncDate;
- (bool)IMCloudKitSyncingEnabled;
- (id)convertToDictionary;
- (void)setIMCKSyncControllerSyncState:(unsigned long long)arg1;
- (void)setIMCKSyncControllerSyncType:(unsigned long long)arg1;
- (void)setIMCloudKitIsEligibleForTruthZone:(bool)arg1;
- (void)setIMCloudKitIsInExitState:(bool)arg1;
- (void)setIMCloudKitIsRampedIntoTruthZone:(bool)arg1;
- (void)setIMCloudKitIsRemovedFromBackup:(bool)arg1;
- (void)setIMCloudKitIsSyncing:(bool)arg1;
- (void)setIMCloudKitStartingDisableDevices:(bool)arg1;
- (void)setIMCloudKitStartingEnabledSettingChange:(long long)arg1;
- (void)setIMCloudKitStartingInitialSync:(bool)arg1;
- (void)setIMCloudKitStartingPeriodicSync:(bool)arg1;
- (void)setIMCloudKitSyncDate:(id)arg1;
- (void)setIMCloudKitSyncingEnabled:(bool)arg1;

@end
