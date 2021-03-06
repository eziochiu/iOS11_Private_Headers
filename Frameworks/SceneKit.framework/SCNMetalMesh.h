/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalMesh : NSObject {
    NSArray * _buffers;
    NSArray * _elements;
    long long  _mutabilityTimestamp;
    MTLStageInputOutputDescriptor * _stageDescriptor;
    MTLVertexDescriptor * _tessellationVertexDescriptor;
    unsigned long long  _tessellationVertexLayoutHash;
    MTLVertexDescriptor * _vertexDescriptor;
    <MTLBuffer> * _volatileBuffer;
    unsigned long long  vertexLayoutHash;
    long long  verticesCount;
    long long  volatileOffset;
    unsigned long long  volatileSize;
    long long  volatileStride;
}

@property (nonatomic, copy) NSArray *buffers;
@property (nonatomic, copy) NSArray *elements;
@property (nonatomic) long long mutabilityTimestamp;
@property (nonatomic, retain) MTLStageInputOutputDescriptor *stageDescriptor;
@property (nonatomic, readonly) MTLVertexDescriptor *tessellationVertexDescriptor;
@property (nonatomic, readonly) unsigned long long tessellationVertexLayoutHash;
@property (nonatomic, retain) MTLVertexDescriptor *vertexDescriptor;
@property (nonatomic) unsigned long long vertexLayoutHash;
@property (nonatomic) long long verticesCount;
@property (nonatomic, retain) <MTLBuffer> *volatileBuffer;
@property (nonatomic) long long volatileOffset;
@property (nonatomic) unsigned long long volatileSize;
@property (nonatomic) long long volatileStride;

- (id)bufferForAttribute:(long long)arg1;
- (id)buffers;
- (void)dealloc;
- (id)description;
- (id)elements;
- (long long)mutabilityTimestamp;
- (void)setBuffers:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setMutabilityTimestamp:(long long)arg1;
- (void)setStageDescriptor:(id)arg1;
- (void)setVertexDescriptor:(id)arg1;
- (void)setVertexLayoutHash:(unsigned long long)arg1;
- (void)setVerticesCount:(long long)arg1;
- (void)setVolatileBuffer:(id)arg1;
- (void)setVolatileOffset:(long long)arg1;
- (void)setVolatileSize:(unsigned long long)arg1;
- (void)setVolatileStride:(long long)arg1;
- (id)stageDescriptor;
- (id)tessellationVertexDescriptor;
- (unsigned long long)tessellationVertexLayoutHash;
- (id)vertexDescriptor;
- (unsigned long long)vertexLayoutHash;
- (long long)verticesCount;
- (id)volatileBuffer;
- (long long)volatileOffset;
- (unsigned long long)volatileSize;
- (long long)volatileStride;

@end
