/* made by EzioChiu.
 */

@protocol PKPaymentCameraCaptureViewControllerDelegate <NSObject>

@required

- (void)cameraCaptureViewController:(PKPaymentCameraCaptureViewController *)arg1 didRecognizeObjects:(NSArray *)arg2;
- (void)cameraCaptureViewControllerDidFail:(PKPaymentCameraCaptureViewController *)arg1;

@end
