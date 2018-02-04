/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEmbedConfigurationLoader : NSObject {
    FCAppConfigurationManager * _appConfigurationManager;
    FCAsyncOnceOperation * _asyncOnceOperation;
    FCFlintResourceManager * _flintResourceManager;
}

@property (nonatomic, retain) FCAppConfigurationManager *appConfigurationManager;
@property (nonatomic, retain) FCAsyncOnceOperation *asyncOnceOperation;
@property (nonatomic, readonly) SXJSONDictionary *embedConfiguration;
@property (nonatomic, retain) FCFlintResourceManager *flintResourceManager;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (id)asyncLoadEmbedConfigurationOnceWithCompletion:(id /* block */)arg1;
- (id)asyncOnceOperation;
- (id)embedConfiguration;
- (id)flintResourceManager;
- (id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2;
- (id)loadEmbededConfigurationWithCompletion:(id /* block */)arg1;
- (void)setAppConfigurationManager:(id)arg1;
- (void)setAsyncOnceOperation:(id)arg1;
- (void)setFlintResourceManager:(id)arg1;

@end
