/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFContactsAutocompleteSearchOperation : MFContactsSearchOperation <CNAutocompleteFetchDelegate> {
    CNAutocompleteStore * _autocompleteStore;
    CNAutocompleteFetchContext * _fetchContext;
    NSError * _fetchError;
    <CNCancelable> * _fetchRequestHandle;
    NSObject<OS_dispatch_semaphore> * _fetchRequestSemaphore;
    bool  _includeContacts;
    bool  _includeRecents;
    bool  _includeServers;
    bool  _includeSuggestions;
    bool  _simulateResults;
}

@property (nonatomic, retain) CNAutocompleteStore *autocompleteStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) CNAutocompleteFetchContext *fetchContext;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeContacts;
@property (nonatomic) bool includeRecents;
@property (nonatomic) bool includeServers;
@property (nonatomic) bool includeSuggestions;
@property (nonatomic) bool simulateResults;
@property (readonly) Class superclass;

+ (id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 autocompleteStore:(id)arg6;

- (id)_simulatedRecipientResults;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (id)autocompleteStore;
- (void)cancel;
- (void)configureForSearchTypes:(unsigned long long)arg1;
- (void)dealloc;
- (id)fetchContext;
- (bool)includeContacts;
- (bool)includeRecents;
- (bool)includeServers;
- (bool)includeSuggestions;
- (id)init;
- (void)main;
- (void)setAutocompleteStore:(id)arg1;
- (void)setFetchContext:(id)arg1;
- (void)setIncludeContacts:(bool)arg1;
- (void)setIncludeRecents:(bool)arg1;
- (void)setIncludeServers:(bool)arg1;
- (void)setIncludeSuggestions:(bool)arg1;
- (void)setSimulateResults:(bool)arg1;
- (bool)simulateResults;

@end