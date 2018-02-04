/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFullScreenCanvasViewController : UIViewController {
    bool  _isObservingNavigationBar;
    bool  _visible;
}

@property (nonatomic) bool isObservingNavigationBar;
@property (nonatomic) bool visible;

- (bool)isObservingNavigationBar;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (void)setIsObservingNavigationBar:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)visible;

@end
