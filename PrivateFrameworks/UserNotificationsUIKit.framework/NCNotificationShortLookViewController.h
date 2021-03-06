/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCBannerPresentationTransitioningDelegateObserver, NCLongLookPresentationControllerDelegate, NCNotificationPreviewInteractionManagerDelegate, NCNotificationViewControllerObserving> {
    UIView * _audioAccessoryView;
    NSHashTable * _audioAccessoryViewObservers;
    NCBannerPresentationTransitionDelegate * _bannerPresentationTransitionDelegate;
    UIView * _contextDefiningContainerView;
    UIViewController * _contextDefiningViewController;
    bool  _didScrollPresentLongLookViewController;
    NCNotificationViewController * _longLookNotificationViewController;
    NCNotificationPreviewInteractionManager * _previewInteractionManager;
    NSDate * _tapBeginTime;
    UITapGestureRecognizer * _tapGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_didScrollPresentLongLookViewController, setter=_setDidScrollPresentLongLookViewController:, nonatomic) bool didScrollPresentLongLookViewController;
@property (readonly) unsigned long long hash;
@property (getter=_presentedLongLookViewController, nonatomic, readonly) NCNotificationViewController *presentedLongLookViewController;
@property (getter=_previewInteractionManager, nonatomic, retain) NCNotificationPreviewInteractionManager *previewInteractionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureScrollViewIfNecessary;
- (id)_customContentProvidingViewControllerCreateIfNecessary;
- (bool)_didScrollPresentLongLookViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTransitionViewInScrollView;
- (void)_handleTapOnView:(id)arg1;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(bool)arg2;
- (bool)_isPresentingCustomContentProvidingViewController;
- (void)_loadExtensionIfNecessary;
- (void)_loadLookView;
- (void)_loadPresentationContainerViewIfNecessary;
- (id)_longLookNotificationViewController;
- (id)_newPreviewInteractionManager;
- (id)_notificationShortLookViewIfLoaded;
- (void)_notificationViewControllerViewDidLoad;
- (void)_presentLongLookAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_presentLongLookForScrollAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_presentLongLookViaPreviewInteraction:(id /* block */)arg1;
- (id)_presentedLongLookViewController;
- (id)_previewInteractionManager;
- (Class)_scrollViewClass;
- (void)_setAudioAccessoryView:(id)arg1;
- (bool)_setDelegate:(id)arg1;
- (void)_setDidScrollPresentLongLookViewController:(bool)arg1;
- (bool)_setNotificationRequest:(id)arg1;
- (bool)_shouldPadScrollViewContentSizeHeight;
- (bool)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_updateScrollViewContentSize;
- (void)_updateWithProvidedStaticContent;
- (void)addAudioAccessoryViewObserver:(id)arg1;
- (id)containerViewForPreviewInteractionManager:(id)arg1;
- (void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2;
- (void)customContentDidLoadExtension:(id)arg1;
- (bool)didReceiveNotificationRequest:(id)arg1;
- (bool)dismissPresentedViewControllerAndClearNotification:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)expandAndPlayAudioMessage;
- (bool)hasCommittedToPresentingCustomContentProvidingViewController;
- (id)hideHomeAffordanceAnimationSettingsForLongLookPresentationController:(id)arg1;
- (bool)isContentExtensionVisible:(id)arg1;
- (bool)isShortLook;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })longLookPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (id)longLookViewControllerForPreviewInteractionManager:(id)arg1;
- (void)notificationViewControllerDidDismiss:(id)arg1;
- (void)notificationViewControllerDidPresent:(id)arg1;
- (void)notificationViewControllerWillDismiss:(id)arg1;
- (void)notificationViewControllerWillPresent:(id)arg1;
- (void)presentLongLookAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)previewInteractionManager:(id)arg1 shouldFinishInteractionWithCompletionBlock:(id /* block */)arg2;
- (void)previewInteractionManagerDidEndUserInteraction:(id)arg1;
- (bool)previewInteractionManagerShouldBeginInteraction:(id)arg1;
- (void)previewInteractionManagerWillBeginUserInteraction:(id)arg1;
- (void)removeAudioAccesoryViewObserver:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1;
- (void)setCustomContentHomeAffordanceVisible:(bool)arg1;
- (void)setInteractionEnabled:(bool)arg1;
- (void)setPreviewInteractionManager:(id)arg1;
- (bool)shouldRestorePresentingShortLookOnDismiss;
- (id)unhideHomeAffordanceAnimationSettingsForLongLookPresentationController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (bool)wantsUseableContainerHeightForTransitionWithDelegate:(id)arg1;

@end
