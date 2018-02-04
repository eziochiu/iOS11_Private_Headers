/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAuthenticationOperation : TROperation {
    UIViewController * _presentingViewController;
    bool  _shouldIgnoreAuthFailures;
    NSSet * _targetedServices;
}

@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic) bool shouldIgnoreAuthFailures;
@property (nonatomic, retain) NSSet *targetedServices;

- (void).cxx_destruct;
- (void)execute;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (void)setShouldIgnoreAuthFailures:(bool)arg1;
- (void)setTargetedServices:(id)arg1;
- (bool)shouldIgnoreAuthFailures;
- (id)targetedServices;

@end
