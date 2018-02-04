/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVConferenceCallState : NSObject {
    bool  _audioIsPaused;
    VCCapabilities * _capabilities;
    bool  _isVideoPaused;
}

@property (getter=isAudioPaused, nonatomic) bool audioIsPaused;
@property (nonatomic, retain) VCCapabilities *capabilities;
@property (getter=isVideoPaused, nonatomic) bool isVideoPaused;

- (id)capabilities;
- (void)dealloc;
- (bool)isAudioPaused;
- (bool)isVideoPaused;
- (void)setAudioIsPaused:(bool)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setIsVideoPaused:(bool)arg1;

@end