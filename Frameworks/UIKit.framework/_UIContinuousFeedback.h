/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable> {
    double  _duration;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)continuousFeedbackForType:(long long)arg1;
+ (id)type;

- (id)_debugDictionary;
- (unsigned long long)_effectiveEventType;
- (void)_playAtTime:(double)arg1;
- (id)_playableProtocol;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end