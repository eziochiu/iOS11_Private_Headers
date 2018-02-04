/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (nonatomic, retain) SACFProvideContext *updateContext;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)flowCompleted;
+ (id)flowCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setUpdateContext:(id)arg1;
- (id)updateContext;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)clientFlowCompletedWithRefId:(id)arg1 status:(long long)arg2 context:(id)arg3 contextVersion:(id)arg4 logs:(id)arg5;
+ (id)failureResponseWithAceId:(id)arg1 logs:(id)arg2;
+ (id)successResponseWithAceId:(id)arg1 logs:(id)arg2;

@end
