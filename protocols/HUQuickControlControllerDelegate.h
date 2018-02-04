/* made by EzioChiu.
 */

@protocol HUQuickControlControllerDelegate <NSObject>

@required

- (void)quickControlController:(HUQuickControlController *)arg1 didUpdateOverrideStatusWithPrimaryText:(NSString *)arg2 secondaryText:(NSString *)arg3;
- (void)quickControlController:(HUQuickControlController *)arg1 valueDidChange:(id)arg2;
- (void)quickControlControllerDidEndPossibleWrites:(HUQuickControlController *)arg1;
- (void)quickControlControllerWillBeginPossibleWrites:(HUQuickControlController *)arg1;

@end
