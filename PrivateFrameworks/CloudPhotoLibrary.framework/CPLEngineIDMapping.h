/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (bool)addAddEventForRecordWithLocalIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addCloudIdentifier:(id)arg1 forLocalIdentifier:(id)arg2 isFinal:(bool)arg3 direction:(unsigned long long)arg4 error:(id*)arg5;
- (bool)addDeleteEventForRecordWithLocalIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3;
- (id)cloudIdentifierForLocalIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (bool)hasPendingIdentifiers;
- (id)localIdentifierForCloudIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (id)localIdentifierForCloudIdentifierIncludeRemappedRecords:(id)arg1;
- (bool)markAllPendingIdentifiersAsFinalWithError:(id*)arg1;
- (bool)removeMappingForCloudIdentifier:(id)arg1 error:(id*)arg2;
- (bool)resetAllFinalCloudIdentifiersWithError:(id*)arg1;
- (bool)resetWithError:(id*)arg1;
- (bool)setFinalCloudIdentifier:(id)arg1 forPendingCloudIdentifier:(id)arg2 error:(id*)arg3;
- (id)setupCloudIdentifier:(id)arg1 forLocalIdentifier:(id)arg2 isFinal:(bool)arg3 direction:(unsigned long long)arg4 error:(id*)arg5;

@end
