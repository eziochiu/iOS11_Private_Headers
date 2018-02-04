/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVInfoTableView : _TVFocusRedirectView <TVAppTemplateImpressionable> {
    UIView * _footerView;
    UIView * _headerView;
    NSArray * _infoViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) NSArray *infoViews;
@property (readonly) Class superclass;

+ (id)infoTableViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (double)_normalizedInfoHeaderWidth;
- (id)footerView;
- (id)headerView;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)infoViews;
- (void)layoutSubviews;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInfoViews:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end