/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentHeroBubbleView : UIImageView {
    UIView * _backgroundView;
    UIView * _pluginBalloonView;
}

- (void).cxx_destruct;
- (unsigned long long)_bubbleStateForRegistrationState:(unsigned long long)arg1;
- (id)initWithCurrencyAmount:(id)arg1 regitrationFlowState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
