/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQUpgradeFlowManager : NSObject <ICQPageDelegate, UINavigationControllerDelegate> {
    NSDictionary * _bindings;
    ICQUpgradeOfferViewController * _busyOfferViewController;
    bool  _completedFamilySetup;
    <ICQUpgradeFlowManagerDelegate> * _delegate;
    UINavigationController * _hostingNavigationController;
    ICQOffer * _offer;
    bool  _shouldNavigationControllerBeDismissed;
    ICQAlertController * _upgradeAlertController;
}

@property (nonatomic, retain) NSDictionary *bindings;
@property (nonatomic) bool completedFamilySetup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQUpgradeFlowManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *hostingNavigationController;
@property (nonatomic, readonly) ICQOffer *offer;
@property (nonatomic) bool shouldNavigationControllerBeDismissed;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICQAlertController *upgradeAlertController;

+ (id)activeFlowManagers;
+ (void)addActiveFlowManager:(id)arg1;
+ (void)needsToRunWithCompletion:(id /* block */)arg1;
+ (void)removeActiveFlowManager:(id)arg1;
+ (bool)shouldShowForOffer:(id)arg1;
+ (bool)shouldSubclassShowForOffer:(id)arg1;
+ (Class)subclassForOfferType:(long long)arg1;

- (void).cxx_destruct;
- (void)_addAlertActionForAlertSpec:(id)arg1 buttonIndex:(long long)arg2;
- (void)_cancelFlow;
- (void)_clearBusyOfferViewController;
- (void)_initiateFamilySetupFlow;
- (void)_openURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_performPageButtonActionWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentPageWithSpecification:(id)arg1;
- (void)_presentUpgradeComplete;
- (void)_sendDelegateCancel;
- (void)_sendDelegateComplete;
- (void)_sendDelegateDidPresentViewController:(id)arg1;
- (void)_setBusyOfferViewController:(id)arg1;
- (void)_simulateDoneButton;
- (void)_tappedAlertLink:(id)arg1;
- (void)beginFlowWithPresentingViewController:(id)arg1;
- (id)bindings;
- (bool)completedFamilySetup;
- (id)delegate;
- (id)hostingNavigationController;
- (id)init;
- (id)initBaseclassWithOffer:(id)arg1;
- (id)initSubclassWithOffer:(id)arg1;
- (id)initWithOffer:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (bool)needsNetwork;
- (id)offer;
- (void)presentFlowHostedInNavigationController:(id)arg1;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (double)senderGetTopMargin:(id)arg1;
- (void)setBindings:(id)arg1;
- (void)setCompletedFamilySetup:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostingNavigationController:(id)arg1;
- (void)setShouldNavigationControllerBeDismissed:(bool)arg1;
- (void)setUpgradeAlertController:(id)arg1;
- (bool)shouldNavigationControllerBeDismissed;
- (id)upgradeAlertController;

@end