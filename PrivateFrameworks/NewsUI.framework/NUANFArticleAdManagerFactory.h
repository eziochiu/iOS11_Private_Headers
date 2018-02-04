/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFArticleAdManagerFactory : NSObject <NUArticleAdManagerFactory> {
    <NUAdProvider> * _adProvider;
    <NUDevice> * _device;
    <NUAdSettings> * _settings;
}

@property (nonatomic, readonly) <NUAdProvider> *adProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUDevice> *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUAdSettings> *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adProvider;
- (id)createArticleAdManagerForArticle:(id)arg1;
- (id)device;
- (id)initWithAdProvider:(id)arg1 settings:(id)arg2 device:(id)arg3;
- (id)settings;

@end
