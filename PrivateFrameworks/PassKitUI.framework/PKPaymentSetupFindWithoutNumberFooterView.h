/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupFindWithoutNumberFooterView : PKTableFooterView {
    long long  _context;
    UIButton * _noNumberButton;
}

@property (nonatomic) long long context;
@property (nonatomic, retain) UIButton *noNumberButton;

- (void).cxx_destruct;
- (long long)context;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2;
- (bool)isBuddyiPad;
- (void)layoutSubviews;
- (id)noNumberButton;
- (void)setButtonsEnabled:(bool)arg1;
- (void)setContext:(long long)arg1;
- (void)setNoNumberButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
