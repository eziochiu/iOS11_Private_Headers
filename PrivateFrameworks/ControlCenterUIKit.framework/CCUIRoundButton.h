/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIRoundButton : UIControl <UIGestureRecognizerDelegate> {
    UIImage * _glyphImage;
    UIImageView * _glyphImageView;
    CCUICAPackageDescription * _glyphPackageDescription;
    CCUICAPackageView * _glyphPackageView;
    NSString * _glyphState;
    UIColor * _highlightColor;
    UIView * _normalStateBackgroundView;
    UIImageView * _selectedGlyphView;
    UIView * _selectedStateBackgroundView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, retain) UIImageView *glyphImageView;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic, retain) CCUICAPackageView *glyphPackageView;
@property (nonatomic, copy) NSString *glyphState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) UIView *normalStateBackgroundView;
@property (nonatomic, retain) UIImageView *selectedGlyphView;
@property (nonatomic, retain) UIView *selectedStateBackgroundView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_cornerRadius;
- (void)_handlePressGesture:(id)arg1;
- (void)_primaryActionPerformed:(id)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_updateForStateChange;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)glyphImage;
- (id)glyphImageView;
- (id)glyphPackageDescription;
- (id)glyphPackageView;
- (id)glyphState;
- (id)highlightColor;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(bool)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(bool)arg3;
- (id)initWithHighlightColor:(id)arg1 useLightStyle:(bool)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)normalStateBackgroundView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)selectedGlyphView;
- (id)selectedStateBackgroundView;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphImageView:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphPackageView:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setNormalStateBackgroundView:(id)arg1;
- (void)setSelectedGlyphView:(id)arg1;
- (void)setSelectedStateBackgroundView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
