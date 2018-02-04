/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantMessageQueryHandler : IMAssistantMessageHandler

- (id)IMPersonsForSPIHandles:(id)arg1;
- (void)SPIQueryMessagesForChats:(id)arg1 limit:(long long)arg2 completion:(id /* block */)arg3;
- (void)SPIQueryMessagesForSenders:(id)arg1 limit:(long long)arg2 completion:(id /* block */)arg3;
- (void)SPIQueryMessagesWithGUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)SPIQueryMessagesWithRowIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)SPIQueryUnreadMessages:(long long)arg1 completion:(id /* block */)arg2;
- (id)chatContainingPersons:(id)arg1;
- (id)handlesAndServicesForPersons:(id)arg1 services:(id*)arg2;
- (id)idenfiersForChats:(id)arg1;
- (id)messageContentsPredicate:(id)arg1;
- (id)recipientsPredicate:(id)arg1;
- (id)resolveDateTimeRange:(id)arg1;
- (bool)resolvePersons:(id)arg1 forIntent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)searchMessagesWithContentsPredicate:(id)arg1 messageIdentifiers:(id)arg2 recipients:(id)arg3 recipientsPredicate:(id)arg4 senders:(id)arg5 sendersPredicate:(id)arg6 dateTimeRange:(id)arg7 attributes:(unsigned long long)arg8 completion:(id /* block */)arg9;
- (id)sendersPredicate:(id)arg1;
- (id)serviceNamesForChats:(id)arg1;

@end