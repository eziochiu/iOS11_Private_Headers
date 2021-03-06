/* made by EzioChiu.
 */

@protocol PUOneUpDragControllerDelegate <NSObject>

@required

- (UIView *)hitTestViewForOneUpDragController:(PUOneUpDragController *)arg1;
- (PUOverOneUpPresentationSession *)overOneUpPresentationSessionForDragController:(PUOneUpDragController *)arg1;
- (PUTileViewController *)tileViewForOneUpDragController:(PUOneUpDragController *)arg1;
- (PUTilingView *)tilingViewForOneUpDragController:(PUOneUpDragController *)arg1;

@end
