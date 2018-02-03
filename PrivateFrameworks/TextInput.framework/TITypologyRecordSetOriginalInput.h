/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecordSetOriginalInput : TITypologyRecord {
    NSString * _originalInput;
}

@property (nonatomic, copy) NSString *originalInput;

- (void)applyToStatistic:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)originalInput;
- (void)setOriginalInput:(id)arg1;
- (id)shortDescription;

@end
