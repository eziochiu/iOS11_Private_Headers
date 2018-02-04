/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFClientConfigurationBuilder : NSObject {
    AFClientConfiguration * _baseObject;
    struct _builderFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasTapToSiriAudioPlaybackRequest : 1; 
        unsigned int hasTwoShotAudioPlaybackRequest : 1; 
    }  _builderFlags;
    AFAudioPlaybackRequest * _tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest * _twoShotAudioPlaybackRequest;
}

- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)initWithBaseObject:(id)arg1;
- (id)setTapToSiriAudioPlaybackRequest:(id)arg1;
- (id)setTwoShotAudioPlaybackRequest:(id)arg1;

@end
