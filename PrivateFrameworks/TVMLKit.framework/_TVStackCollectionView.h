/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStackCollectionView : UICollectionView {
    double  _bottomPadding;
    NSIndexPath * _indexPathForLastFocusedItem;
}

@property (nonatomic, readonly, copy) NSIndexPath *indexPathForLastFocusedItem;

- (void).cxx_destruct;
- (bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBounds;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)indexPathForLastFocusedItem;
- (void)reloadData;
- (void)setBottomPaddingForVisibleBounds:(double)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
