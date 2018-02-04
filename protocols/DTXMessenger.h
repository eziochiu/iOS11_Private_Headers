/* made by EzioChiu.
 */

@protocol DTXMessenger <NSObject>

@required

- (void)cancel;
- (NSString *)label;
- (void)registerDisconnectHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sendControlAsync:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 7: DTXMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DTXMessage *, void*
- (void)sendControlSync:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 7: DTXMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DTXMessage *, void*
- (void)sendMessage:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 7: DTXMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DTXMessage *, void*
- (bool)sendMessageAsync:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 7: DTXMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DTXMessage *, void*
- (void)sendMessageSync:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 7: DTXMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DTXMessage *, void*
- (void)setDispatchTarget:(id <DTXAllowedRPC>)arg1;
- (void)setLabel:(NSString *)arg1;
- (void)setMessageHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DTXMessage *, void*

@end