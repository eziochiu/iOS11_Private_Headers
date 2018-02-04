/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdateAccountResponse : NSObject {
    unsigned long long  _credentialSource;
    NSString * _passwordEquivalentToken;
    SSAccount * _updatedAccount;
}

@property (nonatomic, readonly) unsigned long long credentialSource;
@property (nonatomic, readonly, copy) NSString *passwordEquivalentToken;
@property (nonatomic, readonly) SSAccount *updatedAccount;

- (void).cxx_destruct;
- (unsigned long long)credentialSource;
- (id)initWithUpdatedAccount:(id)arg1 credentialSource:(unsigned long long)arg2 passwordEquivalentToken:(id)arg3;
- (id)passwordEquivalentToken;
- (id)updatedAccount;

@end
