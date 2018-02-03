/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecordCandidateRejected : TITypologyRecord {
    TIKeyboardCandidate * _candidate;
}

@property (nonatomic, retain) TIKeyboardCandidate *candidate;

- (void)applyToStatistic:(id)arg1;
- (id)candidate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCandidate:(id)arg1;
- (id)shortDescription;

@end
