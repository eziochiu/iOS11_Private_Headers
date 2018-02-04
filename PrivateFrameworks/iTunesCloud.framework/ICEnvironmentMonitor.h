/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICEnvironmentMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    bool  _isCharging;
    bool  _isRemoteServerLikelyReachable;
    bool  _isWiFiActive;
    long long  _lastKnownNetworkType;
    NWPathEvaluator * _networkPathEvaluator;
    long long  _networkType;
    NSHashTable * _observers;
    unsigned int  _powerNotificationRef;
    NSString * _telephonyOperatorName;
    NSString * _telephonyRegistrationStatus;
    struct __CTServerConnection { } * _telephonyServerConnectionRef;
    NSString * _telephonyStatusIndicator;
}

@property (getter=isCharging, nonatomic, readonly) bool charging;
@property (nonatomic, readonly) long long lastKnownNetworkType;
@property (nonatomic, readonly) long long networkType;
@property (getter=isRemoteServerLikelyReachable, nonatomic, readonly) bool remoteServerLikelyReachable;
@property (nonatomic, readonly, copy) NSString *telephonyOperatorName;
@property (nonatomic, readonly, copy) NSString *telephonyRegistrationStatus;
@property (nonatomic, readonly, copy) NSString *telephonyStatusIndicator;
@property (getter=isWiFiActive, nonatomic, readonly) bool wiFiActive;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (long long)_currentNetworkType;
- (void)_handleApplicationDidEnterForegroundNotification:(id)arg1;
- (void)_updateNetworkReachabilityAndNotifyObservers:(bool)arg1;
- (void)_updatePowerStateWithService:(unsigned int)arg1 shouldNotifyObservers:(bool)arg2;
- (void)_updateTelephonyPropertiesForCTServerNotification:(id)arg1 userInfo:(id)arg2;
- (void)_updateTelephonyState;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isCharging;
- (bool)isRemoteServerLikelyReachable;
- (bool)isWiFiActive;
- (long long)lastKnownNetworkType;
- (long long)networkType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1;
- (id)telephonyOperatorName;
- (id)telephonyRegistrationStatus;
- (id)telephonyStatusIndicator;

@end
