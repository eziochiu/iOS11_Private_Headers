/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUBufferImageAccumulationNode : NUImageAccumulationNode

@property (nonatomic, readonly) <NUMutablePurgeableBufferImage> *bufferImage;

- (id)_newImage;
- (id)bufferImage;

@end
