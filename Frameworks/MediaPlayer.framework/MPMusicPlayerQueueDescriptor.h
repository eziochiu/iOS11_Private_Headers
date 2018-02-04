/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding> {
    NSMutableDictionary * _endTimes;
    NSMutableDictionary * _startTimes;
}

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setEndTime:(double)arg1 forIdentifiers:(id)arg2;
- (void)_setStartTime:(double)arg1 forIdentifiers:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endTimes;
- (id)initWithCoder:(id)arg1;
- (id)startTimes;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)playbackContext;

@end