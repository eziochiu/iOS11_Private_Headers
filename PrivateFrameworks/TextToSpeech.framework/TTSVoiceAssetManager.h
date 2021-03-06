/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSVoiceAssetManager : NSObject {
    NSMutableDictionary * _resourceCache;
}

+ (id)_getLatestAssetFromArray:(id)arg1;
+ (id)queryForVoiceResourceAsset:(id)arg1 localOnly:(bool)arg2;
+ (id)sharedInstance;
+ (id)voiceResourceAssetForLanguage:(id)arg1 localOnly:(bool)arg2;
+ (id)voiceResourceFromAsset:(id)arg1;

- (void).cxx_destruct;
- (id)_voiceAssetForASAsset:(id)arg1 voiceType:(long long)arg2;
- (id)_voiceAssetQueryForVoiceName:(id)arg1 language:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 version:(id)arg5 voiceType:(long long)arg6 localOnly:(bool)arg7;
- (void)getCustomVoiceAssetsLocalOnly:(bool)arg1 language:(id)arg2 voiceType:(long long)arg3 reply:(id /* block */)arg4;
- (id)resourcePathForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5 outAsset:(id*)arg6;

@end
