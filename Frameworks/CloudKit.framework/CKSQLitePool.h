/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLitePool : NSObject {
    NSMutableArray * _dbs;
    bool  _drainScheduled;
    id /* block */  _factory;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _traced;
}

@property (nonatomic, retain) NSMutableArray *dbs;
@property (nonatomic) bool drainScheduled;
@property (nonatomic, readonly) id /* block */ factory;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool traced;

- (void).cxx_destruct;
- (id)_acquireDatabaseWithError:(id*)arg1;
- (void)_closeDatabase:(id)arg1;
- (void)_drain;
- (id)_openDatabaseWithError:(id*)arg1;
- (void)_scheduleDrain;
- (id)acquireDatabase:(bool)arg1;
- (id)acquireDatabaseWithError:(id*)arg1;
- (void)closeAll;
- (id)dbs;
- (bool)drainScheduled;
- (id /* block */)factory;
- (id)initWithFactory:(id /* block */)arg1;
- (id)initWithFactory:(id /* block */)arg1 queueAttr:(id)arg2;
- (void)performWithDatabase:(id /* block */)arg1;
- (bool)performWithDatabase:(id /* block */)arg1 error:(id*)arg2;
- (id)queue;
- (void)releaseDatabase:(id)arg1;
- (void)setDbs:(id)arg1;
- (void)setDrainScheduled:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setTraced:(bool)arg1;
- (bool)traced;

@end