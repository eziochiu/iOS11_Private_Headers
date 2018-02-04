/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventTable : SSEventsTableBase

+ (id)_eventsTableName;
+ (id)databasePath;

- (bool)_migrateToVersion1;
- (bool)_migrateToVersion2;
- (bool)_migrateToVersion3;
- (bool)_setupDatabase;

@end
