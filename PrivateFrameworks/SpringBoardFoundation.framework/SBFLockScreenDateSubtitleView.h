/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenDateSubtitleView : UIView <SBFScreenFadeReplicatable> {
    UIView<SBFScreenFadeReplicatable> * _accessoryView;
    SBUILegibilityLabel * _label;
    _UILegibilitySettings * _legibilitySettings;
    NSHashTable * _replicatedViews;
    double  _strength;
}

@property (nonatomic, retain) UIView<SBFScreenFadeReplicatable> *accessoryView;
@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic, readonly) double baselineOffsetFromOrigin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (nonatomic, retain) NSString *string;
@property (readonly) Class superclass;

+ (id)labelFont;
+ (double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2;

- (void).cxx_destruct;
- (id)_createReplicateView;
- (void)_enumerateReplicateViews:(id /* block */)arg1;
- (void)_updateForCurrentSizeCategory;
- (id)accessoryView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessoryViewFrame;
- (double)baselineOffsetFromBottom;
- (double)baselineOffsetFromOrigin;
- (void)dealloc;
- (id)font;
- (id)init;
- (id)initWithString:(id)arg1 accessoryView:(id)arg2;
- (double)interItemSpacing;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)replicate;
- (void)setAccessoryView:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (void)setString:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;
- (id)string;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })subtitleLabelFrame;

@end
