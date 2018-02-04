/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFMProcessMessages : SADomainCommand <CFLocalAceHandling, SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *messagesIdentifiers;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)processMessages;
+ (id)processMessages:(id)arg1;
+ (id)processMessagesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* block */)arg1;
- (id)messagesIdentifiers;
- (bool)requiresResponse;
- (void)setMessagesIdentifiers:(id)arg1;

@end
