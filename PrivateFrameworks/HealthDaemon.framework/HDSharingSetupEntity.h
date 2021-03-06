/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSharingSetupEntity : HDHealthEntity

+ (id)_sampleTypesForSetupWithPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)columnsDefinition;
+ (bool)createShareWithProfile:(id)arg1 identifier:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (id)databaseTable;
+ (bool)enumerateSharesWithProfile:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
+ (id)privateSubEntities;
+ (long long)protectionClass;

@end
