/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLDataArrayBuffer : NSObject <TSDGLDataBufferAccessor> {
    unsigned long long  _GLDataBufferEntrySize;
    unsigned long long  _bufferCount;
    unsigned int  _bufferUsage;
    unsigned long long  _currentBufferIndex;
    unsigned long long  _dataTypeSizeInBytes;
    NSMutableArray * _vertexAttributes;
    NSMutableDictionary * mAttributeOffsetsDictionary;
    char * mGLData;
    bool  mGLDataBufferHasBeenSetup;
    unsigned int * mGLDataBuffers;
    long long * mNeedsUpdateFirstIndex;
    long long * mNeedsUpdateLastIndex;
    unsigned long long  mVertexCount;
}

@property (nonatomic, readonly) unsigned long long GLDataBufferEntrySize;
@property (nonatomic, readonly) unsigned long long bufferCount;
@property (nonatomic) unsigned long long currentBufferIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUpdatedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)GLDataBufferEntrySize;
- (char *)GLDataPointer;
- (struct { float x1; float x2; })GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; })GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; float x4; })GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addAllIndexesNeedUpdate;
- (void)addIndexNeedsUpdate:(long long)arg1;
- (void)addIndexRangeNeedsUpdate:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)bufferCount;
- (unsigned long long)currentBufferIndex;
- (void)dealloc;
- (id)description;
- (void)disableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)enableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (bool)hasUpdatedData;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 bufferCount:(unsigned long long)arg3;
- (unsigned long long)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned long long)arg2 component:(unsigned long long)arg3;
- (void)p_setupGLDataBufferIfNecessary;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setCurrentBufferIndex:(unsigned long long)arg1;
- (void)setGLPoint2D:(struct { float x1; float x2; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint3D:(struct { float x1; float x2; float x3; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)swapGLDataBuffers;
- (void)updateDataBufferIfNecessary;
- (unsigned long long)vertexCount;

@end