/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface _HUUserAvatarHeaderView : UITableViewHeaderFooterView {
    HUContactView * _contactView;
}

@property (nonatomic, readonly) HUContactView *contactView;
@property (nonatomic, retain) NSAttributedString *message;

- (void).cxx_destruct;
- (id)_keyDescriptors;
- (id)contactView;
- (id)initWithUserID:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;

@end
