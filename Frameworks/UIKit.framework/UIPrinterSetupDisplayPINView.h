/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupDisplayPINView : UIView {
    UIButton * _nextButton;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *nextButton;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)nextButton;
- (void)setMessage:(id)arg1 showButton:(bool)arg2;
- (void)setNextButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end