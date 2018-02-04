/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXActionHandler : NSObject {
    SXAction * _action;
    UIAlertController * _alertController;
    UIAlertAction * _cancelAction;
    <SXActionHandlerDelegate> * _delegate;
    SXHost * _host;
    UIViewController * _presentingViewController;
}

@property (nonatomic, readonly) SXAction *action;
@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic, readonly) UIAlertAction *cancelAction;
@property (nonatomic) <SXActionHandlerDelegate> *delegate;
@property (nonatomic) SXHost *host;
@property (nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)action;
- (id)alertActions;
- (id)alertController;
- (long long)alertControllerStyle;
- (id)cancelAction;
- (id)delegate;
- (void)executedAlertAction:(id)arg1;
- (void)handleActionOnViewController:(id)arg1;
- (id)host;
- (id)initWithHost:(id)arg1 action:(id)arg2;
- (id)message;
- (id)presentingViewController;
- (void)setAlertController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (id)setupAlertController;
- (id)title;

@end
