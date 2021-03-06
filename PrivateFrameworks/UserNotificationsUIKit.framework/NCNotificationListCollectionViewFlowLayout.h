/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCollectionViewFlowLayout : UICollectionViewFlowLayout {
    double  _forcedContentSizeHeight;
    NSMutableArray * _insertedIndexPaths;
    bool  _isChangingBounds;
    NSMutableArray * _removedIndexPaths;
    NSMutableArray * _replacedIndexPaths;
    bool  _showingNotificationsHistory;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } effectiveContentSize;
@property (nonatomic) double forcedContentSizeHeight;
@property (nonatomic, retain) NSMutableArray *insertedIndexPaths;
@property (nonatomic, retain) NSMutableArray *removedIndexPaths;
@property (nonatomic, retain) NSMutableArray *replacedIndexPaths;
@property (getter=isShowingNotificationsHistory, nonatomic) bool showingNotificationsHistory;

- (void).cxx_destruct;
- (id /* block */)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })effectiveContentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (double)forcedContentSizeHeight;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)insertedIndexPaths;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingNotificationsHistory;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)removedIndexPaths;
- (id)replacedIndexPaths;
- (void)setForcedContentSizeHeight:(double)arg1;
- (void)setInsertedIndexPaths:(id)arg1;
- (void)setRemovedIndexPaths:(id)arg1;
- (void)setReplacedIndexPaths:(id)arg1;
- (void)setShowingNotificationsHistory:(bool)arg1;

@end
