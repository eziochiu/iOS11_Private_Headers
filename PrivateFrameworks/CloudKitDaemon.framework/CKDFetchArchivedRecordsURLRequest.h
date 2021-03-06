/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchArchivedRecordsURLRequest : CKDURLRequest <CKDURLRequestPipelining> {
    NSSet * _desiredAssetKeys;
    NSMutableDictionary * _nodeErrorsByZoneID;
    NSDictionary * _optionsByRecordZoneID;
    id /* block */  _recordFetchedBlock;
    NSArray * _recordZoneIDs;
    NSMutableDictionary * _requestResultsByRecordZoneID;
    bool  _shouldFetchAssetContent;
    NSMutableDictionary * _zoneIDsByRequestOperationUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *desiredAssetKeys;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *nodeErrorsByZoneID;
@property (nonatomic, retain) NSDictionary *optionsByRecordZoneID;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic, retain) NSMutableDictionary *requestResultsByRecordZoneID;
@property (nonatomic, readonly) NSDictionary *resultsByRecordZoneID;
@property (nonatomic) bool shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *zoneErrorsByZoneID;
@property (nonatomic, retain) NSMutableDictionary *zoneIDsByRequestOperationUUID;

- (void).cxx_destruct;
- (id)_handleRecords:(id)arg1;
- (id)desiredAssetKeys;
- (id)generateRequestOperations;
- (id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2;
- (id)nodeErrorsByZoneID;
- (int)operationType;
- (id)optionsByRecordZoneID;
- (id /* block */)recordFetchedBlock;
- (id)recordZoneIDs;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestResultsByRecordZoneID;
- (id)resultsByRecordZoneID;
- (void)setDesiredAssetKeys:(id)arg1;
- (void)setNodeErrorsByZoneID:(id)arg1;
- (void)setOptionsByRecordZoneID:(id)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRequestResultsByRecordZoneID:(id)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setZoneIDsByRequestOperationUUID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneErrorsByZoneID;
- (id)zoneIDsByRequestOperationUUID;
- (id)zoneIDsToLock;

@end
