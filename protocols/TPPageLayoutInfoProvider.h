/* made by EzioChiu.
 */

@protocol TPPageLayoutInfoProvider <NSObject>

@required

- (bool)canProvideInfoForPageIndex:(unsigned long long)arg1;
- (bool)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;
- (int)contentFlagsForPageIndex:(unsigned long long)arg1;
- (NSString *)displayPageNumberForCharIndex:(unsigned long long)arg1;
- (NSString *)displayPageNumberForPageIndex:(unsigned long long)arg1;
- (<TSWPHeaderFooterProvider> *)headerFooterProviderForPageIndex:(unsigned long long)arg1;
- (TSPObject<TPMasterDrawableProvider> *)masterDrawableProviderForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;
- (NSString *)pageNumberFormatForSectionOnPageIndex:(unsigned long long)arg1;
- (bool)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;

@end
