/* made by EzioChiu.
 */

@protocol HUQuickControlInteractionHost <NSObject>

@required

- (void)hideAuxiliaryViewForInteractionCoordinator:(HUQuickControlInteractionCoordinator *)arg1;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 showAuxiliaryView:(UIView<HUQuickControlAuxiliaryView> *)arg2;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 updateControlHorizontalCompressionFactor:(double)arg2;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 updateControlVerticalStretchFactor:(double)arg2;
- (void)interactionCoordinatorWantsDismissal:(HUQuickControlInteractionCoordinator *)arg1;

@end
