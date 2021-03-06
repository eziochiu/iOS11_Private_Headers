/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCredentialTableViewCell : PKTableViewCell {
    UILabel * _credentialDetailLabel;
    bool  _showingPlaceholder;
    UIImageView * _snapshotImageView;
}

@property (nonatomic, readonly) UILabel *credentialDetailLabel;
@property (nonatomic) bool showingPlaceholder;
@property (nonatomic, readonly) UIImageView *snapshotImageView;

+ (struct CGSize { double x1; double x2; })defaultImageViewSize;

- (void).cxx_destruct;
- (id)credentialDetailLabel;
- (id)detailTextLabelColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)prepareForReuse;
- (void)setShowingPlaceholder:(bool)arg1;
- (bool)showingPlaceholder;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)snapshotImageView;

@end
