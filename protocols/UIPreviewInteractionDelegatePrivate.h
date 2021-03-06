/* made by EzioChiu.
 */

@protocol UIPreviewInteractionDelegatePrivate <UIPreviewInteractionDelegate>

@optional

- (<_UIPreviewInteractionViewControllerTransition> *)_previewInteraction:(UIPreviewInteraction *)arg1 appearanceTransitionForViewController:(UIViewController *)arg2;
- (<_UIPreviewInteractionViewControllerTransition> *)_previewInteraction:(UIPreviewInteraction *)arg1 disappearanceTransitionForViewController:(UIViewController *)arg2;
- (_UIPreviewInteractionViewControllerPresentation *)_previewInteraction:(UIPreviewInteraction *)arg1 viewControllerPresentationForPresentingViewController:(UIViewController *)arg2;
- (_UIPreviewInteractionHighlighter *)_previewInteractionHighlighterForPreviewTransition:(UIPreviewInteraction *)arg1;
- (bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(UIPreviewInteraction *)arg1;
- (bool)_previewInteractionShouldFinishTransitionToPreview:(UIPreviewInteraction *)arg1;
- (UIViewController *)_previewInteractionViewControllerForPreview:(UIPreviewInteraction *)arg1;
- (UIView *)_previewInteractionViewForHighlight:(UIPreviewInteraction *)arg1;

@end
