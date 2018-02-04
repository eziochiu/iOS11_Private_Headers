/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioStreamConfig : VCMediaStreamConfig {
    long long  _audioStreamMode;
    NSMutableDictionary * _codecConfigurations;
    bool  _latencySensitiveMode;
    unsigned long long  _maxPtime;
    VCAudioStreamMultiwayConfig * _multiwayConfig;
    unsigned long long  _ptime;
    bool  _redEnabled;
}

@property (nonatomic) long long audioStreamMode;
@property (nonatomic, readonly) NSDictionary *codecConfigurations;
@property (getter=isLatencySensitiveMode, nonatomic) bool latencySensitiveMode;
@property (nonatomic) unsigned long long maxPtime;
@property (nonatomic, retain) VCAudioStreamMultiwayConfig *multiwayConfig;
@property (nonatomic) unsigned long long ptime;
@property (getter=isRedEnabled, nonatomic) bool redEnabled;

- (void)addCodecConfiguration:(id)arg1;
- (long long)audioStreamMode;
- (id)codecConfigurations;
- (void)dealloc;
- (id)init;
- (id)initWithClientDictionary:(id)arg1;
- (bool)isLatencySensitiveMode;
- (bool)isRedEnabled;
- (unsigned long long)maxPtime;
- (id)multiwayConfig;
- (unsigned long long)ptime;
- (void)setAudioStreamMode:(long long)arg1;
- (void)setLatencySensitiveMode:(bool)arg1;
- (void)setMaxPtime:(unsigned long long)arg1;
- (void)setMultiwayConfig:(id)arg1;
- (void)setPtime:(unsigned long long)arg1;
- (void)setRedEnabled:(bool)arg1;
- (bool)setupCNCodecWithClientDictionary:(id)arg1;
- (bool)setupCodecWithClientDictionary:(id)arg1;
- (bool)setupDTMFCodecWithClientDictionary:(id)arg1;

@end
