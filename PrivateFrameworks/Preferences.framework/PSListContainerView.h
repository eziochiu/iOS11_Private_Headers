/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSListContainerView : UIView {
    PSListController * _delegate;
}

@property (nonatomic) PSListController *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)layoutMarginsDidChange;
- (void)setDelegate:(id)arg1;

@end
