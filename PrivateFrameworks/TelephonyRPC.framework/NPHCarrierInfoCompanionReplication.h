/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@interface NPHCarrierInfoCompanionReplication : NSObject {
    NPSDomainAccessor * _mobilePhoneDomainAccessor;
    NPSManager * _npsManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)NPHVMServiceSubscriptionStatusChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)updateIsVisualVoicemailServiceSubscribed;
- (void)updateShouldHideVoicemailUI;

@end
