/* made by EzioChiu.
 */

@protocol FBSystemServiceServer <NSObject>

@required

- (void)sendMessage:(FBSXPCMessage *)arg1 withType:(long long)arg2 toClients:(NSSet *)arg3;

@end
