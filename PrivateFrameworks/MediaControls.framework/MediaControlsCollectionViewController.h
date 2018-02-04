/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsCollectionViewController : UIViewController <MediaControlsPanelViewControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    NSMutableDictionary * _activeBackgroundViews;
    NSMutableDictionary * _activeViewControllers;
    <MediaControlsCollectionViewDataSource> * _dataSource;
    id /* block */  _dismissalBlock;
    bool  _displayMultipleDestinations;
    long long  _expandedDestinationIndex;
    NSMutableSet * _inactiveBackgroundViews;
    NSMutableSet * _inactiveViewControllers;
    long long  _routeViewControllerIndex;
    UIViewController * _routingViewController;
    UIScrollView * _scrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _scrollViewInsets;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic) <MediaControlsCollectionViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalBlock;
@property (nonatomic) bool displayMultipleDestinations;
@property (nonatomic) long long expandedDestinationIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long routeViewControllerIndex;
@property (nonatomic, retain) UIViewController *routingViewController;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } scrollViewInsets;
@property (nonatomic, readonly) UIViewController<MediaControlsCollectionItemViewController> *selectedViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) NSArray *visibleBottomViewControllers;
@property (nonatomic, readonly) NSArray *visibleTopViewControllers;

- (void).cxx_destruct;
- (id)_addViewControllerForIndex:(long long)arg1;
- (void)_adjustForEnvironmentChangeWithSize:(struct CGSize { double x1; double x2; })arg1 transitionCoordinator:(id)arg2;
- (void)_assignRouteViewToExpandedView;
- (double)_backgroundCornerRadius;
- (id)_createOrReuseBackgroundView;
- (id)_createOrReuseViewController;
- (void)_didSelectRoute;
- (void)_handleScrollViewTap:(id)arg1;
- (double)_heightForCompact;
- (double)_heightForExpandedInSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)_indexAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_moveViewForViewController:(id)arg1 withBackgroundView:(id)arg2;
- (void)_populateViewsInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_preferredExpandedFittingSize;
- (void)_reapViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForViewAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForViewAtIndex:(long long)arg1 multi:(bool)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (void)_reflectMode;
- (void)_removeActiveViewControllerAtIndex:(long long)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVisibleViewAtIndex:(long long)arg2;
- (void)_tileViews;
- (double)_totalHeight;
- (void)_updateFramesForActiveViewControllersWithCoordinator:(id)arg1 assumingSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_verticalSpacing;
- (id)dataSource;
- (void)didDismissMediaControlsPanelViewController:(id)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id /* block */)dismissalBlock;
- (bool)displayMultipleDestinations;
- (long long)expandedDestinationIndex;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (long long)numberOfDestinations;
- (void)reloadData;
- (long long)routeViewControllerIndex;
- (id)routingViewController;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollViewInsets;
- (id)selectedViewController;
- (void)setDataSource:(id)arg1;
- (void)setDismissalBlock:(id /* block */)arg1;
- (void)setDisplayMultipleDestinations:(bool)arg1;
- (void)setExpandedDestinationIndex:(long long)arg1;
- (void)setRouteViewControllerIndex:(long long)arg1;
- (void)setRoutingViewController:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleBottomViewControllers;
- (id)visibleTopViewControllers;

@end
