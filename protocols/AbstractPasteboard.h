/* made by EzioChiu.
 */

@protocol AbstractPasteboard <NSObject>

@required

- (long long)changeCount;
- (NSArray *)dataForPasteboardType:(NSString *)arg1 inItemSet:(NSIndexSet *)arg2;
- (NSArray *)itemProviders;
- (long long)numberOfItems;
- (NSArray *)pasteboardTypes;
- (void)setItemProviders:(NSArray *)arg1;
- (NSArray *)valuesForPasteboardType:(NSString *)arg1 inItemSet:(NSIndexSet *)arg2;

@optional

- (NSArray *)fileURLsForDataInteraction;
- (long long)numberOfFiles;
- (NSArray *)pasteboardTypesByFidelityForItemAtIndex:(unsigned long long)arg1;
- (void)setItems:(NSArray *)arg1;
- (void)setItemsUsingRegistrationInfoLists:(NSArray *)arg1;
- (void)updateSupportedTypeIdentifiers:(NSArray *)arg1;

@end
