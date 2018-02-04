/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIRemoteAlertServiceViewController : UIViewController <SBUIRemoteAlertServiceInterface>

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (bool)_selectorIsOverriden:(SEL)arg1;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleButtonActions:(id)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)prepareForActivationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)setUserInfo:(id)arg1;

@end