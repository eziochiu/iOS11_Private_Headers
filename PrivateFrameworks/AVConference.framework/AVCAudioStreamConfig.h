/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCAudioStreamConfig : NSObject {
    long long  _audioStreamMode;
    bool  _cnEnabled;
    unsigned long long  _cnPayloadType;
    unsigned int  _codecRateModeMask;
    long long  _codecType;
    unsigned long long  _dtmfPayloadType;
    unsigned long long  _dtmfTimestampRate;
    bool  _dtxEnabled;
    bool  _latencySensitiveMode;
    unsigned long long  _maxPtime;
    bool  _octetAligned;
    long long  _preferredCodecRateMode;
    unsigned long long  _ptime;
}

@property (nonatomic) long long audioStreamMode;
@property (getter=isCNEnabled, nonatomic) bool cnEnabled;
@property (nonatomic) unsigned long long cnPayloadType;
@property (nonatomic) unsigned int codecRateModeMask;
@property (nonatomic) long long codecType;
@property (nonatomic) unsigned long long dtmfPayloadType;
@property (nonatomic) unsigned long long dtmfTimestampRate;
@property (getter=isDTXEnabled, nonatomic) bool dtxEnabled;
@property (getter=isLatencySensitiveMode, nonatomic) bool latencySensitiveMode;
@property (nonatomic) unsigned long long maxPtime;
@property (getter=isOctectAligned, nonatomic) bool octetAligned;
@property (nonatomic) long long preferredCodecRateMode;
@property (nonatomic) unsigned long long ptime;

+ (unsigned int)clientCodecRateMaskForCodecRateMode:(unsigned int)arg1;
+ (long long)clientCodecRateModeForCodecRateMode:(int)arg1;
+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)clientStreamModeWithStreamMode:(long long)arg1;
+ (unsigned int)codecRateMaskForClientCodecRateMode:(unsigned int)arg1;
+ (int)codecRateModeForClientCodecRateMode:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;
+ (long long)streamModeWithClientStreamMode:(long long)arg1;

- (long long)audioStreamMode;
- (unsigned long long)cnPayloadType;
- (unsigned int)codecRateModeMask;
- (long long)codecType;
- (id)dictionary;
- (unsigned long long)dtmfPayloadType;
- (unsigned long long)dtmfTimestampRate;
- (id)init;
- (bool)isCNEnabled;
- (bool)isCNValid;
- (bool)isDTMFValid;
- (bool)isDTXEnabled;
- (bool)isLatencySensitiveMode;
- (bool)isOctectAligned;
- (bool)isValid;
- (unsigned long long)maxPtime;
- (long long)preferredCodecRateMode;
- (unsigned long long)ptime;
- (void)setAudioStreamMode:(long long)arg1;
- (void)setCnEnabled:(bool)arg1;
- (void)setCnPayloadType:(unsigned long long)arg1;
- (void)setCodecRateModeMask:(unsigned int)arg1;
- (void)setCodecType:(long long)arg1;
- (void)setDtmfPayloadType:(unsigned long long)arg1;
- (void)setDtmfTimestampRate:(unsigned long long)arg1;
- (void)setDtxEnabled:(bool)arg1;
- (void)setLatencySensitiveMode:(bool)arg1;
- (void)setMaxPtime:(unsigned long long)arg1;
- (void)setOctetAligned:(bool)arg1;
- (void)setPreferredCodecRateMode:(long long)arg1;
- (void)setPtime:(unsigned long long)arg1;
- (void)setUpWithDictionary:(id)arg1;

@end
