/* made by EzioChiu.
 */

@protocol PXPlacesMapControllerLoadingStateDelegate <NSObject>

@required

- (void)mapController:(PXPlacesMapController *)arg1 didFinishExecutingPipelines:(NSArray *)arg2;
- (void)mapController:(PXPlacesMapController *)arg1 didStartExecutingPipelines:(NSArray *)arg2;
- (void)mapViewDidFinishRendering:(PXPlacesMapController *)arg1;

@end
