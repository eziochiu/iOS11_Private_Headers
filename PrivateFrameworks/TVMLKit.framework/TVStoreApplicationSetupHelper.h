/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVStoreApplicationSetupHelper : NSObject <ISURLOperationDelegate> {
    IKURLBagCache * _bagCache;
    NSURL * _defaultBootURL;
    id /* block */  _loadBagOperationCompletion;
}

@property (nonatomic, readonly) IKURLBagCache *bagCache;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSURL *defaultBootURL;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ loadBagOperationCompletion;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) Class superclass;

+ (id)_parsedQueryParametersForURL:(id)arg1;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 appLocalBootURL:(id)arg3;

- (void).cxx_destruct;
- (id)_bootURLWithBagBootURL:(id)arg1;
- (void)_cancelLoadURLBagOperation:(id)arg1;
- (id)bagCache;
- (void)dealloc;
- (id)defaultBootURL;
- (id)init;
- (id)initWithDefaultBootURL:(id)arg1;
- (id)initWithDefaultBootURL:(id)arg1 bagCache:(id)arg2;
- (id /* block */)loadBagOperationCompletion;
- (void)obtainBootURLWithCompletion:(id /* block */)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)setDefaultBootURL:(id)arg1;
- (void)setLoadBagOperationCompletion:(id /* block */)arg1;

@end
