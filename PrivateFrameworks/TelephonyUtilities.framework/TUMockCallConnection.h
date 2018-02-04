/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMockCallConnection : NSObject {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (void)endConnectionAndBlockUntilAllMessagesSent;
- (id)init;
- (void)setConnection:(id)arg1;
- (void)updateMockCallWithProxyCall:(id)arg1;

@end
