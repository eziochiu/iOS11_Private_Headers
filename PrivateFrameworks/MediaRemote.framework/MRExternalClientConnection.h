/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalClientConnection : NSObject <MRProtocolMessageQueueDataSource, MRProtocolMessageQueueDelegate, MSVMessageParserDelegate, NSStreamDelegate> {
    bool  _cryptoEnabled;
    MRCryptoPairingSession * _cryptoSession;
    <MRExternalClientConnectionDelegate> * _delegate;
    bool  _disconnected;
    unsigned long long  _firstClientNanoseconds;
    unsigned long long  _firstDeviceTicks;
    NSInputStream * _inputStream;
    MRProtocolMessageQueue * _messageQueue;
    NSOutputStream * _outputStream;
    MSVMessageParser * _parser;
    bool  _registeredKeyboardUpdates;
    bool  _registeredToNowPlayingArtworkUpdates;
    bool  _registeredToNowPlayingUpdates;
    bool  _registeredVolumeControlAvailabilityUpdates;
    NSRunLoop * _runLoop;
    unsigned int  _voiceRecordingState;
}

@property (nonatomic) bool cryptoEnabled;
@property (nonatomic, retain) MRCryptoPairingSession *cryptoSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRExternalClientConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic) bool registeredKeyboardUpdates;
@property (nonatomic) bool registeredToNowPlayingArtworkUpdates;
@property (nonatomic) bool registeredToNowPlayingUpdates;
@property (nonatomic) bool registeredVolumeControlAvailabilityUpdates;
@property (nonatomic, readonly) bool streamsAreValid;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int voiceRecordingState;

- (void)_adjustTimestamp:(id)arg1;
- (void)_closeStream:(id)arg1;
- (void)_disconnectClient;
- (void)_flush;
- (void)_notifyDelegateClientDidDisconnect;
- (void)_notifyDelegateClientDidRecieveMessage:(id)arg1;
- (void)_openStream:(id)arg1;
- (void)_parseMessageData:(id)arg1;
- (void)_preProcessMessage:(id)arg1 data:(id)arg2;
- (void)_sendMessage:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3;
- (void)_setQOSPropertiesOnStream:(id)arg1;
- (void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (bool)cryptoEnabled;
- (id)cryptoSession;
- (void)dealloc;
- (id)delegate;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;
- (id)inputStream;
- (id)messageQueue:(id)arg1 dataForMessage:(id)arg2;
- (unsigned long long)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3;
- (id)outputStream;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (bool)registeredKeyboardUpdates;
- (bool)registeredToNowPlayingArtworkUpdates;
- (bool)registeredToNowPlayingUpdates;
- (bool)registeredVolumeControlAvailabilityUpdates;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3;
- (void)setCryptoEnabled:(bool)arg1;
- (void)setCryptoSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRegisteredKeyboardUpdates:(bool)arg1;
- (void)setRegisteredToNowPlayingArtworkUpdates:(bool)arg1;
- (void)setRegisteredToNowPlayingUpdates:(bool)arg1;
- (void)setRegisteredVolumeControlAvailabilityUpdates:(bool)arg1;
- (void)setVoiceRecordingState:(unsigned int)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (bool)streamsAreValid;
- (unsigned int)voiceRecordingState;

@end
