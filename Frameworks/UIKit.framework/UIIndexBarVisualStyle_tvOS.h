/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIIndexBarVisualStyle_tvOS : UIIndexBarVisualStyle_Base {
    NSMutableArray * _backgroundLabels;
    long long  _deflectedIndex;
    NSMutableArray * _foregroundLabels;
    UIView * _foregroundMaskView;
    UIView * _foregroundWrapperView;
    UIView * _indicatorView;
    double  _preferredIndicatorWidth;
}

- (void).cxx_destruct;
- (id)_backgroundLabelTextColor;
- (void)_createLabels;
- (id)_foregroundFont;
- (id)_indicatorShadowPath;
- (bool)_shouldUseDarkAppearance;
- (void)_showNormalFocusProminence;
- (void)_showReducedFocusProminence;
- (void)_updateColors;
- (bool)canBecomeFocused;
- (void)deflectionReset:(bool)arg1;
- (void)deflectionUpdated;
- (void)displayEntriesUpdated;
- (void)highlightStyleUpdated;
- (void)highlightedIndexUpdated;
- (id)initWithView:(id)arg1;
- (void)layoutSubviews;
- (double)minLineHeight;
- (bool)overlay;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end