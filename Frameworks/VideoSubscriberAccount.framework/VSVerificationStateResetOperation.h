/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSVerificationStateResetOperation : VSAsyncOperation {
    VSAuditToken * _auditToken;
    VSStoreURLBag * _bag;
    NSURLSessionTask * _resetStateTask;
    VSOptional * _result;
}

@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic, retain) VSStoreURLBag *bag;
@property (nonatomic, retain) NSURLSessionTask *resetStateTask;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (void)_resetVerificationStateWithURL:(id)arg1;
- (id)auditToken;
- (id)bag;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (id)resetStateTask;
- (id)result;
- (void)setAuditToken:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setResetStateTask:(id)arg1;
- (void)setResult:(id)arg1;

@end
