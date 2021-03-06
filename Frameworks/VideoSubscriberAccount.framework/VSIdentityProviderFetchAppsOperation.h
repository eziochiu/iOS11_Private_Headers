/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProviderFetchAppsOperation : VSAsyncOperation {
    VSAuditToken * _auditToken;
    VSOptional * _identityProviderID;
    NSOperationQueue * _privateQueue;
    VSOptional * _result;
}

@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic, retain) VSOptional *identityProviderID;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (id)auditToken;
- (void)cancel;
- (void)executionDidBegin;
- (id)identityProviderID;
- (id)init;
- (id)privateQueue;
- (id)result;
- (void)setAuditToken:(id)arg1;
- (void)setIdentityProviderID:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setResult:(id)arg1;

@end
