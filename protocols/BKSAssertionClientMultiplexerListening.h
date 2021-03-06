/* made by EzioChiu.
 */

@protocol BKSAssertionClientMultiplexerListening <NSObject>

@required

- (void)assertionQueue_handleDestroyEvent:(BKSAssertionEvent *)arg1;
- (void)assertionQueue_handleEvent:(BKSAssertionEvent *)arg1 ofType:(unsigned long long)arg2;
- (void)assertionQueue_handleMessage:(NSObject<OS_xpc_object> *)arg1;
- (void)connectionWasDestroyed;
- (NSString *)supportedAssertionType;

@end
