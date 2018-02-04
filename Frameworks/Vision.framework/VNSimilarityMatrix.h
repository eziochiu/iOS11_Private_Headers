/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSimilarityMatrix : NSObject {
    struct shared_ptr<vision::mod::SimilarityMatrixAbstract> { 
        struct SimilarityMatrixAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_MatrixImpl;
}

@property (getter=getImpl, nonatomic, readonly) void*impl;
@property (getter=getMatrixSize, nonatomic, readonly) unsigned long long matrixSize;
@property (getter=getMaximumValidMatrixDistance, nonatomic, readonly) float maximumValidMatrixDistance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addDescriptors:(id)arg1 error:(id*)arg2;
- (bool)containsId:(unsigned long long)arg1;
- (id)createCopyForDescriptorIds:(id)arg1;
- (void)deleteDescriptors:(id)arg1;
- (id)getAllDistancesForId:(unsigned long long)arg1;
- (id)getDescriptorIdsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (float)getDistanceBetweenDescriptor:(unsigned long long)arg1 andDescriptor:(unsigned long long)arg2;
- (void*)getImpl;
- (unsigned long long)getMatrixSize;
- (float)getMaximumValidMatrixDistance;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;

@end