/* made by EzioChiu.
 */

@protocol NPKTransientPassAssertionConnectionDelegate <NSObject>

@required

- (void)connection:(NPKTransientPassAssertionConnection *)arg1 hasNewTransientPassRequest:(NPKTransientPassRequest *)arg2;
- (void)connectionDied:(NPKTransientPassAssertionConnection *)arg1;
- (void)handleNewConnection:(NPKTransientPassAssertionConnection *)arg1;

@end
