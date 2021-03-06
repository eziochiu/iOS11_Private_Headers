/* made by EzioChiu.
 */

@protocol TPLayoutStateConsumer <NSObject>

@required

- (bool)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setBodyLength:(unsigned long long)arg2;
- (void)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setDocumentPageIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setLastPageCount:(unsigned long long)arg2;
- (bool)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setSectionHints:(NSArray *)arg2;
- (void)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setSectionIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setSectionPageIndex:(unsigned long long)arg2;

@end
