/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationServiceExtension : NSObject <UNSNotificationServiceExtensionSessionDelegate> {
    NSExtension * _extension;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sessionBySessionUUID;
}

+ (void)extensionForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_initWithExtension:(id)arg1;
- (void)_setSession:(id)arg1 forSessionUUID:(id)arg2;
- (void)_setupExtension;
- (id)_takeSessionForSessionUUID:(id)arg1;
- (void)beginSessionWithCompletionHandler:(id /* block */)arg1;
- (id)proxy;
- (void)session:(id)arg1 wasCancelledWithError:(id)arg2;

@end
