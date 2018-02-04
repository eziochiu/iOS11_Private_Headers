/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleAdManager : NSObject <NUAdContextProvider, SXAdControllerDataSource, SXAdControllerDelegate> {
    <NUAdProvider> * _adProvider;
    FCArticle * _article;
    <NUDevice> * _device;
    <NUAdSettings> * _settings;
}

@property (nonatomic, readonly) <NUAdProvider> *adProvider;
@property (nonatomic, readonly) FCArticle *article;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUDevice> *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUAdSettings> *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didLoadBannerView:(id)arg3;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didUnloadBannerView:(id)arg3 withError:(id)arg4;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 failedToLoadBannerView:(id)arg3 error:(id)arg4;
- (id /* block */)adController:(id)arg1 requiresAdForRequest:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)adProvider;
- (id)article;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)device;
- (id)initWithArticle:(id)arg1 adProvider:(id)arg2 settings:(id)arg3 device:(id)arg4;
- (id)settings;

@end
