/* made by EzioChiu.
 */

@protocol ADTVMediaControlsViewControllerDelegate <NSObject>

@required

- (void)adtvMediaControlsActionButtonWasPressed:(ADTVMediaControlsViewController *)arg1;
- (void)adtvMediaControlsPrivacyButtonWasPressed:(ADTVMediaControlsViewController *)arg1;
- (void)adtvMediaControlsSkipButtonWasPressed:(ADTVMediaControlsViewController *)arg1;

@end
