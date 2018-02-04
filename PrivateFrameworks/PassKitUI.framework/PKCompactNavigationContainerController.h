/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCompactNavigationContainerController : UIViewController <PKContentContainerObserver, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _childViewControllerPreferredContentSize;
    UINavigationController<PKObservableContentContainer> * _containedNavigationController;
    <PKCompactNavigationContainerControllerDelegate> * _delegate;
    <UICoordinateSpace> * _exclusionCoordinateSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _exclusionRect;
    bool  _isRoot;
    double  _minimumNavigationControllerHeight;
    UIViewController * _presentationContextVC;
    bool  _presentingNavigationController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _statusBarFrame;
    UITapGestureRecognizer * _tapGestureRecognizer;
    bool  _transitioning;
}

@property (nonatomic, readonly) UINavigationController<PKObservableContentContainer> *containedNavigationController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKCompactNavigationContainerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <UICoordinateSpace> *exclusionCoordinateSpace;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } exclusionRect;
@property (readonly) unsigned long long hash;
@property (getter=isPresentingNavigationController, nonatomic) bool presentingNavigationController;
@property (readonly) Class superclass;

+ (id)dimmingColor;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (struct CGSize { double x1; double x2; })childViewControllerPreferredContentSizeForSize:(struct CGSize { double x1; double x2; })arg1 isRoot:(bool)arg2;
- (struct CGSize { double x1; double x2; })childViewControllerSizeForNavigationControllerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)containedNavigationController;
- (void)contentContainer:(id)arg1 preferredContentSizeDidChangeForChildContentContainer:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)exclusionCoordinateSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })exclusionRect;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithNavigationController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isPresentingNavigationController;
- (void)loadView;
- (struct CGSize { double x1; double x2; })modalPresentationSize;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (struct CGSize { double x1; double x2; })navigationControllerSizeForChildViewControllerPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 isRoot:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setExclusionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCoordinateSpace:(id)arg2;
- (void)setPresentingNavigationController:(bool)arg1;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)updateChildViewControllerSizeWithTopViewController:(id)arg1 animated:(bool)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
