/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryTopBarController : NSObject {
    bool  _displayingLocalLibrary;
    bool  _showCloudMediaEnabled;
    UIViewController * _targetViewController;
    UIView * _topBarContainerView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _topBarContentInsetAdditions;
    UIViewController * _topBarViewController;
}

@property (nonatomic, readonly) UIViewController *targetViewController;

- (void).cxx_destruct;
- (void)_musicDefaultsDidChangeNotification:(id)arg1;
- (void)_musicUserInterfaceDefaultLibraryIsLocalLibraryDidChangeNotification:(id)arg1;
- (id)_newTopBarViewController;
- (void)_reloadTopBarViewController;
- (void)_updateTopBarContentInsetAdditions;
- (void)_updateTopBarViewFrame;
- (void)dealloc;
- (id)initWithTargetViewController:(id)arg1;
- (id)targetViewController;
- (void)targetViewControllerViewContentScrollViewDidChangeContentInset;
- (void)targetViewControllerViewDidLayoutSubviews;
- (void)targetViewControllerViewDidLoad;
- (void)targetViewControllerViewPreferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)targetViewControllerViewWillDealloc;

@end