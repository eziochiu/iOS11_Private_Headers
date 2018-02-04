/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableRowCardView : SearchUICardSectionView

@property (retain) TLKGridRowView *contentView;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMargins;
+ (bool)hasOnlyImages:(id)arg1;
+ (bool)isAHeader:(id)arg1;
+ (double)largestImageSizeForSection:(id)arg1;
+ (int)separatorStyleForCardSection:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)initWithCardSection:(id)arg1 gridData:(id)arg2 style:(unsigned long long)arg3 feedbackDelegate:(id)arg4;
- (id)setupContentView;
- (void)updateWithCardSection:(id)arg1 manager:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })verticalBaselineInsetsForHeader:(bool)arg1 isCompactTable:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })verticalBaselineInsetsForRowsWithCompactTable:(bool)arg1;

@end
