/* made by EzioChiu.
 */

@protocol HUSoftwareUpdateUIPresentationDelegate <NSObject>

@required

- (NAFuture *)softwareUpdateUIManager:(HUSoftwareUpdateUIManager *)arg1 dismissViewController:(UIViewController *)arg2;
- (NAFuture *)softwareUpdateUIManager:(HUSoftwareUpdateUIManager *)arg1 presentViewController:(UIViewController *)arg2;

@end
