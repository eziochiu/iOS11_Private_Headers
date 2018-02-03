/* made by EzioChiu.
 */

@protocol FBSSystemServiceClientDelegate <NSObject>

@required

- (void)client:(FBSSystemServiceClient *)arg1 configureConnectMessage:(FBSXPCMessage *)arg2;
- (void)client:(FBSSystemServiceClient *)arg1 handleError:(NSError *)arg2;
- (void)client:(FBSSystemServiceClient *)arg1 handleMessage:(FBSXPCMessage *)arg2 withType:(long long)arg3;

@end
