/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISelectionGrabber : UIView {
    int  _applicationDeactivationReason;
    bool  m_activeFlattened;
    bool  m_alertFlattened;
    bool  m_animating;
    UISelectionGrabberDot * m_dotView;
    bool  m_isDotted;
    bool  m_navigationTransitionFlattened;
    long long  m_orientation;
}

@property (nonatomic) bool activeFlattened;
@property (nonatomic) bool alertFlattened;
@property (nonatomic) bool animating;
@property (nonatomic, readonly) UITextRangeView *hostView;
@property (nonatomic) bool isDotted;
@property (nonatomic) bool navigationTransitionFlattened;
@property (nonatomic) long long orientation;

+ (id)_grabberDot;

- (void).cxx_destruct;
- (id)_dotView;
- (bool)activeFlattened;
- (bool)alertFlattened;
- (void)animateGrabberInWithCompletion:(id /* block */)arg1;
- (void)animateGrabberOutWithCompletion:(id /* block */)arg1;
- (bool)animating;
- (bool)autoscrolled;
- (void)canExpandAfterAlert:(id)arg1;
- (void)canExpandAfterBecomeActive:(id)arg1;
- (void)canExpandAfterNavigationTransition:(id)arg1;
- (bool)clipDot:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (bool)dotIsVisibleInDocument:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hostView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)inputViewIsChanging;
- (bool)isDotted;
- (bool)isPointedDown;
- (bool)isPointedLeft;
- (bool)isPointedRight;
- (bool)isPointedUp;
- (bool)isRotating;
- (bool)isScaling;
- (bool)isScrolling;
- (bool)isVertical;
- (void)mustFlattenForAlert:(id)arg1;
- (void)mustFlattenForNavigationTransition:(id)arg1;
- (void)mustFlattenForResignActive:(id)arg1;
- (bool)navigationTransitionFlattened;
- (long long)orientation;
- (void)removeFromSuperview;
- (void)saveDeactivationReason:(id)arg1;
- (bool)scroller:(id)arg1 fullyContainSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setActiveFlattened:(bool)arg1;
- (void)setAlertFlattened:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsDotted:(bool)arg1;
- (void)setNavigationTransitionFlattened:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)transitionDot:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateDot;

@end