/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation {
    NSString * _APIToken;
    id /* block */  _fetchWebAuthTokenCompletionBlock;
    NSString * _webAuthToken;
}

@property (nonatomic, copy) NSString *APIToken;
@property (nonatomic, copy) id /* block */ fetchWebAuthTokenCompletionBlock;
@property (nonatomic, copy) NSString *webAuthToken;

- (void).cxx_destruct;
- (id)APIToken;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (id)activityCreate;
- (id /* block */)fetchWebAuthTokenCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithAPIToken:(id)arg1;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setAPIToken:(id)arg1;
- (void)setFetchWebAuthTokenCompletionBlock:(id /* block */)arg1;
- (void)setWebAuthToken:(id)arg1;
- (id)webAuthToken;

@end
