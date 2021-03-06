/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteStatement : NSObject {
    bool  _cache;
    HDSQLiteDatabase * _database;
    NSString * _sql;
}

@property (nonatomic, readonly) HDSQLiteDatabase *database;

- (void).cxx_destruct;
- (id)database;
- (id)description;
- (bool)enumerateStatementWithError:(id*)arg1 bindingHandler:(id /* block */)arg2 block:(id /* block */)arg3;
- (void)finish;
- (id)initWithSQL:(id)arg1 database:(id)arg2;
- (bool)performStatementWithError:(id*)arg1 bindingHandler:(id /* block */)arg2;

@end
