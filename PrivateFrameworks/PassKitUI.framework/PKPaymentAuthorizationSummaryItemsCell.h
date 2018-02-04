/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationSummaryItemsCell : PKTableViewCell {
    NSMutableArray * _constraints;
    PKPaymentAuthorizationSummaryItemsView * _summaryItemsView;
}

@property (nonatomic, readonly) PKPaymentAuthorizationSummaryItemsView *summaryItemsView;

- (void).cxx_destruct;
- (void)_prepareConstraints;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (id)summaryItemsView;

@end
