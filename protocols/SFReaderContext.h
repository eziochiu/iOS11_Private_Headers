/* made by EzioChiu.
 */

@protocol SFReaderContext <NSObject>

@required

- (void)activateReader;
- (void)clearAvailability;
- (void)clearReaderWebView;
- (void)clearUnusedReaderResourcesSoon;
- (void)collectReaderContentForMailWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (NSDictionary *)configuration;
- (void)createArticleFinder;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)decreaseReaderTextSize;
- (WBSReaderFontManager *)fontManager;
- (void)increaseReaderTextSize;
- (bool)isLoadingNextPage;
- (bool)isReaderAvailable;
- (void)loadNewArticle;
- (NSURL *)readerURL;
- (NSDictionary *)scrollPositionInformation;
- (void)setReaderFont:(NSString *)arg1;
- (void)setReaderLanguageTag:(NSString *)arg1;
- (void)setReaderTheme:(NSString *)arg1;
- (bool)shouldCreateArticleFinder;
- (void)stopLoadingNextPage;

@end
