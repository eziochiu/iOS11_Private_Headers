/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechPartialResult : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *tokens;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)speechPartialResult;
+ (id)speechPartialResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setTokens:(id)arg1;
- (id)tokens;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)createUsingPhrases:(id)arg1 andUtterances:(id)arg2;

- (id)af_bestTextInterpretation;
- (id)af_correctionContext;
- (id)af_userUtteranceValue;

@end
