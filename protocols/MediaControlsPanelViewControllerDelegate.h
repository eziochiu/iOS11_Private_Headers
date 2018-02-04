/* made by EzioChiu.
 */

@protocol MediaControlsPanelViewControllerDelegate <NSObject>

@optional

- (void)didDismissMediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1;
- (void)mediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1 didReceiveInteractionEvent:(id)arg2;
- (void)mediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1 didToggleRoutingPicker:(bool)arg2;

@end
