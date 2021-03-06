/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory> {
    <SXAppStateMonitor> * _appStateMonitor;
    <NUArticleAdManagerFactory> * _articleAdManagerFactory;
    <NUArticleDataProviderFactory> * _articleDataProviderFactory;
    <NUDynamicTypeProviding> * _dynamicTypeProviding;
    <NUEndOfArticleDataProviderFactory> * _endOfArticleDataProviderFactory;
    <NUScrollViewKeyCommandHandler> * _keyCommandHandler;
    <NULinkPreviewing> * _linkPreviewing;
}

@property (nonatomic, readonly) <SXAppStateMonitor> *appStateMonitor;
@property (nonatomic, readonly) <NUArticleAdManagerFactory> *articleAdManagerFactory;
@property (nonatomic, readonly) <NUArticleDataProviderFactory> *articleDataProviderFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUDynamicTypeProviding> *dynamicTypeProviding;
@property (nonatomic, readonly) <NUEndOfArticleDataProviderFactory> *endOfArticleDataProviderFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUScrollViewKeyCommandHandler> *keyCommandHandler;
@property (nonatomic, readonly) <NULinkPreviewing> *linkPreviewing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appStateMonitor;
- (id)articleAdManagerFactory;
- (id)articleDataProviderFactory;
- (id)createArticleExcerptViewControllerWithArticle:(id)arg1 traits:(id)arg2;
- (id)createArticleViewControllerWithArticle:(id)arg1;
- (id)createArticleWebViewControllerWithArticle:(id)arg1;
- (id)dynamicTypeProviding;
- (id)endOfArticleDataProviderFactory;
- (id)initWithArticleDataProviderFactory:(id)arg1 endOfArticleDataProviderFactory:(id)arg2 articleAdManagerFactory:(id)arg3 linkPreviewing:(id)arg4 dynamicTypeProviding:(id)arg5 appStateMonitor:(id)arg6 keyCommandHandler:(id)arg7;
- (id)keyCommandHandler;
- (id)linkPreviewing;

@end
