/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriSetupViewController : UIViewController <SBUIPluginViewControllerInterface, VTUITurnOnSiriViewDelegate> {
    _UIBackdropView * _backdropView;
    bool  _backdropViewVisible;
    UIView * _contentView;
    <AFUISiriSetupViewControllerDelegate> * _delegate;
    bool  _lastTimeShown;
    VTUITurnOnSiriView * _setupView;
    UIStatusBar * _statusBar;
    bool  _visible;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISiriSetupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SBUIPluginFluidDismissalState> *fluidDismissalState;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastTimeShown;
@property (nonatomic, readonly) bool shouldTurnOnScreenOnAppearance;
@property (getter=_statusBar, setter=_setStatusBar:, nonatomic, retain) UIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_addStatusBar;
- (void)_continueTapped:(id)arg1;
- (void)_laterTapped:(id)arg1;
- (void)_removeStatusBar;
- (void)_setBackdropVisible:(bool)arg1;
- (void)_setStatusBar:(id)arg1;
- (id)_statusBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusBarFrame;
- (void)aboutSelectedInTurnOnSiriView:(id)arg1;
- (void)animateAppearanceFromContext:(id)arg1;
- (void)animateDisappearanceFromContext:(id)arg1;
- (id)delegate;
- (id)dimBackdropSettings;
- (id)init;
- (bool)isVisible;
- (bool)lastTimeShown;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setLastTimeShown:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
