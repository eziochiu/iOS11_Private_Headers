/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteEntity : NSObject <SSSQLiteEntity> {
    SSSQLiteDatabase * _database;
    long long  _persistentID;
}

@property (nonatomic, readonly) SSSQLiteDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool existsInDatabase;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long persistentID;
@property (readonly) Class superclass;

+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4;
+ (bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 database:(id)arg4;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)databasePropertyToGetClientProperty:(id)arg1;
+ (id)databasePropertyToSetClientProperty:(id)arg1;
+ (id)databaseTable;
+ (id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (Class)memoryEntityClass;
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;

- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;
- (id)copyValuesForClientProperties:(id)arg1;
- (id)copyXPCEncodedValuesForClientProperties:(id)arg1;
- (id)database;
- (bool)deleteFromDatabase;
- (bool)existsInDatabase;
- (void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithPersistentID:(long long)arg1 inDatabase:(id)arg2;
- (id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2;
- (long long)persistentID;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (bool)setValuesWithDictionary:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end