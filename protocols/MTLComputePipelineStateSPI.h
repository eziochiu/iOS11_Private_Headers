/* made by EzioChiu.
 */

@protocol MTLComputePipelineStateSPI <MTLComputePipelineState>

@required

- (unsigned int)getComputeKernelTelemetryID;
- (unsigned long long)staticThreadgroupMemoryLength;

@end
