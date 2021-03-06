/* made by EzioChiu.
 */

@protocol TSWPHeaderFooterProvider <NSObject>

@required

- (double)bodyWidth;
- (TSKDocumentRoot *)documentRoot;
- (TSWPStorage *)headerFooter:(int)arg1 fragmentAtIndex:(int)arg2;
- (NSEnumerator *)headerFooterFragmentEnumerator;
- (int)headerFooterTypeForModel:(id <TSKModel>)arg1;
- (int)headerFragmentIndexForModel:(id <TSKModel>)arg1;
- (bool)isHeaderFooterEmpty:(int)arg1;
- (bool)isHeaderFooterEmpty:(int)arg1 fragmentAtIndex:(int)arg2;
- (bool)usesSingleHeaderFooter;

@end
