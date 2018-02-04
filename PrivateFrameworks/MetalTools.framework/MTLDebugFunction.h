/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugFunction : MTLToolsFunction {
    MTLFunctionConstantValues * _constantValues;
}

@property (nonatomic, retain) MTLFunctionConstantValues *constantValues;

- (id)constantValues;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (id)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (void)setConstantValues:(id)arg1;

@end