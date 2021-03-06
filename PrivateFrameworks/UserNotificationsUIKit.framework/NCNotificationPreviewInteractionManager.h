/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationPreviewInteractionManager : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegatePrivate> {
    <NCNotificationPreviewInteractionManagerDelegate> * _delegate;
    bool  _didPresent;
    id /* block */  _dismissalCompletion;
    id /* block */  _presentationCompletion;
    NCNotificationViewController * _presentedLongLookViewController;
    UIPreviewInteraction * _previewInteraction;
    _UIPreviewInteractionViewControllerPresentation * _previewInteractionPresentation;
    NCNotificationViewController * _shortLookViewController;
    bool  _willPresent;
}

@property (getter=hasCommittedToPresentingLongLookViewController, nonatomic, readonly) bool committedToPresentingLongLookViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationPreviewInteractionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NCNotificationViewController *presentedLongLookViewController;
@property (readonly) Class superclass;
@property (getter=_willPresent, setter=_setWillPresent:, nonatomic) bool willPresent;

- (void).cxx_destruct;
- (void)_notificationPreviewInteractionViewControllerTransitionDidDismiss:(bool)arg1;
- (void)_notificationPreviewInteractionViewControllerTransitionDidPresent:(bool)arg1;
- (id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (void)_setWillPresent:(bool)arg1;
- (bool)_willPresent;
- (void)completeTransitionImmediately;
- (id)delegate;
- (bool)dismissIfPossible:(id /* block */)arg1;
- (bool)hasCommittedToPresentingLongLookViewController;
- (id)initWithShortLookViewController:(id)arg1;
- (bool)presentIfPossible:(id /* block */)arg1;
- (id)presentedLongLookViewController;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (void)resetForInitialInteraction;
- (void)setDelegate:(id)arg1;

@end
