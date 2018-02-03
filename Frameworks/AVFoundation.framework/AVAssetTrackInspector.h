/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {
    NSArray * _cachedMediaCharacteristics;
    long long  _synthesizeMediaCharacteristicsOnce;
    AVWeakReference * _weakReference;
}

@property (nonatomic, readonly) long long alternateGroupID;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (getter=isDecodable, nonatomic, readonly) bool decodable;
@property (nonatomic, readonly) long long defaultAlternateGroupID;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } dimensions;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) float estimatedDataRate;
@property (getter=isExcludedFromAutoselectionInTrackGroup, nonatomic, readonly) bool excludedFromAutoselectionInTrackGroup;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (getter=_figAssetTrack, nonatomic, readonly) struct OpaqueFigAssetTrack { }*figAssetTrack;
@property (getter=_figMediaType, nonatomic, readonly) unsigned int figMediaType;
@property (getter=_figTrackReader, nonatomic, readonly) struct OpaqueFigTrackReader { }*figTrackReader;
@property (nonatomic, readonly) NSArray *formatDescriptions;
@property (nonatomic, readonly) bool hasProtectedContent;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) long long layer;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSDictionary *loudnessInfo;
@property (nonatomic, readonly) NSArray *mediaCharacteristics;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } mediaDecodeTimeRange;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } mediaPresentationTimeRange;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minSampleDuration;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) int naturalTimeScale;
@property (nonatomic, readonly) float nominalFrameRate;
@property (nonatomic, readonly) int playabilityValidationResult;
@property (getter=isPlayable, nonatomic, readonly) bool playable;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) long long provisionalAlternateGroupID;
@property (nonatomic, readonly) bool requiresFrameReordering;
@property (nonatomic, readonly, copy) NSArray *segments;
@property (getter=isSelfContained, nonatomic, readonly) bool selfContained;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic, readonly) long long totalSampleDataLength;
@property (nonatomic, readonly) int trackID;
@property (getter=_trackReferences, nonatomic, readonly) NSDictionary *trackReferences;

+ (id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

- (struct OpaqueFigAssetTrack { }*)_figAssetTrack;
- (unsigned int)_figMediaType;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2;
- (id)_trackReferences;
- (id)_weakReference;
- (long long)alternateGroupID;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)defaultAlternateGroupID;
- (struct CGSize { double x1; double x2; })dimensions;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (id)formatDescriptions;
- (bool)hasProtectedContent;
- (id)init;
- (bool)isDecodable;
- (bool)isEnabled;
- (bool)isExcludedFromAutoselectionInTrackGroup;
- (bool)isPlayable;
- (bool)isSelfContained;
- (id)languageCode;
- (long long)layer;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)locale;
- (id)loudnessInfo;
- (id)mediaCharacteristics;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaDecodeTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaPresentationTimeRange;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)naturalTimeScale;
- (float)nominalFrameRate;
- (int)playabilityValidationResult;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (long long)provisionalAlternateGroupID;
- (bool)requiresFrameReordering;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)totalSampleDataLength;
- (int)trackID;

@end