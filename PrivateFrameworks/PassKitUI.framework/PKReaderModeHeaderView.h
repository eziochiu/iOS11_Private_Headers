/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKReaderModeHeaderView : PKTableHeaderView {
    long long  _context;
    NSString * _displayName;
    unsigned long long  _state;
}

@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_configureForCurrentState;
- (id)initWithState:(unsigned long long)arg1 context:(long long)arg2 productDisplayName:(id)arg3;
- (void)layoutSubviews;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end