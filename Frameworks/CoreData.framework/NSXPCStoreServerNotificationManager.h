/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStoreServerNotificationManager : NSObject {
    NSMutableDictionary * _generations;
    long long  _origin;
}

- (id)changesSinceGeneration:(id)arg1;
- (long long)currentGenerationForStore:(id)arg1;
- (id)currentGenerationTokenForStore:(id)arg1;
- (void)dealloc;
- (void)handleNotification:(id)arg1;
- (id)init;
- (void)registerContext:(id)arg1;
- (void)registerStore:(id)arg1;
- (void)unregisterContext:(id)arg1;
- (void)unregisterStore:(id)arg1;

@end
