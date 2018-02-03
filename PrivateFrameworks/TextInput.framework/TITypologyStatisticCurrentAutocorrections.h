/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic {
    TIAutocorrectionList * _autocorrections;
}

@property (nonatomic, retain) TIAutocorrectionList *autocorrections;

- (id)autocorrections;
- (void)dealloc;
- (void)setAutocorrections:(id)arg1;
- (void)visitRecordAutocorrections:(id)arg1;

@end
