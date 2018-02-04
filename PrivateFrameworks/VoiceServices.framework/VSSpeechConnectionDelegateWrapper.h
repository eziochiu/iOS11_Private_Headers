/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate> {
    VSSpeechConnection * _connection;
    <VSSpeechConnectionDelegate> * _delegate;
    VSPresynthesizedAudioRequest * _presynthesizedAudioRequest;
    VSSpeechRequest * _request;
    VSSpeechRequest * _synthesisRequest;
}

@property (nonatomic) VSSpeechConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSSpeechConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
@property (nonatomic, retain) VSSpeechRequest *request;
@property (readonly) Class superclass;
@property (nonatomic, retain) VSSpeechRequest *synthesisRequest;

- (void).cxx_destruct;
- (id)connection;
- (id)delegate;
- (id)presynthesizedAudioRequest;
- (oneway void)presynthesizedAudioRequestDidStart;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(bool)arg1 error:(id)arg2;
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)arg1 error:(id)arg2;
- (id)request;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresynthesizedAudioRequest:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSynthesisRequest:(id)arg1;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidReceiveTimingInfo:(id)arg1;
- (oneway void)speechRequestDidStart;
- (oneway void)speechRequestDidStopWithSuccess:(bool)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(id)arg1;
- (id)synthesisRequest;
- (oneway void)synthesisRequestDidFinishWithInstrumentMetrics:(id)arg1 error:(id)arg2;

@end
