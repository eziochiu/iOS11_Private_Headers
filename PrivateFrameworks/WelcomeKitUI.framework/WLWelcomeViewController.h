/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

@interface WLWelcomeViewController : UIViewController <WLSourceDevicesDelegate> {
    WLMigrationCompletedViewController * _completedViewController;
    id /* block */  _completionHandler;
    bool  _dismissAfterTimeout;
    WLIntroViewController * _introViewController;
    WLWelcomeViewControllerMetrics * _metrics;
    WLPairingViewController * _pairingViewController;
    WLMigrationProgressViewController * _progressViewController;
    WLSourceDevicesController * _sourceDevicesController;
}

@property (nonatomic, copy) id /* block */ completionHandler;

+ (void)allowedToDisplay:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_addGroupViewController:(id)arg1;
- (void)_animateFromGroupViewController:(id)arg1 toGroupViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)_authenticationPeriodDidEnd;
- (void)_completeWithSuccess:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForGroupView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIncomingGroupViewBeforeAnimation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForOutgoingGroupViewAfterAnimation;
- (void)_loadIntroGroupView;
- (void)_migrationDidBegin;
- (void)_progressViewControllerDidFinishWithSuccess:(bool)arg1;
- (void)_removeGroupViewController:(id)arg1;
- (void)_startConnectivity;
- (void)_transitionToCompletedViewController;
- (void)_transitionToPairingCodeViewControllerWithPairingCode:(id)arg1 wifiPSK:(id)arg2 ssid:(id)arg3;
- (void)_transitionToProgressViewControllerWithSourceDevice:(id)arg1;
- (void)_uiTestModeStartFakePairing;
- (id /* block */)completionHandler;
- (id)init;
- (void)loadView;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)sourceDeviceController:(id)arg1 didDiscoverDevice:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)wifiAndDeviceDiscoveryDidGetInterrupted;

@end