/* made by EzioChiu.
 */

@protocol SiriCoreSessionObject <NSObject>

@required

- (NSString *)aceId;
- (NSString *)refId;
- (void)setAceId:(NSString *)arg1;
- (void)setRefId:(NSString *)arg1;
- (void)siriCore_addSendCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (bool)siriCore_bufferingAllowedDuringActiveSession;
- (void)siriCore_dispatchSendCompletionsWithResult:(long long)arg1 error:(NSError *)arg2;
- (bool)siriCore_isRestartable;
- (bool)siriCore_isRetryable;
- (void)siriCore_logDiagnostics;
- (NSString *)siriCore_requestId;
- (NSObject<OS_dispatch_data> *)siriCore_serializedAceDataError:(id*)arg1;
- (void)siriCore_setSessionRequestId:(NSString *)arg1;
- (bool)siriCore_supportedByLocalSession;
- (bool)siriCore_supportsSendCompletions;

@end
