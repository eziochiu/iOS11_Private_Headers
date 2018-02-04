/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLNewAssetExtractionStep : CPLBatchExtractionStep {
    NSMutableSet * _alreadySeenMasterIdentifiers;
    unsigned long long  _maximumCount;
}

@property (nonatomic, readonly) unsigned long long maximumCount;

- (void).cxx_destruct;
- (bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithStorage:(id)arg1 maximumCount:(unsigned long long)arg2;
- (unsigned long long)maximumCount;
- (void)reset;
- (id)shortDescription;
- (bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;

@end
