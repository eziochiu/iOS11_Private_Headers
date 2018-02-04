/* made by EzioChiu.
 */

@protocol MediaControlsCollectionItemViewController <NSObject>

@required

- (UIView *)backgroundView;
- (MPCPlayerPath *)playerPath;
- (MPAVRoutingViewController *)routingViewController;
- (void)setBackgroundView:(UIView *)arg1;
- (void)setPlayerPath:(MPCPlayerPath *)arg1;
- (void)setRoutingViewController:(MPAVRoutingViewController *)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withCoordinator:(MediaControlsStyleCoordinator *)arg2;

@end
