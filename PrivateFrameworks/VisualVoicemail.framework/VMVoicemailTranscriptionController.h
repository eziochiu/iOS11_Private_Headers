/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailTranscriptionController : NSObject {
    SFSpeechRecognizer * _recognizer;
    VMVoicemailTranscriptionSanitizeDatabaseOperation * _sanitizeOperation;
    NSOperationQueue * _transcriptionQueue;
}

@property (nonatomic, readonly) SFSpeechRecognizer *recognizer;
@property (nonatomic, retain) VMVoicemailTranscriptionSanitizeDatabaseOperation *sanitizeOperation;
@property (nonatomic, readonly) NSOperationQueue *transcriptionQueue;

- (void).cxx_destruct;
- (void)_setupRecognizer;
- (void)cancelQueuedTranscriptions;
- (void)dealloc;
- (void)enqueueTranscriptionOperationWithURL:(id)arg1 andHandler:(id /* block */)arg2 priority:(long long)arg3 timeout:(double)arg4;
- (id)init;
- (id)recognizer;
- (void)reportDictationProblemForFileAtURL:(id)arg1;
- (void)retrieveDictationResultForFileAtURL:(id)arg1 withCompletionHandler:(id /* block */)arg2 priority:(long long)arg3 timeout:(double)arg4;
- (id)sanitizeOperation;
- (void)setSanitizeOperation:(id)arg1;
- (void)startDatabaseSanitizationTask;
- (id)transcriptionQueue;

@end
