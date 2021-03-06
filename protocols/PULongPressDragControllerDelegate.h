/* made by EzioChiu.
 */

@protocol PULongPressDragControllerDelegate <NSObject>

@optional

- (bool)longPressDragController:(PULongPressDragController *)arg1 canLongPressBeginAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (<UIGestureRecognizerDelegate> *)longPressDragController:(PULongPressDragController *)arg1 delegateForGestureRecognizer:(UIGestureRecognizer *)arg2;
- (PUTilingView *)longPressDragControllerTilingView:(PULongPressDragController *)arg1;
- (UIView *)longPressDragControllerViewHostingGestureRecognizers:(PULongPressDragController *)arg1;
- (PUOneUpDragController *)oneUpDragControllerForLongPressDragController:(PULongPressDragController *)arg1;

@end
