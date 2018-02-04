/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPreferenceCard : PKPaymentPreference {
    bool  _showsAvailabiltyWhenReadOnly;
    bool  _supportsNullSelection;
}

@property (nonatomic) bool showsAvailabiltyWhenReadOnly;
@property (nonatomic) bool supportsNullSelection;

- (id)errorsForPreference:(id)arg1;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(bool)arg4;
- (void)setErrors:(id)arg1 forPreference:(id)arg2;
- (void)setShowsAvailabiltyWhenReadOnly:(bool)arg1;
- (void)setSupportsNullSelection:(bool)arg1;
- (bool)showsAvailabiltyWhenReadOnly;
- (bool)supportsDeletion;
- (bool)supportsNullSelection;

@end
