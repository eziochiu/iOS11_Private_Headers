/* made by EzioChiu.
 */

@protocol FCContentContext <NSObject, FCCacheFlushing>

@required

- (FCAppConfigurationManager *)appConfigurationManager;
- (FCArticleController *)articleController;
- (NSURL *)assetCacheDirectoryURL;
- (FCAssetManager *)assetManager;
- (<FCBackgroundTaskable> *)backgroundTaskable;
- (NSString *)contentDirectory;
- (NSString *)contentEnvironmentToken;
- (NSString *)contentStoreFrontID;
- (FCFlintResourceManager *)flintResourceManager;
- (<FCContentContextInternal> *)internalContentContext;
- (FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
- (<FCPPTContext> *)pptContext;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (NSString *)supportedContentStoreFrontID;
- (FCTagController *)tagController;
- (NSURL *)webArchiveCacheDirectoryURL;

@end
