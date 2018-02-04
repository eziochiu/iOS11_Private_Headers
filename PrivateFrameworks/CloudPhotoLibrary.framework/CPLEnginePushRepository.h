/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject, CPLBatchExtractionStrategyStorage> {
    CPLBatchExtractionStrategy * _extractionStrategy;
    NSString * _lastStrategyName;
    NSMutableDictionary * _propertiesPerClass;
}

@property (nonatomic, readonly) unsigned long long countOfChanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CPLBatchExtractionStrategy *extractionStrategy;
@property (nonatomic, readonly) bool hasChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_completeChange:(id)arg1;
- (id)_propertiesForChange:(id)arg1;
- (id)allChanges;
- (id)allChangesWithClass:(Class)arg1 changeType:(unsigned long long)arg2;
- (id)allChangesWithClass:(Class)arg1 relatedIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 secondaryIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 trashed:(bool)arg2;
- (id)allNonDeletedChangesWithClass:(Class)arg1;
- (id)changeWithIdentifier:(id)arg1;
- (unsigned long long)countOfChanges;
- (bool)deleteAllChangesWithError:(id*)arg1;
- (bool)discardChangeWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)extractionStrategy;
- (bool)hasChanges;
- (bool)hasSomeChangeWithIdentifier:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (bool)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 overwrittenRecord:(bool*)arg3 error:(id*)arg4;
- (bool)reinjectExtractedBatch:(id)arg1 overwrittenRecordIdentifiers:(id*)arg2 error:(id*)arg3;
- (bool)removeChange:(id)arg1 error:(id*)arg2;
- (void)setExtractionStrategy:(id)arg1;
- (id)status;
- (bool)storeChange:(id)arg1 uploadIdentifier:(id)arg2 error:(id*)arg3;
- (bool)storeExtractedBatch:(id)arg1 error:(id*)arg2;
- (id)storedExtractedBatch;

@end