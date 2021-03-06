/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantMessageSearchHandler : IMAssistantMessageQueryHandler <INSearchForMessagesIntentHandling> {
    <IMAssistantMessageAttributeSanitizer> * _attributeSanitizer;
}

@property (nonatomic, retain) <IMAssistantMessageAttributeSanitizer> *attributeSanitizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributeSanitizer;
- (void)handleSearchForMessages:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithAttributeSanitizer:(id)arg1;
- (void)resolveAttributesForSearchForMessages:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveDateTimeRangeForSearchForMessages:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveRecipientsAndSender:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveRecipientsForSearchForMessages:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveSendersForSearchForMessages:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setAttributeSanitizer:(id)arg1;

@end
