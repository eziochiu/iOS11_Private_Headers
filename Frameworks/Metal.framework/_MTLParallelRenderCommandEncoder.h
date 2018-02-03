/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLParallelRenderCommandEncoder : NSObject <MTLParallelRenderCommandEncoder> {
    bool  _StatEnabled;
    _MTLCommandBuffer<MTLCommandBuffer> * _commandBuffer;
    id * _commandBuffers;
    unsigned long long  _commandBuffersCount;
    unsigned long long  _commandBuffersSize;
    <MTLDevice> * _device;
    unsigned long long  _globalTraceObjectID;
    NSString * _label;
    unsigned long long  _labelTraceID;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    unsigned long long  _numThisEncoder;
    <MTLCommandQueue> * _queue;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    bool  _retainedReferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (getter=getType, nonatomic, readonly) unsigned long long type;

- (id)_renderCommandEncoderCommon;
- (id)commandBuffer;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)endEncoding;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)globalTraceObjectID;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;
- (void)insertDebugSignpost:(id)arg1;
- (bool)isMemorylessRender;
- (id)label;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;

@end