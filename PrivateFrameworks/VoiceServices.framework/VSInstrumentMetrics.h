/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSInstrumentMetrics : NSObject <NSSecureCoding> {
    double  _audioDuration;
    unsigned long long  _audioStartTimestampDiffs;
    bool  _isSynthesisCached;
    bool  _isWarmStart;
    unsigned long long  _requestCreatedTimestamp;
    unsigned long long  _speechBeginTimestamp;
    unsigned long long  _speechEndTimestamp;
    unsigned long long  _synthesisBeginTimestamp;
    unsigned long long  _synthesisEndTimestamp;
    NSString * _utterance;
    NSString * _voiceAssetKey;
}

@property double audioDuration;
@property unsigned long long audioStartTimestampDiffs;
@property bool isSynthesisCached;
@property bool isWarmStart;
@property unsigned long long requestCreatedTimestamp;
@property unsigned long long speechBeginTimestamp;
@property unsigned long long speechEndTimestamp;
@property unsigned long long synthesisBeginTimestamp;
@property unsigned long long synthesisEndTimestamp;
@property (copy) NSString *utterance;
@property (copy) NSString *voiceAssetKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_clockFactor;
- (double)audioDuration;
- (double)audioQueueLatency;
- (unsigned long long)audioStartTimestampDiffs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSynthesisCached;
- (bool)isWarmStart;
- (unsigned long long)requestCreatedTimestamp;
- (void)setAudioDuration:(double)arg1;
- (void)setAudioStartTimestampDiffs:(unsigned long long)arg1;
- (void)setIsSynthesisCached:(bool)arg1;
- (void)setIsWarmStart:(bool)arg1;
- (void)setRequestCreatedTimestamp:(unsigned long long)arg1;
- (void)setSpeechBeginTimestamp:(unsigned long long)arg1;
- (void)setSpeechEndTimestamp:(unsigned long long)arg1;
- (void)setSynthesisBeginTimestamp:(unsigned long long)arg1;
- (void)setSynthesisEndTimestamp:(unsigned long long)arg1;
- (void)setUtterance:(id)arg1;
- (void)setVoiceAssetKey:(id)arg1;
- (unsigned long long)speechBeginTimestamp;
- (unsigned long long)speechEndTimestamp;
- (unsigned long long)synthesisBeginTimestamp;
- (unsigned long long)synthesisEndTimestamp;
- (double)synthesisLatency;
- (double)ttsSynthesisLatency;
- (double)ttsTotalLatency;
- (id)utterance;
- (id)voiceAssetKey;

@end
