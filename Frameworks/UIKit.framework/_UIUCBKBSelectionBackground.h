/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIUCBKBSelectionBackground : UIView {
    UIKBKeyView * _backgroundProvidingView;
    bool  _showButtonShape;
}

@property (nonatomic) bool showButtonShape;

- (void).cxx_destruct;
- (id)_makeBackgroundView;
- (void)_updateBackgroundProvidingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setShowButtonShape:(bool)arg1;
- (bool)showButtonShape;

@end