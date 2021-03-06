/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKNumberPadSuggestionsView : UIStackView {
    UIColor * _buttonTextColor;
    <PKNumberPadSuggestionsViewDelegate> * _delegate;
    NSArray * _suggestions;
}

@property (nonatomic, copy) UIColor *buttonTextColor;
@property (nonatomic) <PKNumberPadSuggestionsViewDelegate> *delegate;
@property (nonatomic, copy) NSArray *suggestions;

- (void).cxx_destruct;
- (void)_selectedSuggestion:(id)arg1;
- (id)buttonTextColor;
- (id)delegate;
- (id)initWithDefaultFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButtonTextColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestions;

@end
