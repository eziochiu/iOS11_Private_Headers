/* made by EzioChiu.
 */

@protocol MusicMediaDetailSplitViewControllerDelegate <NSObject>

@required

- (void)mediaDetailSplitViewController:(UIViewController *)arg1 contentScrollViewWillEndDraggingWithVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)mediaDetailSplitViewControllerContentScrollViewContentSizeDidChange:(UIViewController *)arg1;
- (void)mediaDetailSplitViewControllerContentScrollViewDidScroll:(UIViewController *)arg1;

@end
