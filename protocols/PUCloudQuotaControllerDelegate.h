/* made by EzioChiu.
 */

@protocol PUCloudQuotaControllerDelegate <NSObject>

@required

- (void)cloudQuotaController:(PUCloudQuotaController *)arg1 presentInformationBanner:(UIView *)arg2;
- (UIViewController *)presentingViewControllerForCloudQuotaController:(PUCloudQuotaController *)arg1;

@end
