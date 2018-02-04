/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam {
    NSData * _credential;
}

@property (nonatomic, retain) NSData *credential;

+ (id)paramWithCredential:(id)arg1;

- (void).cxx_destruct;
- (id)credential;
- (id)description;
- (void)setCredential:(id)arg1;

@end
