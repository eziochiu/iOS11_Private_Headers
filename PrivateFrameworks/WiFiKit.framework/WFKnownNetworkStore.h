/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFKnownNetworkStore : NSObject {
    bool  _hasHS20Networks;
    NSSet * _knownNetworks;
    NSObject<OS_dispatch_queue> * _knownNetworksQueue;
    NSSet * _managedNetworkNames;
    bool  _monitoring;
    NSObject<OS_dispatch_queue> * _prefsQueue;
    struct __SCPreferences { } * _wifiPreferences;
}

@property (nonatomic, readonly) bool hasHS20Networks;
@property (nonatomic, retain) NSSet *knownNetworks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *knownNetworksQueue;
@property (nonatomic, retain) NSSet *managedNetworkNames;
@property bool monitoring;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *prefsQueue;
@property struct __SCPreferences { }*wifiPreferences;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clientServerRestarted:(id)arg1;
- (id)_init;
- (void)_startMonitoringKnownNetworks;
- (void)_stopMonitoringKnownNetworks;
- (void)_updateKnownNetworks;
- (void)dealloc;
- (id)getGeoTagsForNetworkProfile:(id)arg1;
- (id)getScoreForNetworkProfile:(id)arg1;
- (bool)hasHS20Networks;
- (id)init;
- (id)knownNetworks;
- (id)knownNetworksQueue;
- (id)managedNetworkNames;
- (bool)monitoring;
- (bool)networkMatchesManagedProfile:(id)arg1;
- (id)networkProfileForNetwork:(id)arg1;
- (id)networkProfileWithSSID:(id)arg1;
- (id)networkProfileWithSSID:(id)arg1 securityMode:(long long)arg2;
- (id)prefsQueue;
- (bool)removeNetworkProfile:(id)arg1 error:(id*)arg2;
- (bool)saveNetworkProfile:(id)arg1 forReason:(unsigned long long)arg2 error:(out id*)arg3;
- (bool)setAutoJoinEnabled:(bool)arg1 forProfile:(id)arg2 error:(out id*)arg3;
- (void)setKnownNetworks:(id)arg1;
- (void)setKnownNetworksQueue:(id)arg1;
- (void)setManagedNetworkNames:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setPrefsQueue:(id)arg1;
- (void)setWifiPreferences:(struct __SCPreferences { }*)arg1;
- (void)updateKnownNetworks;
- (struct __SCPreferences { }*)wifiPreferences;

@end
