/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProxiedCrashCopierClient.framework/ProxiedCrashCopierClient
 */

@interface PCCXPCClient : NSObject

- (id)realClient;
- (void)requestLogTransferFor:(long long)arg1 onCompletion:(id /* block */)arg2;
- (void)requestMetadataUpdateDebug;
- (void)sendTaskingUpdateDebugFor:(id)arg1;

@end
