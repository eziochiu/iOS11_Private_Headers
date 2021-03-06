/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeBiometricResource : NSObject <SBUIBiometricResource> {
    SBUIBiometricResource * _biometricResource;
    <SBUIPasscodeBiometricMatchingAssertionFactory> * _overrideMatchingAssertionFactory;
}

@property (nonatomic, readonly) unsigned long long biometricLockoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFingerDetectEnabled, nonatomic, readonly) bool fingerDetectEnabled;
@property (getter=isFingerOn, nonatomic, readonly) bool fingerOn;
@property (nonatomic, readonly) bool hasBiometricAuthenticationCapabilityEnabled;
@property (nonatomic, readonly) bool hasEnrolledIdentities;
@property (nonatomic, readonly) bool hasPearlSupport;
@property (readonly) unsigned long long hash;
@property (getter=isMatchingAllowed, nonatomic, readonly) bool matchingAllowed;
@property (getter=isMatchingEnabled, nonatomic, readonly) bool matchingEnabled;
@property (getter=isPearlDetectEnabled, nonatomic, readonly) bool pearlDetectEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
- (void)addObserver:(id)arg1;
- (unsigned long long)biometricLockoutState;
- (bool)hasBiometricAuthenticationCapabilityEnabled;
- (bool)hasEnrolledIdentities;
- (bool)hasPearlSupport;
- (id)initWithBiometricResource:(id)arg1 overrideMatchingAssertionFactory:(id)arg2;
- (bool)isFingerDetectEnabled;
- (bool)isFingerOn;
- (bool)isMatchingAllowed;
- (bool)isMatchingEnabled;
- (bool)isPearlDetectEnabled;
- (void)refreshMatchMode;
- (void)removeObserver:(id)arg1;
- (void)restartMatchingIfNeededForAssertion:(id)arg1;

@end
