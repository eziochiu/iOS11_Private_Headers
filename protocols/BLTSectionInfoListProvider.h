/* made by EzioChiu.
 */

@protocol BLTSectionInfoListProvider <NSObject>

@required

- (<BLTSectionInfoListProviderDelegate> *)delegate;
- (void)reloadWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setDelegate:(id <BLTSectionInfoListProviderDelegate>)arg1;

@end
