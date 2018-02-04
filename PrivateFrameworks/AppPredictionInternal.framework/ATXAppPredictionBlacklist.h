/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXAppPredictionBlacklist : NSObject {
    NSSet * _blacklist;
    id  _blacklistNotificationToken;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_listenForUpdates;
- (void)_resetBlacklistWithSet:(id)arg1;
- (void)_updateBlacklist;
- (void)dealloc;
- (id)disabledBundleIds;
- (id)init;

@end
