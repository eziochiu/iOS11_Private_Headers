/* made by EzioChiu.
 */

@protocol NCNotificationPreviewInteractionManagerDelegate <NSObject>

@required

- (UIView *)containerViewForPreviewInteractionManager:(NCNotificationPreviewInteractionManager *)arg1;
- (NCNotificationViewController *)longLookViewControllerForPreviewInteractionManager:(NCNotificationPreviewInteractionManager *)arg1;

@optional

- (void)previewInteractionManager:(void *)arg1 shouldFinishInteractionWithCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: NCNotificationPreviewInteractionManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)previewInteractionManagerDidEndUserInteraction:(NCNotificationPreviewInteractionManager *)arg1;
- (bool)previewInteractionManagerShouldBeginInteraction:(NCNotificationPreviewInteractionManager *)arg1;
- (void)previewInteractionManagerWillBeginUserInteraction:(NCNotificationPreviewInteractionManager *)arg1;

@end
