/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFChargingCenterClient : NSObject {
    bool  _activateCalled;
    SBUISound * _chimeSound;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    CUPowerSource * _mePowerSource;
    CUPowerSourceMonitor * _monitor;
    NSMutableDictionary * _powerSourcesInUI;
    id /* block */  _requestHandler;
    id /* block */  _visualInformationRequestHandler;
}

@property (nonatomic, readonly) double chargeLevel;
@property (getter=isCharging, nonatomic, readonly) bool charging;
@property (nonatomic, retain) SBUISound *chimeSound;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) CUPowerSource *mePowerSource;
@property (nonatomic, retain) CUPowerSourceMonitor *monitor;
@property (nonatomic, readonly) long long numberOfDevicesCharging;
@property (nonatomic, retain) NSMutableDictionary *powerSourcesInUI;
@property (nonatomic, copy) id /* block */ requestHandler;
@property (nonatomic, copy) id /* block */ visualInformationRequestHandler;

+ (id)keyPathsForValuesAffectingChargeLevel;
+ (id)keyPathsForValuesAffectingCharging;
+ (id)keyPathsForValuesAffectingNumberOfDevicesCharging;

- (void).cxx_destruct;
- (void)activate;
- (void)addNewChargingPowerSource:(id)arg1;
- (double)chargeLevel;
- (id)chimeSound;
- (void)contextsForRemoteAlertActivationWithReason:(id)arg1 completion:(id /* block */)arg2;
- (id)dataRepresentationForInformationProvider:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (void)evaluatePowerSource:(id)arg1 found:(bool)arg2 lost:(bool)arg3;
- (id)init;
- (void)invalidate;
- (bool)isCharging;
- (id)mePowerSource;
- (id)monitor;
- (long long)numberOfDevicesCharging;
- (void)onqueue_activate;
- (void)onqueue_invalidate;
- (void)playChime;
- (id)powerSourcesInUI;
- (void)presentationRequestContextsForReason:(id)arg1 withHandler:(id /* block */)arg2;
- (void)removeNoLongerChargingPowerSource:(id)arg1 withChargingDate:(id)arg2;
- (id /* block */)requestHandler;
- (void)sendPresentationRequestForPowerSource:(id)arg1 added:(bool)arg2 removed:(bool)arg3;
- (void)setChimeSound:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setMePowerSource:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)setPowerSourcesInUI:(id)arg1;
- (void)setRequestHandler:(id /* block */)arg1;
- (void)setUpMonitor;
- (void)setVisualInformationRequestHandler:(id /* block */)arg1;
- (void)updateConfigurationContext:(id)arg1 withInformationProvider:(id)arg2;
- (void)updateConfigurationContext:(id)arg1 withKeyPowerSource:(id)arg2;
- (void)updateConfigurationContextWithAnyPowerSourceAsKey:(id)arg1;
- (void)updateConfigurationContextWithPowerSourcesData:(id)arg1;
- (id /* block */)visualInformationRequestHandler;

@end
