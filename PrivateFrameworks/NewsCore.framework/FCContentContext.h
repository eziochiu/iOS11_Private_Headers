/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCContentContext : NSObject <FCAppConfigurationObserving, FCContentContext, FCNetworkReachabilityRequirementObserving> {
    FCAppConfigurationManager * _appConfigurationManager;
    FCArticleController * _articleController;
    NSURL * _assetCacheDirectoryURL;
    FCAssetManager * _assetManager;
    <FCBackgroundTaskable> * _backgroundTaskable;
    NSString * _contentDirectory;
    FCFlintResourceManager * _flintResourceManager;
    FCContentContextInternal * _internalContentContext;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    <FCPPTContext> * _pptContext;
    <FCNetworkReachabilityRequirement> * _supportedCountryNetworkReachabilityRequirement;
    FCTagController * _tagController;
    NSURL * _webArchiveCacheDirectoryURL;
}

@property (nonatomic, readonly) FCAppConfigurationManager *appConfigurationManager;
@property (nonatomic, readonly) FCArticleController *articleController;
@property (nonatomic, retain) NSURL *assetCacheDirectoryURL;
@property (nonatomic, readonly) FCAssetManager *assetManager;
@property (nonatomic, readonly) <FCBackgroundTaskable> *backgroundTaskable;
@property (nonatomic, copy) NSString *contentDirectory;
@property (nonatomic, readonly, copy) NSString *contentEnvironmentToken;
@property (nonatomic, readonly, copy) NSString *contentStoreFrontID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCContentContextInternal *internalContentContext;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) <FCPPTContext> *pptContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *supportedContentStoreFrontID;
@property (nonatomic, retain) <FCNetworkReachabilityRequirement> *supportedCountryNetworkReachabilityRequirement;
@property (nonatomic, readonly) FCTagController *tagController;
@property (nonatomic, retain) NSURL *webArchiveCacheDirectoryURL;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateReachabilityGivenRequirements;
- (void)appConfigurationDidChange:(id)arg1;
- (id)appConfigurationManager;
- (id)articleController;
- (id)assetCacheDirectoryURL;
- (id)assetManager;
- (id)backgroundTaskable;
- (id)contentDirectory;
- (id)contentEnvironmentToken;
- (id)contentStoreFrontID;
- (void)dealloc;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)flintResourceManager;
- (id)initWithAppConfigurationManager:(id)arg1 contentHostDirectory:(id)arg2 desiredHeadlineFieldOptions:(unsigned long long)arg3 feedUsage:(long long)arg4 backgroundTaskable:(id)arg5 pptContext:(id)arg6;
- (id)initWithAppConfigurationManager:(id)arg1 contentHostDirectory:(id)arg2 networkBehaviorMonitor:(id)arg3 setupExcerptURLProtocol:(bool)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 backgroundTaskable:(id)arg7 pptContext:(id)arg8;
- (id)initWithContentDatabase:(id)arg1 contentHostDirectory:(id)arg2 networkBehaviorMonitor:(id)arg3 setupExcerptURLProtocol:(bool)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 backgroundTaskable:(id)arg7 pptContext:(id)arg8;
- (id)initWithContentHostDirectory:(id)arg1 networkBehaviorMonitor:(id)arg2 desiredHeadlineFieldOptions:(unsigned long long)arg3 feedUsage:(long long)arg4 backgroundTaskable:(id)arg5 pptContext:(id)arg6;
- (id)internalContentContext;
- (id)networkBehaviorMonitor;
- (void)networkReachabilityRequirementDidBecomeDirty:(id)arg1;
- (id)pptContext;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (void)setAssetCacheDirectoryURL:(id)arg1;
- (void)setContentDirectory:(id)arg1;
- (void)setInternalContentContext:(id)arg1;
- (void)setSupportedCountryNetworkReachabilityRequirement:(id)arg1;
- (void)setWebArchiveCacheDirectoryURL:(id)arg1;
- (id)supportedContentStoreFrontID;
- (id)supportedCountryNetworkReachabilityRequirement;
- (id)tagController;
- (id)webArchiveCacheDirectoryURL;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

+ (id)nt_contentContextWithAppConfigurationManager:(id)arg1 contentHostDirectory:(id)arg2;

@end
