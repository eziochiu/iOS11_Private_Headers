/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYCapabilities : NSObject

+ (id)sharedCapabilities;

- (id)_paymentScreenRequirements;
- (bool)_paymentScreenRequirementsIncludePasscode:(id)arg1;
- (bool)_paymentScreenRequirementsIncludeiCloud:(id)arg1;
- (bool)canShowAppleIDScreen;
- (bool)canShowFaceIDScreen;
- (bool)canShowPasscodeScreen;
- (bool)canShowPaymentScreen;
- (bool)canShowSiriScreen;
- (bool)canShowTouchIDScreen;
- (bool)isPearlEnrolled;
- (bool)mgHasMesa;
- (bool)mgHasSecureElement;
- (bool)mgHasSiriCapability;
- (bool)supportsPearl;

@end
