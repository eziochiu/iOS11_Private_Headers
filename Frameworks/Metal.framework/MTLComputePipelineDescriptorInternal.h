/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {
    struct MTLComputePipelineDescriptorPrivate { 
        NSString *label; 
        <MTLFunction> *computeFunction; 
        bool threadGroupSizeIsMultipleOfThreadExecutionWidth; 
        MTLStageInputOutputDescriptor *stageInputDescriptor; 
        NSDictionary *driverCompilerOptions; 
        MTLPipelineBufferDescriptorArrayInternal *buffers; 
        <MTLPipelineLibrary> *pipelineLibrary; 
    }  _private;
}

- (const struct MTLComputePipelineDescriptorPrivate { id x1; bool x2; id x3; id x4; }*)_descriptorPrivate;
- (id)buffers;
- (id)computeFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)driverCompilerOptions;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)newSerializedComputeData;
- (id)pipelineLibrary;
- (void)reset;
- (void)setComputeFunction:(id)arg1;
- (void)setDriverCompilerOptions:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPipelineLibrary:(id)arg1;
- (void)setStageInputDescriptor:(id)arg1;
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(bool)arg1;
- (id)stageInputDescriptor;
- (bool)threadGroupSizeIsMultipleOfThreadExecutionWidth;
- (void)validateWithDevice:(id)arg1;

@end
