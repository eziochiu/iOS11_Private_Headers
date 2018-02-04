/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLBatchExtractionStep : NSObject {
    <CPLBatchExtractionStrategyStorage> * _storage;
}

@property (nonatomic, retain) <CPLBatchExtractionStrategyStorage> *storage;

- (void).cxx_destruct;
- (id)description;
- (bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithStorage:(id)arg1;
- (void)reset;
- (void)resetConditionallyFromNewIncomingChange:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)shortDescription;
- (bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (id)storage;

@end
