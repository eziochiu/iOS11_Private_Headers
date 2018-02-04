/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAppAutofillManager : NSObject {
    NSString * _clientIdentifierForLastAutofillGeneration;
    NSString * _clientIdentifierForLastKeyboardSync;
    NSUUID * _documentIdentifierForLastAutofillGeneration;
    NSDictionary * _queuedCustomInfo;
}

@property (nonatomic, retain) NSString *clientIdentifierForLastAutofillGeneration;
@property (nonatomic, retain) NSString *clientIdentifierForLastKeyboardSync;
@property (nonatomic, retain) NSUUID *documentIdentifierForLastAutofillGeneration;
@property (nonatomic, retain) NSDictionary *queuedCustomInfo;

+ (id)sharedInstance;

- (id)clientIdentifierForLastAutofillGeneration;
- (id)clientIdentifierForLastKeyboardSync;
- (id)customInfoFromCredential:(id)arg1;
- (void)dealloc;
- (id)documentIdentifierForLastAutofillGeneration;
- (id)generateAutofillFormCandidatesWithSecureCandidateRenderer:(id)arg1 withRenderTraits:(id)arg2 withKeyboardState:(id)arg3;
- (id)getCredentialsWithApplicationIdentifier:(id)arg1;
- (id)obtainApplicationIdentifierFromConnection:(id)arg1;
- (void)obtainCredential:(id)arg1;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1;
- (id)queuedCustomInfo;
- (void)setClientIdentifierForLastAutofillGeneration:(id)arg1;
- (void)setClientIdentifierForLastKeyboardSync:(id)arg1;
- (void)setDocumentIdentifierForLastAutofillGeneration:(id)arg1;
- (void)setQueuedCustomInfo:(id)arg1;

@end
