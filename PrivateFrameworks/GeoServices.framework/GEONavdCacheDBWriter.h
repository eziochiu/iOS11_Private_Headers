/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavdCacheDBWriter : GEODBWriter {
    struct sqlite3_stmt { } * _sqlDeleteAllRows;
    struct sqlite3_stmt { } * _sqlDeleteRowForRowID;
    struct sqlite3_stmt { } * _sqlInsertCache;
    struct sqlite3_stmt { } * _sqlUpdateCache;
}

- (void)_createCacheTable;
- (void)_deleteAllRows;
- (void)_deleteRowsWithRowIDs:(id)arg1;
- (long long)_insertWithKey:(id)arg1 value:(id)arg2;
- (void)_openIfNecessary;
- (bool)_updateRowId:(long long)arg1 withKey:(id)arg2 value:(id)arg3;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)performStatementPreparationTasks;
- (void)performTableCreationTasks;

@end
