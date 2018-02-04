/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICServerChangeToken : NSManagedObject <ICLoggable> {
    CKServerChangeToken * _ckServerChangeToken;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, retain) CKServerChangeToken *ckServerChangeToken;
@property (nonatomic, retain) NSData *ckServerChangeTokenData;
@property (nonatomic) long long databaseScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *ownerName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;
@property (nonatomic, retain) NSString *zoneName;

+ (id)addServerChangeTokenForAccount:(id)arg1 ckServerChangeToken:(id)arg2 zoneID:(id)arg3 databaseScope:(long long)arg4 context:(id)arg5;
+ (id)serverChangeTokenForAccount:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 context:(id)arg4;
+ (id)serverChangeTokensMatchingPredicate:(id)arg1 inContext:(id)arg2;

- (void).cxx_destruct;
- (id)ckServerChangeToken;
- (long long)databaseScope;
- (void)didTurnIntoFault;
- (id)ic_loggingValues;
- (void)setCkServerChangeToken:(id)arg1;
- (void)setDatabaseScope:(long long)arg1;
- (id)zoneID;

@end