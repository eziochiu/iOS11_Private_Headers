/* made by EzioChiu.
 */

@protocol ISStoreURLOperationDelegate <ISURLOperationDelegate>

@optional

- (void)operation:(ISStoreURLOperation *)arg1 didAuthenticateWithDSID:(NSNumber *)arg2;
- (bool)operation:(ISStoreURLOperation *)arg1 shouldSetStoreFrontID:(NSString *)arg2;

@end