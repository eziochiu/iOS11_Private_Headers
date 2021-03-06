/* made by EzioChiu.
 */

@protocol MTSyncServiceDelegate <NSObject>

@required

- (void)service:(id <MTSyncService>)arg1 didBeginSyncOperation:(id <MTSyncOperation>)arg2;
- (void)service:(id <MTSyncService>)arg1 didCompleteSyncOperation:(id <MTSyncOperation>)arg2;
- (void)service:(id <MTSyncService>)arg1 didFailSyncOperation:(id <MTSyncOperation>)arg2 withError:(NSError *)arg3;
- (void)service:(id <MTSyncService>)arg1 didRequestSyncOperation:(id <MTSyncOperation>)arg2;
- (void)service:(id <MTSyncService>)arg1 didScheduleRetryOfSyncOperation:(id <MTSyncOperation>)arg2 forError:(NSError *)arg3;

@end
