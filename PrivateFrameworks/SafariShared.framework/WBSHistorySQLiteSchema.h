/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistorySQLiteSchema : NSObject {
    WBSHistoryCrypto * _crypto;
    WBSSQLiteDatabase * _database;
}

- (void).cxx_destruct;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_10;
- (int)_migrateToSchemaVersion_11;
- (int)_migrateToSchemaVersion_12;
- (int)_migrateToSchemaVersion_13;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_5;
- (int)_migrateToSchemaVersion_6;
- (int)_migrateToSchemaVersion_7;
- (int)_migrateToSchemaVersion_8;
- (int)_migrateToSchemaVersion_9;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1 crypto:(id)arg2;
- (int)migrateToCurrentSchemaVersionIfNeeded;

@end
