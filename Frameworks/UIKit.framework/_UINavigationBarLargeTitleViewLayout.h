/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationBarLargeTitleViewLayout : NSObject {
    UIView * _accessoryView;
    unsigned long long  _accessoryViewHorizontalAlignment;
    bool  _alignAccessoryViewToTitleBaseline;
    double  _cachedRestingHeight;
    _UINavigationBarLargeTitleView * _contentView;
    _UINavigationControllerRefreshControlHost * _refreshControlHost;
    UIView * _refreshHostContainerView;
    double  _restingHeightOfRefreshControl;
    bool  _supportsTwoLines;
    NSMutableDictionary * _titleHeightCache;
    UILabel * _titleLabel;
    double  _titleRestingHeight;
    long long  _titleType;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) unsigned long long accessoryViewHorizontalAlignment;
@property (nonatomic) bool alignAccessoryViewToTitleBaseline;
@property (nonatomic, readonly) _UINavigationBarLargeTitleView *contentView;
@property (nonatomic, readonly) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (nonatomic, retain) UIView *refreshHostContainerView;
@property (nonatomic) double restingHeightOfRefreshControl;
@property (nonatomic) bool supportsTwoLines;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, readonly) double titleRestingHeight;
@property (nonatomic) long long titleType;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_cachedTitleHeightSizeAndUpdateRestingSizeForWidth:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentLayoutBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentLayoutBoundsUsingRestingTitleHeight:(bool)arg1;
- (void)_enforceRefreshHostContainerViewOrdering;
- (void)_invalidateTitleHeightCache;
- (double)_textHeightForSize:(struct CGSize { double x1; double x2; })arg1 titleType:(long long)arg2;
- (double)_unobstructedHeightOfRefreshControlWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)accessoryView;
- (unsigned long long)accessoryViewHorizontalAlignment;
- (bool)alignAccessoryViewToTitleBaseline;
- (void)cleanupAfterLayoutTransitionCompleted;
- (void)configureRefreshControlUsingHost:(id)arg1;
- (id)contentView;
- (id)initWithContentView:(id)arg1;
- (void)invalidate;
- (void)layoutViews;
- (void)layoutViewsWithOffset:(struct UIOffset { double x1; double x2; })arg1 useRestingTitleHeight:(bool)arg2;
- (id)refreshControlHost;
- (id)refreshHostContainerView;
- (double)restingHeightOfRefreshControl;
- (void)setAccessoryView:(id)arg1;
- (void)setAccessoryViewHorizontalAlignment:(unsigned long long)arg1;
- (void)setAlignAccessoryViewToTitleBaseline:(bool)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setContentHidden:(bool)arg1;
- (void)setRefreshHostContainerView:(id)arg1;
- (void)setRestingHeightOfRefreshControl:(double)arg1;
- (void)setSupportsTwoLines:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleType:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeFittingSize:(struct CGSize { double x1; double x2; })arg1 titleType:(long long)arg2;
- (bool)supportsTwoLines;
- (id)titleLabel;
- (double)titleRestingHeight;
- (long long)titleType;
- (void)updateRestingTitleHeight;

@end
