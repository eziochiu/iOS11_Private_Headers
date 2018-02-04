/* made by EzioChiu.
 */

@protocol TUConversationManagerXPCClient <NSObject>

@required

- (oneway void)updateConversationsByGroupUUID:(NSDictionary *)arg1;

@end
