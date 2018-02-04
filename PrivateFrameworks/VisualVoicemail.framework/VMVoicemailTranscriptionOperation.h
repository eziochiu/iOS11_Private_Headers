/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailTranscriptionOperation : NSOperation {
    NSObject<OS_dispatch_queue> * _completionQueue;
    SFSpeechRecognizer * _recognizer;
    SFSpeechURLRecognitionRequest * _request;
    id /* block */  _resultBlock;
    double  _timeout;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) SFSpeechRecognizer *recognizer;
@property (nonatomic, retain) SFSpeechURLRecognitionRequest *request;
@property (nonatomic, copy) id /* block */ resultBlock;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)completionQueue;
- (id)initWithRecognizer:(id)arg1 URL:(id)arg2 forceOfflineRecognition:(bool)arg3 resultBlock:(id /* block */)arg4;
- (void)main;
- (id)recognizer;
- (id)request;
- (id /* block */)resultBlock;
- (void)setCompletionQueue:(id)arg1;
- (void)setRecognizer:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResultBlock:(id /* block */)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
