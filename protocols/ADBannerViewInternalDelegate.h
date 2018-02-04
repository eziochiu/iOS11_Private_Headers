/* made by EzioChiu.
 */

@protocol ADBannerViewInternalDelegate <ADBannerViewDelegate>

@optional

- (void)bannerViewShouldPauseMedia:(ADBannerView *)arg1;
- (void)bannerViewShouldResumeMedia:(ADBannerView *)arg1;
- (UIViewController *)viewControllerForStoryboardPresentationFromBannerView:(ADBannerView *)arg1;

@end
