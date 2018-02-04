/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoAdProvider : NSObject <SXVideoAdProviding> {
    SXAdController * _adController;
    <SXVideoAdProviderDataSource> * _dataSource;
    SXPrerollAdResponse * _response;
}

@property (nonatomic, retain) SXAdController *adController;
@property (nonatomic) <SXVideoAdProviderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXPrerollAdResponse *response;
@property (nonatomic, readonly) unsigned long long skipThreshold;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adController;
- (id)dataSource;
- (bool)hasAction;
- (id)initWithDataSource:(id)arg1;
- (id /* block */)loadWithCompletionBlock:(id /* block */)arg1;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackInitiated;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)presentAction;
- (void)presentPrivacyStatement;
- (id)response;
- (void)setAdController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setResponse:(id)arg1;
- (unsigned long long)skipThreshold;
- (void)skipped;

@end
