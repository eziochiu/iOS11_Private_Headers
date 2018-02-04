/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchSequenceManager : NSObject {
    NSMapTable * _appLaunchSequence;
    _ATXDataStore * _datastore;
    NSObject<OS_dispatch_queue> * _syncQueue;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)decayAllLaunchSequencesWithHalfLife:(double)arg1;
- (void)deleteAllLaunchesForBundles:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)initWithInMemoryStore;
- (id)launchSequenceForBundle:(id)arg1;
- (id)syncQueue;

@end
