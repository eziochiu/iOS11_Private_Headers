/* made by EzioChiu.
 */

@protocol _UIPopoverControllerMapsTransitionDelegate <NSObject>

@optional

- (void)_popoverControllerDidFinishMapsTransitionExpanding:(UIPopoverController *)arg1;
- (void)_popoverControllerDidFinishMapsTransitionMovingSideways:(UIPopoverController *)arg1;
- (void)_popoverControllerWillBeginMapsTransitionExpanding:(UIPopoverController *)arg1;
- (void)_popoverControllerWillBeginMapsTransitionMovingSideways:(UIPopoverController *)arg1;

@end
