/* made by EzioChiu.
 */

@protocol AFUISpeechSynthesis <NSObject>

@required

- (void)cancel;
- (void)enqueueAudioData:(void *)arg1 identifier:(void *)arg2 provisionally:(void *)arg3 eligibleAfterDuration:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: SAUIAudioData *, NSString *, bool, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)enqueueText:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)enqueueText:(void *)arg1 identifier:(void *)arg2 language:(void *)arg3 gender:(void *)arg4 isPhonetic:(void *)arg5 provisionally:(void *)arg6 eligibleAfterDuration:(void *)arg7 preparationIdentifier:(void *)arg8 completion:(void *)arg9 animationIdentifier:(void *)arg10 analyticsContext:(void *)arg11 speakableContextInfo:(void *)arg12; // needs 12 arg types, found 17: NSString *, NSString *, NSString *, NSString *, bool, bool, double, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*, NSString *, NSDictionary *, NSDictionary *
- (void)invalidate;
- (void)presynthesizeDialogStrings:(NSArray *)arg1 speakableContext:(NSDictionary *)arg2;
- (void)prewarmIfNeeded;
- (void)skipCurrentSynthesis;

@end
