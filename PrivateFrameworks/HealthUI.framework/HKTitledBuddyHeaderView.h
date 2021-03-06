/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKTitledBuddyHeaderView : UIView {
    NSLayoutConstraint * _bodyBottomConstraint;
    NSLayoutConstraint * _bodyFirstBaselineConstraint;
    NSLayoutConstraint * _bodyLastBaselineToLinkConstraint;
    UITextView * _bodyTextView;
    NSLayoutConstraint * _bodyZeroHeightConstraint;
    <HKTitledBuddyHeaderViewDelegate> * _delegate;
    NSLayoutConstraint * _linkButtonLastBaselineToBottomConstraint;
    NSLayoutConstraint * _logoTitleGapConstraint;
    UIButton * _optionalLinkButton;
    NSLayoutConstraint * _titleBottomConstraint;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelBaselineConstraint;
}

@property (nonatomic, retain) NSString *bodyText;
@property (nonatomic) <HKTitledBuddyHeaderViewDelegate> *delegate;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;

- (void).cxx_destruct;
- (void)_linkButtonTapped:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (id)bodyText;
- (id)bodyTextView;
- (void)deactivateDefaultTitleLabelBaselineConstraint;
- (id)delegate;
- (id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2;
- (void)setBodyText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;

@end
