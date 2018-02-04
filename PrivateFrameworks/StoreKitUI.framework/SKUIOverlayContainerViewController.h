/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate> {
    UIControl * _backstopView;
    <SKUIOverlayContainerDelegate> * _delegate;
    bool  _isAdjustingViewsForDismiss;
    long long  _popViewControllerCount;
    long long  _selectedViewControllerIndex;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSMutableArray * _viewControllers;
}

@property (nonatomic, readonly) UIControl *backstopControl;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIOverlayContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *dimmingViewColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *viewControllers;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centeredFrameForViewController:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_fadeInViewController:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_frameAction:(id)arg1;
- (long long)_indexOfViewControllerForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_overlaySizeForController:(id)arg1 atBoundsSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_overlaySpacingForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_popViewControllers;
- (void)_positionViewControllersForSize:(struct CGSize { double x1; double x2; })arg1 traitCollection:(id)arg2;
- (void)_pushViewController:(id)arg1;
- (void)_removeChildren;
- (id)_selectedViewController;
- (void)_slideInViewController:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_tapAction:(id)arg1;
- (id)_viewControllerForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)backstopControl;
- (void)dealloc;
- (id)delegate;
- (id)dimmingViewColor;
- (void)dismissWithFadeTransitionCompletionBlock:(id /* block */)arg1;
- (void)dismissWithFlipTransition:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)popViewControllerAnimated:(bool)arg1;
- (void)popViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)replaceViewController:(id)arg1 withViewController:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)showViewController:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)showViewControllers:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewControllers;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end