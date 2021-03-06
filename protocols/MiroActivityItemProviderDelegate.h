/* made by EzioChiu.
 */

@protocol MiroActivityItemProviderDelegate <NSObject>

@required

- (void)cancel;
- (void)dismissProgressController;
- (void)exportFailed;
- (void)exportWillBegin;
- (void)presentProgressController:(UIViewController *)arg1;
- (UIViewController *)presenter;
- (void)setPresenter:(UIViewController *)arg1;

@end
