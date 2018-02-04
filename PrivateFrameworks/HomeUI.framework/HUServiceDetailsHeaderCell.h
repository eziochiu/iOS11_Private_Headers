/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUServiceDetailsHeaderCell : UITableViewCell <HUCellProtocol> {
    UILabel * _errorLabel;
    NSArray * _hiddenErrorLabelConstraints;
    HFItem * _item;
    <HUResizableCellDelegate> * _resizingDelegate;
    HUGridServiceCell * _serviceCell;
    NSArray * _visibleErrorLabelConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *hiddenErrorLabelConstraints;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) HUGridServiceCell *serviceCell;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *visibleErrorLabelConstraints;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_configureConstraints;
- (id)_hiddenErrorLabelConstraints;
- (bool)_shouldShowServiceCell;
- (void)_updateErrorLabelConstraints;
- (void)_updateRequiredHeightIfNeeded;
- (id)_visibleErrorLabelConstraints;
- (id)errorLabel;
- (id)hiddenErrorLabelConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (void)layoutSubviews;
- (id)resizingDelegate;
- (id)serviceCell;
- (void)setErrorLabel:(id)arg1;
- (void)setHiddenErrorLabelConstraints:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setResizingDelegate:(id)arg1;
- (void)setServiceCell:(id)arg1;
- (void)setVisibleErrorLabelConstraints:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)visibleErrorLabelConstraints;

@end
