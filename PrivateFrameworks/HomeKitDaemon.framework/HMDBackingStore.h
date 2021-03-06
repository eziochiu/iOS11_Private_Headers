/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStore : HMFObject <HMFLogging> {
    <HMDBackingStoreObjectProtocol> * _delegate;
    HMDHome * _home;
    HMDHomeManager * _homeManager;
    HMDBackingStoreLocal * _local;
    HMDObjectLookup * _lookup;
    CKRecordID * _root;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDBackingStoreObjectProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, retain) HMDBackingStoreLocal *local;
@property (nonatomic, retain) HMDObjectLookup *lookup;
@property (nonatomic, readonly) CKRecordID *root;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)allowedTypes;
+ (id)currentDevice;
+ (id)flushBackingStore;
+ (id)logCategory;
+ (id)resetBackingStore;
+ (void)start;

- (void).cxx_destruct;
- (id)__fetchWithGroup:(id)arg1 uuids:(id)arg2 error:(id*)arg3;
- (void)_fetchObjects:(bool)arg1 migration:(bool)arg2 result:(id /* block */)arg3;
- (void)commit:(id)arg1 run:(bool)arg2 save:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)delegate;
- (id)description;
- (id)dumpState;
- (void)fetchAllObjects:(id /* block */)arg1;
- (void)fetchMigratedObjects:(id /* block */)arg1;
- (id)home;
- (id)homeManager;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 home:(id)arg2;
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2;
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2 home:(id)arg3;
- (id)local;
- (id)logIdentifier;
- (id)lookup;
- (void)markAsMigrated:(id /* block */)arg1;
- (void)registerObject:(id)arg1 forUUID:(id)arg2;
- (id)root;
- (void)saveToPersistentStoreWithReason:(id)arg1 incrementGeneration:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setLocal:(id)arg1;
- (void)setLookup:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)submit:(id)arg1;
- (void)submitBlock:(id /* block */)arg1;
- (id)transaction:(id)arg1 options:(id)arg2;
- (id)transactionWithOptions:(id)arg1;
- (id)uuid;

@end
