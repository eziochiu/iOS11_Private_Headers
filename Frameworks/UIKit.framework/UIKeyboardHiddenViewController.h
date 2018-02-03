/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardHiddenViewController : UIViewController <UIInputViewControllerNeedSceneSize, UIPopoverPresentationControllerDelegate, UIViewControllerTransitioningDelegate, _SFAppAutoFillPasswordViewControllerDelegate> {
    _SFAppAutoFillPasswordViewController * _autofillVC;
    unsigned int  _deferredContextID;
    NSString * _deferredDisplayUUID;
    bool  _focusWasDeferredBeforeDeactivation;
    bool  _isFocusDeferred;
    UIView * _sourceView;
    bool  presentedAutofill;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView *sourceView;
@property (readonly) Class superclass;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillDeactivate:(id)arg1;
- (id)_clientDeferralProperties;
- (id)_deferredPropertiesForClientContext:(unsigned int)arg1;
- (id)_hostDeferralProperties;
- (void)_localAuthenticationUIDismissed;
- (void)_localAuthenticationUIPresented;
- (void)_sceneDidChange;
- (void)_setDeferred:(bool)arg1 forDisplayUUID:(id)arg2;
- (void)_willChangeToFirstResponder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)passwordViewControllerDidFinish:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentAutofillVCWithAnimation:(bool)arg1;
- (void)presentSelfWithAnimation:(bool)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setSourceView:(id)arg1;
- (bool)shouldPresentAsPopover;
- (id)sourceView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
