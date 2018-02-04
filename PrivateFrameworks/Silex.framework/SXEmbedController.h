/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEmbedController : NSObject {
    <SXEmbedDataSource> * _embedDataSource;
    NSURLSession * _oEmbedSession;
}

@property (nonatomic, retain) <SXEmbedDataSource> *embedDataSource;
@property (nonatomic, retain) NSURLSession *oEmbedSession;

- (void).cxx_destruct;
- (id)addAdditionalQueryParameters:(id)arg1 toURL:(id)arg2;
- (id)additionalQueryParametersForType:(id)arg1;
- (void)dealloc;
- (id)embedDataSource;
- (id)init;
- (id)oEmbedSession;
- (void)retrieveHTMLFromOEmbedURL:(id)arg1 embedType:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setEmbedDataSource:(id)arg1;
- (void)setOEmbedSession:(id)arg1;

@end
