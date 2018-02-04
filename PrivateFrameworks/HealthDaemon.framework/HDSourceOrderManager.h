/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSourceOrderManager : NSObject {
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDDatabaseValueCache * _sourceOrdersForTypeCache;
}

+ (id)_defaultOrderingWithSources:(id)arg1;

- (void).cxx_destruct;
- (bool)_addOrderedSource:(id)arg1 objectType:(id)arg2 transactionCache:(id)arg3 database:(id)arg4 error:(id*)arg5;
- (id)_defaultSourceCacheItemWithTransactionCache:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)_insertCodableObjectTypeSourceOrder:(id)arg1 transactionCache:(id)arg2 syncStore:(id)arg3 database:(id)arg4 error:(id*)arg5;
- (id)_mergedOrderedSourcesForExistingOrder:(id)arg1 codableSourceOrder:(id)arg2 incomingSources:(id)arg3;
- (id)_orderedSourceIDsForOrderedSources:(id)arg1 sourcesByID:(id)arg2 objectType:(id)arg3 transactionCache:(id)arg4 database:(id)arg5 error:(id*)arg6;
- (id)_sourceCacheItemForObjectType:(id)arg1 error:(id*)arg2;
- (id)_sourceCacheItemForObjectType:(id)arg1 transactionCache:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (id)_sourceCacheItemFromOrderedIDs:(id)arg1 userOrdered:(bool)arg2 transactionCache:(id)arg3 database:(id)arg4 error:(id*)arg5;
- (id)_sourcesForCodableSourceOrder:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)_updateOrderedSources:(id)arg1 objectType:(id)arg2 userOrdered:(bool)arg3 error:(id*)arg4;
- (bool)addOrderedSource:(id)arg1 objectTypes:(id)arg2 error:(id*)arg3;
- (bool)createSourceOrdersWithCodables:(id)arg1 syncStore:(id)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1;
- (id)orderedSourceIDsForObjectType:(id)arg1 bundleIdentifierMapping:(id)arg2 userOrdered:(bool*)arg3 error:(id*)arg4;
- (id)orderedSourcesForObjectType:(id)arg1 error:(id*)arg2;
- (void)resetCacheInDatabase:(id)arg1;
- (bool)resetCacheWithError:(id*)arg1;
- (bool)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 error:(id*)arg3;

@end