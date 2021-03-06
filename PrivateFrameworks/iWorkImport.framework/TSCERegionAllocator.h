/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERegionAllocator : NSObject {
    unsigned int  mBlockOffset;
    struct TSCERegionNode { unsigned long long x1; struct TSCERegionNode {} *x2; void *x3; } * mCurBlock;
    struct TSCERegionNode { unsigned long long x1; struct TSCERegionNode {} *x2; void *x3; } * mHead;
    struct _NSZone { } * mZone;
}

- (void*)calloc:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithInitialCapacity:(unsigned long long)arg1;
- (void*)malloc:(unsigned long long)arg1;
- (void)reset;
- (struct _NSZone { }*)zone;

@end
