/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle {
    double  _customSelectionHighlightContinuousCornerRadius;
    UIInterfaceActionSeparatorAttributes * _customSeparatorAttributes;
    id /* block */  _customTitleLabelFontProviderForViewState;
}

@property double customSelectionHighlightContinuousCornerRadius;
@property (nonatomic, retain) UIInterfaceActionSeparatorAttributes *customSeparatorAttributes;
@property (nonatomic, copy) id /* block */ customTitleLabelFontProviderForViewState;

+ (id)styleOverride;

- (void).cxx_destruct;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)customSelectionHighlightContinuousCornerRadius;
- (id)customSeparatorAttributes;
- (id /* block */)customTitleLabelFontProviderForViewState;
- (bool)isEqual:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (void)setCustomSelectionHighlightContinuousCornerRadius:(double)arg1;
- (void)setCustomSeparatorAttributes:(id)arg1;
- (void)setCustomTitleLabelFontProviderForViewState:(id /* block */)arg1;

@end
