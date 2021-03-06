/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUHistory : WBSHistory

- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (id)_createHistoryStore;
- (Class)_historyItemClass;
- (void)_removeAllVisitedLinks;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (id)init;

@end
