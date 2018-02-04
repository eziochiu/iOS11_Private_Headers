/* made by EzioChiu.
 */

@protocol SBUIBiometricResource <NSObject>

@required

- (<BSInvalidatable> *)acquireFingerDetectionWantedAssertionForReason:(NSString *)arg1;
- (<BSInvalidatable> *)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(NSString *)arg2;
- (void)addObserver:(id <SBUIBiometricResourceObserver>)arg1;
- (unsigned long long)biometricLockoutState;
- (bool)hasBiometricAuthenticationCapabilityEnabled;
- (bool)hasEnrolledIdentities;
- (bool)hasPearlSupport;
- (bool)isFingerDetectEnabled;
- (bool)isFingerOn;
- (bool)isMatchingAllowed;
- (bool)isMatchingEnabled;
- (bool)isPearlDetectEnabled;
- (void)refreshMatchMode;
- (void)removeObserver:(id <SBUIBiometricResourceObserver>)arg1;
- (void)restartMatchingIfNeededForAssertion:(id <BSInvalidatable>)arg1;

@end