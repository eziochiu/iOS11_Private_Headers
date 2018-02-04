/* made by EzioChiu.
 */

@protocol ADTVMediaControlsViewDelegate <NSObject>

@required

- (void)adtvMediaControlsViewActionButtonWasPressed:(ADTVMediaControlsView *)arg1;
- (void)adtvMediaControlsViewPrivacyButtonWasPressed:(ADTVMediaControlsView *)arg1;
- (void)adtvMediaControlsViewSkipButtonWasPressed:(ADTVMediaControlsView *)arg1;

@end
