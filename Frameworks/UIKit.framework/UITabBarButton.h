/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarButton : UIControl <UISpringLoadedInteractionSupporting> {
    Class  _appearanceGuideClass;
    _UIBadgeView * _badge;
    UIColor * _badgeColor;
    NSMutableDictionary * _badgeTextAttributesForState;
    NSMutableDictionary * _buttonTintColorsForState;
    bool  _centerAllContents;
    NSMutableDictionary * _contentTintColorsForState;
    UIImage * _customSelectedIndicatorImage;
    UIColor * _defaultUnselectedLabelTintColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hitRect;
    bool  _horizontalLayout;
    UITabBarSwappableImageView * _info;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _infoInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _infoLandscapeInsets;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _infoOffset;
    UITabBarButtonLabel * _label;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _labelOffset;
    bool  _selected;
    UIImageView * _selectedIndicator;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _selectedInfoOffset;
    bool  _showsHighlightedState;
    UITabBar * _tabBar;
    UIVisualEffectView * _vibrancyEffectView;
}

@property (setter=_setAppearanceGuideClass:, nonatomic, retain) Class _appearanceGuideClass;
@property (setter=_setCenterAllContents:, nonatomic) bool _centerAllContents;
@property (nonatomic, readonly) UIColor *_defaultUnselectedLabelTintColor;
@property (setter=_setHorizontalLayout:, nonatomic) bool _horizontalLayout;
@property (getter=_isSelected, setter=_setSelected:, nonatomic) bool _selected;
@property (setter=_setShowsHighlightedState:, nonatomic) bool _showsHighlightedState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSpringLoaded, nonatomic) bool springLoaded;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITabBar *tabBar;
@property (getter=_unselectedTintColor, setter=_setUnselectedTintColor:, nonatomic, retain) UIColor *unselectedTintColor;

+ (id)_defaultLabelColor;

- (void).cxx_destruct;
- (void)_UIAppearance_setBadgeColor:(id)arg1;
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (Class)_appearanceGuideClass;
- (void)_appleTV_layoutSubviews;
- (struct CGSize { double x1; double x2; })_appleTV_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_buttonTintColorForState:(unsigned long long)arg1;
- (bool)_centerAllContents;
- (id)_contentTintColorForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultFocusRegionFrame;
- (id)_defaultUnselectedLabelTintColor;
- (long long)_focusTouchSensitivityStyle;
- (bool)_horizontalLayout;
- (struct CGSize { double x1; double x2; })_horizontalLayout_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isSelected;
- (void)_positionBadge;
- (void)_positionBadgeAfterChangesIfNecessary:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (id)_selectedIndicatorImage;
- (id)_selectedIndicatorView;
- (void)_sendFocusAction;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBadgeColor:(id)arg1;
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setBadgeValue:(id)arg1;
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setCenterAllContents:(bool)arg1;
- (void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setCustomSelectedIndicatorImage:(id)arg1;
- (void)_setHorizontalLayout:(bool)arg1;
- (void)_setImage:(id)arg1 selected:(bool)arg2 offset:(struct UIOffset { double x1; double x2; })arg3;
- (void)_setInfoOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setLabelHidden:(bool)arg1;
- (void)_setSelected:(bool)arg1;
- (void)_setSelectedInfoOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setShowsHighlightedState:(bool)arg1;
- (void)_setTabBarHitRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setUnselectedTintColor:(id)arg1;
- (void)_showSelectedIndicator:(bool)arg1 changeSelection:(bool)arg2;
- (bool)_showsHighlightedState;
- (id)_tabBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tabBarHitRect;
- (struct UIOffset { double x1; double x2; })_titlePositionAdjustment;
- (id)_unselectedTintColor;
- (void)_updateBadgeAppearanceAndLayoutNow:(bool)arg1;
- (void)_updateInfoFrame;
- (void)_updateSelectedIndicatorFrame;
- (void)_updateSelectedIndicatorView;
- (void)_updateToMatchCurrentState;
- (void)_updateVibrancyEffectView;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithImage:(id)arg1 landscapeImage:(id)arg2 selectedImage:(id)arg3 landscapeSelectedImage:(id)arg4 label:(id)arg5 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg6 landscapeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg7 tabBar:(id)arg8;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 tabBar:(id)arg5;
- (bool)isSpringLoaded;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tabBar;
- (void)traitCollectionDidChange:(id)arg1;

@end