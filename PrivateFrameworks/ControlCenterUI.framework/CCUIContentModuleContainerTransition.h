/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIContentModuleContainerTransition : NSObject <_UIPreviewInteractionViewControllerTransition> {
    bool  _appearanceTransition;
    CCUIContentModuleContainerViewController * _viewController;
}

@property (getter=isAppearanceTransition, nonatomic) bool appearanceTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) CCUIContentModuleContainerViewController *viewController;

- (void).cxx_destruct;
- (bool)isAppearanceTransition;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)setAppearanceTransition:(bool)arg1;
- (void)setViewController:(id)arg1;
- (void)transitionDidEnd:(bool)arg1;
- (id)viewController;

@end
