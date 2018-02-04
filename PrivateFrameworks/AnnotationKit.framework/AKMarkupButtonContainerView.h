/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKMarkupButtonContainerView : UIView {
    UIButton * _button;
    UIImage * _colorizedImage;
    bool  _selected;
    UIImage * _templateImage;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, retain) UIImage *colorizedImage;
@property (nonatomic) bool selected;
@property (nonatomic, retain) UIImage *templateImage;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_buttonSize;
- (id)button;
- (id)colorizedImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)selected;
- (void)setButton:(id)arg1;
- (void)setColorizedImage:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTemplateImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)templateImage;
- (void)updateForMiniBarState:(bool)arg1;

@end