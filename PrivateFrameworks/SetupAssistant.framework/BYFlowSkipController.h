/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYFlowSkipController : NSObject {
    bool  _basicFunctionalityEnabled_doNotAccessDirectly;
    FLFollowUpController * _followUpController_doNotAccessDirectly;
    <NSObject> * _wfNetworkChangeObserver;
}

+ (id)_actionForFlowSkipIdentifiers:(id)arg1;
+ (id)_actionIdentifierForFlowSkipIdentifier:(id)arg1;
+ (id)_flowSkipIdentifierFromActionIdentifier:(id)arg1;
+ (id)_localizedStringListOfStrings:(id)arg1;
+ (id)_localizedStringListingFlowSkipIdentifiers:(id)arg1;
+ (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1;
+ (id)_supportedIdentifiers;
+ (id)flowSkipIdentifiersFromFollowUpAction:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_followUpController;
- (bool)_isBasicFunctionalityEnabled;
- (bool)_isPasscodeSet;
- (void)_observeWiFiNetworkChanges;
- (id)_pendingFollowUpItem;
- (void)_postFollowUpItemForFlowSkipIdentifiers:(id)arg1 previousFollowUpItem:(id)arg2 forceNotification:(bool)arg3;
- (void)_repostExistingFollowUpItemForcingNotification;
- (long long)_timeIntervalForFrequentNotifications;
- (long long)_timeIntervalForNotifications;
- (long long)_timeoutForWifiObserver;
- (void)cancelPendingFlows;
- (void)didCompleteFlow:(id)arg1;
- (void)didSkipFlow:(id)arg1;
- (id)getFlowSkipIdentifiers;
- (id)init;
- (void)observeFinishSetupTriggers;
- (void)passcodeDidChange;
- (void)registerActivities;
- (void)revisePendingFollowUps;
- (void)setBasicFunctionalityEnabled:(bool)arg1;

@end