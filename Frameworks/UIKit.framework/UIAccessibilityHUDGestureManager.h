/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityHUDGestureManager : NSObject <UIGestureRecognizerDelegatePrivate> {
    UILongPressGestureRecognizer * _recognizer;
    NSMutableArray * _subscribedConcurrentGestureRecognizers;
    UIView<UIAccessibilityHUDGestureHosting> * _view;
    UIViewController * _viewControllerDisplayingHUD;
    bool  _viewDirectlyShowsHUD;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bestViewControllerForView;
- (void)_clearButtonItemGestureSubscriptions;
- (void)_concurrentGestureRecognizerFired:(id)arg1;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_dismissAccessibilityHUD;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_gestureRecognizerChanged:(id)arg1;
- (void)_showAccessibilityHUDItem:(id)arg1;
- (id)_subscribedConcurrentGestureRecognizers;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end
