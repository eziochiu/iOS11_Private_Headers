/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionCellController : NSObject {
    NSData * _businessAvatarImageData;
    PKPeerPaymentContactResolver * _contactResolver;
    NSData * _topUpAvatarImageData;
    UIFont * _transactionCellPrimaryLabelFont;
    UIFont * _transactionCellPrimaryLabelPeerPaymentFont;
    UIFont * _transactionCellSecondaryLabelFont;
    UIFont * _transactionCellSecondaryLabelPeerPaymentFont;
    UIFont * _transactionCellValueLabelFont;
    UIFont * _transactionCellValueLabelPeerPaymentFont;
}

@property (nonatomic, readonly) PKPeerPaymentContactResolver *contactResolver;

+ (id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 includeBankAccountSuffix:(bool)arg2 useGenericNameIfNoDescriptionAvailable:(bool)arg3;

- (void).cxx_destruct;
- (id)_businessAvatarImageData;
- (id)_relativeDateAndStatusForTransaction:(id)arg1;
- (id)_topUpAvatarImageData;
- (id)_transactionCellPrimaryLabelFontForPass:(id)arg1;
- (id)_transactionCellSecondaryLabelFontForPass:(id)arg1;
- (id)_transactionCellValueLabelFontForPass:(id)arg1;
- (void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3;
- (void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;
- (void)configureCell:(id)arg1 forTransaction:(id)arg2 paymentPass:(id)arg3 detailStyle:(long long)arg4 avatarViewDelegate:(id)arg5;
- (id)contactResolver;
- (id)initWithContactResolver:(id)arg1;
- (double)paymentTransactionCellHeightForPass:(id)arg1;

@end
