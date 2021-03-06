/* made by EzioChiu.
 */

@protocol CPLLibraryManagerImplementation <CPLPlatformImplementation>

@required

- (void)acknowledgeChangedStatuses:(NSArray *)arg1;
- (void)addStatusChangesForRecordsWithIdentifiers:(NSArray *)arg1 persist:(bool)arg2;
- (void)beginDownloadForResource:(void *)arg1 clientBundleID:(void *)arg2 highPriority:(void *)arg3 proposedTaskIdentifier:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: CPLResource *, NSString *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLResourceTransferTask *, void*
- (void)beginInMemoryDownloadOfResource:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CPLResource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLResourceTransferTask *, void*
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)closeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deactivateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)diagnosticsEnabled;
- (void)disableMingling;
- (void)disableSynchronizationWithReason:(NSString *)arg1;
- (void)enableMingling;
- (void)enableSynchronizationWithReason:(NSString *)arg1;
- (void)getChangedStatusesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getMappedIdentifiersForIdentifiers:(void *)arg1 inAreLocalIdentifiers:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getStatusForRecordsWithIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getSystemBudgetsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)openWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, NSString *, NSURL *, void*
- (void)publishResource:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: CPLResource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSDate *, NSError *, void*
- (void)rampingRequestForResourceType:(void *)arg1 numRequested:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, NSError *, void*
- (void)resetStatus;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (void)setShouldOverride:(bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)startSyncSession;

@optional

- (void)addInfoToLog:(NSString *)arg1;
- (void)barrier;
- (void)blockEngineElement:(NSString *)arg1;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(void *)arg1 related:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)compactFileCacheWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteResources:(void *)arg1 checkServerIfNecessary:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDictionary *, void*
- (void)getCloudCacheForRecordWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLRecordChange *, NSError *, void*
- (void)getListOfComponentsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getResourcesForItemWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)getStatusArrayForComponents:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getStatusForComponents:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)reportSetting:(NSString *)arg1 hasBeenSetToValue:(NSString *)arg2;
- (void)resetCacheWithOption:(void *)arg1 reason:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unblockEngineElement:(NSString *)arg1;
- (void)unblockEngineElementOnce:(NSString *)arg1;

@end
