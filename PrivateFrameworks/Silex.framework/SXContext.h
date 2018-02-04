/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXContext : NSObject {
    SXAdController * _adController;
    SXDocumentController * _documentController;
    SXEmbedController * _embedController;
    SXHost * _host;
    <SXPresentationDelegate> * _presentationDelegate;
    <SXReachabilityProvider> * _reachabilityProvider;
    <SXResourceDataSource> * _resourceDataSource;
    <SXTextComponentLayoutHosting> * _textComponentLayoutHost;
    <SXTextContentProvider> * _textContentProvider;
}

@property (nonatomic, readonly) SXAdController *adController;
@property (nonatomic, readonly) SXDocumentController *documentController;
@property (nonatomic, readonly) SXEmbedController *embedController;
@property (nonatomic, readonly) SXHost *host;
@property (nonatomic) <SXPresentationDelegate> *presentationDelegate;
@property (nonatomic, retain) <SXReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) <SXResourceDataSource> *resourceDataSource;
@property (nonatomic) <SXTextComponentLayoutHosting> *textComponentLayoutHost;
@property (nonatomic, readonly) <SXTextContentProvider> *textContentProvider;

+ (void)prewarm;

- (void).cxx_destruct;
- (id)adController;
- (id)documentController;
- (id)embedController;
- (id)host;
- (id)initWithJSONData:(id)arg1 resourceDataSource:(id)arg2 host:(id)arg3 error:(id*)arg4;
- (id)presentationDelegate;
- (id)reachabilityProvider;
- (id)resourceDataSource;
- (void)setPresentationDelegate:(id)arg1;
- (void)setReachabilityProvider:(id)arg1;
- (void)setTextComponentLayoutHost:(id)arg1;
- (id)textComponentLayoutHost;
- (id)textContentProvider;

@end
