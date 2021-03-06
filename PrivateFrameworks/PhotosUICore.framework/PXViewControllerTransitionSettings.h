/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXViewControllerTransitionSettings : PXSettings {
    PXViewControllerPinchTransitionSettings * _pinchTransitionSettings;
    PXViewControllerSwipeDownTransitionSettings * _swipeDownTransitionSettings;
    PXViewControllerZoomTransitionSettings * _zoomTransitionSettings;
}

@property (nonatomic, retain) PXViewControllerPinchTransitionSettings *pinchTransitionSettings;
@property (nonatomic, retain) PXViewControllerSwipeDownTransitionSettings *swipeDownTransitionSettings;
@property (nonatomic, retain) PXViewControllerZoomTransitionSettings *zoomTransitionSettings;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)parentSettings;
- (id)pinchTransitionSettings;
- (void)setDefaultValues;
- (void)setPinchTransitionSettings:(id)arg1;
- (void)setSwipeDownTransitionSettings:(id)arg1;
- (void)setZoomTransitionSettings:(id)arg1;
- (id)swipeDownTransitionSettings;
- (id)zoomTransitionSettings;

@end
