/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISelectableGridCardSectionView : SearchUICardSectionView <TLKSelectableGridViewDelegate>

@property (retain) TLKSelectableGridView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)convertSFTitleSubtitleData:(id)arg1;
- (void)selectableGridView:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (id)setupContentView;
- (void)updateWithCardSection:(id)arg1;

@end
