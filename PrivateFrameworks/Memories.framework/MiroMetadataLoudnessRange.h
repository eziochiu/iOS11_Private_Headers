/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMetadataLoudnessRange : MiroMetadataRange

@property (nonatomic, readonly) float loudness;
@property (nonatomic, readonly) float peakValue;

- (float)loudness;
- (float)peakValue;

@end
