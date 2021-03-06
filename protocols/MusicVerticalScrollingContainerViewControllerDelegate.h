/* made by EzioChiu.
 */

@protocol MusicVerticalScrollingContainerViewControllerDelegate <NSObject>

@optional

- (long long)verticalScrollingContainerViewController:(MusicVerticalScrollingContainerViewController *)arg1 contentOffsetProxyingPolicyForItem:(MusicVerticalScrollingContainerItem *)arg2;
- (void)verticalScrollingContainerViewController:(MusicVerticalScrollingContainerViewController *)arg1 willEndDraggingWithVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)verticalScrollingContainerViewControllerContentSizeDidChange:(MusicVerticalScrollingContainerViewController *)arg1;
- (void)verticalScrollingContainerViewControllerDidLayoutSubviews:(MusicVerticalScrollingContainerViewController *)arg1;
- (void)verticalScrollingContainerViewControllerDidScroll:(MusicVerticalScrollingContainerViewController *)arg1;

@end
