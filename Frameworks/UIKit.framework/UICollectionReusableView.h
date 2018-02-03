/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionReusableView : UIView {
    UICollectionView * _collectionView;
    UICollectionViewLayoutAttributes * _layoutAttributes;
    bool  _preferredAttributesValid;
    struct { 
        unsigned int wasDequeued : 1; 
        unsigned int preferredAttributesValid : 1; 
        unsigned int generatingPreferredAttributes : 1; 
    }  _reusableViewFlags;
    NSString * _reuseIdentifier;
    long long  _updateAnimationCount;
}

@property (getter=_collectionView, setter=_setCollectionView:, nonatomic) UICollectionView *collectionView;
@property (getter=_isInUpdateAnimation, nonatomic, readonly) bool inUpdateAnimation;
@property (getter=_layoutAttributes, setter=_setLayoutAttributes:, nonatomic, copy) UICollectionViewLayoutAttributes *layoutAttributes;
@property (getter=_arePreferredAttributesValid, nonatomic) bool preferredAttributesValid;
@property (setter=_setReuseIdentifier:, nonatomic, copy) NSString *reuseIdentifier;

- (void).cxx_destruct;
- (void)_addUpdateAnimation;
- (bool)_arePreferredAttributesValid;
- (void)_clearUpdateAnimation;
- (id)_collectionView;
- (bool)_disableRasterizeInAnimations;
- (void)_invalidatePreferredAttributes;
- (bool)_isInUpdateAnimation;
- (id)_layoutAttributes;
- (void)_markAsDequeued;
- (id)_preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)_setBaseLayoutAttributes:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setReuseIdentifier:(id)arg1;
- (bool)_wasDequeued;
- (void)applyLayoutAttributes:(id)arg1;
- (bool)canBeEdited;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEditing;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (void)setEditing:(bool)arg1;
- (void)setPreferredAttributesValid:(bool)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

@end
