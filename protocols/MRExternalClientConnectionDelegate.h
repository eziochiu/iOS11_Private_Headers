/* made by EzioChiu.
 */

@protocol MRExternalClientConnectionDelegate <NSObject>

@optional

- (void)clientConnection:(MRExternalClientConnection *)arg1 didReceiveMessage:(MRProtocolMessage *)arg2;
- (void)clientDidDisconnect:(MRExternalClientConnection *)arg1;

@end
