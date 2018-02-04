/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroSmartMusicUtilities : NSObject

+ (id)_peakAndLoudnessForRendition:(id)arg1;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })averageBarDurationForFlexAudioClip:(id)arg1;
+ (double)averageBarDurationForFlexAudioClipInSeconds:(id)arg1;
+ (id)beatMetadataItemForBeatIndex:(long long)arg1 andBarIndex:(long long)arg2 nearBeatMetadataItem:(id)arg3 fromBeatMetadataItems:(id)arg4;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })durationOfIntroForFlexAudioClip:(id)arg1;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })durationOfOutroForFlexAudioClip:(id)arg1;
+ (id)metadataItemAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromMetadataItems:(id)arg2;
+ (id)metadataItemAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromMetadataItems:(id)arg2 findNearest:(bool)arg3;
+ (double)normalizeGainForRendition:(id)arg1;

@end