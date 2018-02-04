/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSVoiceAssetSelection : NSObject {
    ASAsset * _asset;
    NSString * _builtInVoicePath;
    VSVoiceAsset * _voiceData;
}

@property (retain) ASAsset *asset;
@property (retain) NSString *builtInVoicePath;
@property (retain) VSVoiceAsset *voiceData;

- (void).cxx_destruct;
- (id)asset;
- (id)builtInVoicePath;
- (id)key;
- (void)setAsset:(id)arg1;
- (void)setBuiltInVoicePath:(id)arg1;
- (void)setVoiceData:(id)arg1;
- (id)voiceData;
- (id)voicePath;

@end
