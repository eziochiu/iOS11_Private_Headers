/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioChunk : NSObject {
    NSData * _data;
    unsigned long long  _hostTime;
    unsigned long long  _numChannels;
    unsigned long long  _numSamples;
    unsigned long long  _sampleByteDepth;
    unsigned long long  _startSampleCount;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long hostTime;
@property (nonatomic, readonly) unsigned long long numChannels;
@property (nonatomic, readonly) unsigned long long numSamples;
@property (nonatomic, readonly) unsigned long long sampleByteDepth;
@property (nonatomic, readonly) unsigned long long startSampleCount;

- (void).cxx_destruct;
- (id)_fidesRecordInfo;
- (id)data;
- (id)dataForChannel:(unsigned long long)arg1;
- (unsigned long long)hostTime;
- (id)initWithData:(id)arg1 numChannels:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 sampleByteDepth:(unsigned long long)arg4 startSampleCount:(unsigned long long)arg5 hostTime:(unsigned long long)arg6;
- (unsigned long long)numChannels;
- (unsigned long long)numSamples;
- (unsigned long long)sampleByteDepth;
- (unsigned long long)startSampleCount;
- (id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 forChannel:(unsigned long long)arg3;

@end
