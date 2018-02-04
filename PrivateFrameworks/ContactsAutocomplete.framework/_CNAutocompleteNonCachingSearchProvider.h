/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface _CNAutocompleteNonCachingSearchProvider : NSObject <CNAutocompleteSearchProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)calendarServerSearch;
- (id)directoryServerSearch;
- (id)duetSearch;
- (id)localSearch;
- (id)recentsSearch;
- (id)suggestionsSearch;

@end