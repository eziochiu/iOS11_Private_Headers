/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAsset : NSObject {
    NSString * _configVersion;
    NSDictionary * _decodedInfo;
    NSString * _path;
    NSString * _resourcePath;
}

@property (nonatomic, readonly) NSString *CVTConfigPathNDAPI;
@property (nonatomic, readonly) float CVTThreshold;
@property (nonatomic, readonly) float CVTTwoShotDecisionWaitTime;
@property (nonatomic, readonly) float CVTTwoShotThreshold;
@property (nonatomic, readonly) NSString *VTFirstPassConfigPathNDAPI;
@property (nonatomic, readonly) float VTFirstPassThreshold;
@property (nonatomic, readonly) float VTSecondPass2ndChanceThreshold;
@property (nonatomic, readonly) NSString *VTSecondPassConfigPathNDAPI;
@property (nonatomic, readonly) NSString *VTSecondPassConfigPathRecognizer;
@property (nonatomic, readonly) unsigned long long VTSecondPassExtraSamplesAtStart;
@property (nonatomic, readonly) float VTSecondPassLoggingThreshold;
@property (nonatomic, readonly) float VTSecondPassRecognizerScoreScaleFactor;
@property (nonatomic, readonly) float VTSecondPassRecognizerThresholdOffset;
@property (nonatomic, readonly) NSString *VTSecondPassRecognizerToken;
@property (nonatomic, readonly) float VTSecondPassThreshold;
@property (nonatomic, readonly) bool VTSecondPassUserKeywordSpotting;
@property (nonatomic, readonly) NSString *configVersion;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *hashFromResourcePath;
@property (nonatomic, readonly) NSString *keywordDetectorConfigPathRecognizer;
@property (nonatomic, readonly) float keywordDetectorThreshold;
@property (nonatomic, readonly) float keywordDetectorWaitTimeSinceVT;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *resourcePath;
@property (nonatomic, readonly) NSString *speakerDetectorNDAPIConfigPath;
@property (nonatomic, readonly) float speakerDetectorRetrainTriggerThreshold;
@property (nonatomic, readonly) float speakerDetectorThreshold;

+ (id)assetForAssetType:(unsigned long long)arg1 resourcePath:(id)arg2 configVersion:(id)arg3;
+ (id)defaultFallBackAssetForVoiceTrigger;
+ (id)fallBackAssetResourcePath;
+ (id)hybridEndpointerAssetFilename;
+ (bool)isHybridEndpointerAvailableForCurrentPlatform;

- (void).cxx_destruct;
- (id)CVTConfigPathNDAPI;
- (float)CVTThreshold;
- (float)CVTTwoShotDecisionWaitTime;
- (float)CVTTwoShotThreshold;
- (id)VTFirstPassConfigPathNDAPI;
- (float)VTFirstPassThreshold;
- (float)VTSecondPass2ndChanceThreshold;
- (id)VTSecondPassConfigPathNDAPI;
- (id)VTSecondPassConfigPathRecognizer;
- (unsigned long long)VTSecondPassExtraSamplesAtStart;
- (float)VTSecondPassLoggingThreshold;
- (float)VTSecondPassRecognizerScoreScaleFactor;
- (float)VTSecondPassRecognizerThresholdOffset;
- (id)VTSecondPassRecognizerToken;
- (float)VTSecondPassThreshold;
- (bool)VTSecondPassUserKeywordSpotting;
- (id)_decodeJson:(id)arg1;
- (id)configVersion;
- (id)description;
- (id)dictionary;
- (bool)getBoolForKey:(id)arg1 category:(id)arg2 default:(bool)arg3;
- (id)getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (id)getStringForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (id)hashFromResourcePath;
- (id)initWithResourcePath:(id)arg1 configFile:(id)arg2 configVersion:(id)arg3;
- (bool)isEqualAsset:(id)arg1;
- (id)keywordDetectorConfigPathRecognizer;
- (float)keywordDetectorThreshold;
- (float)keywordDetectorWaitTimeSinceVT;
- (id)path;
- (id)resourcePath;
- (id)speakerDetectorNDAPIConfigPath;
- (float)speakerDetectorRetrainTriggerThreshold;
- (float)speakerDetectorThreshold;

@end
