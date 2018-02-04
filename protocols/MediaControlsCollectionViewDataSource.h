/* made by EzioChiu.
 */

@protocol MediaControlsCollectionViewDataSource <NSObject>

@required

- (UIViewController<MediaControlsCollectionItemViewController> *)createViewControllerForCollectionViewController:(MediaControlsCollectionViewController *)arg1;
- (long long)numberOfDestinationsInPicker:(MediaControlsCollectionViewController *)arg1;
- (MPCPlayerPath *)picker:(MediaControlsCollectionViewController *)arg1 playerPathForIndex:(long long)arg2;
- (UIViewController *)routesViewControllerForPicker:(MediaControlsCollectionViewController *)arg1;

@end
