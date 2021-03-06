/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAppManagerAppTableViewCell : UITableViewCell {
    UISwitch * _appToggle;
    <CKAppManagerAppTableViewCellDelegate> * _delegate;
}

@property (nonatomic, retain) UISwitch *appToggle;
@property (nonatomic) <CKAppManagerAppTableViewCellDelegate> *delegate;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)appToggle;
- (void)appToggleTapped:(id)arg1;
- (id)delegate;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAppToggle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setToggleVisible:(bool)arg1 isOn:(bool)arg2;
- (void)updateCellWithPluginInfo:(id)arg1;

@end
