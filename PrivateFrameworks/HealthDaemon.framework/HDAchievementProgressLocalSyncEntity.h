/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementProgressLocalSyncEntity : HDKeyValueSyncEntity

+ (id)_mergedValuesForInsertionForPairs:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)category;
+ (int)nanoSyncObjectType;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (long long)syncEntityType;

@end