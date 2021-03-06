/* made by EzioChiu.
 */

@protocol FCCKDatabaseRecordMiddleware <NSObject>

@required

- (CKRecord *)clientRecord:(CKRecord *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (CKRecordID *)clientRecordID:(CKRecordID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (NSString *)clientRecordType:(NSString *)arg1 withRecordID:(CKRecordID *)arg2 inDatabase:(FCCKPrivateDatabase *)arg3 error:(id*)arg4;
- (CKRecordZone *)clientRecordZone:(CKRecordZone *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (CKRecordZoneID *)clientRecordZoneID:(CKRecordZoneID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (CKRecord *)serverRecord:(CKRecord *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (CKRecordID *)serverRecordID:(CKRecordID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (NSString *)serverRecordType:(NSString *)arg1 withRecordID:(CKRecordID *)arg2 inDatabase:(FCCKPrivateDatabase *)arg3 error:(id*)arg4;
- (CKRecordZone *)serverRecordZone:(CKRecordZone *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (CKRecordZoneID *)serverRecordZoneID:(CKRecordZoneID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;

@end
