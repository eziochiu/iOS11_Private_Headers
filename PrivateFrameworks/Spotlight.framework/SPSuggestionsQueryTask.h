/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPSuggestionsQueryTask : SPGeneralQueryTask {
    NSArray * _mutableCombinedSuggestions;
    NSArray * _mutableLocalSuggestions;
    NSArray * _mutableParsecSuggestions;
}

- (void).cxx_destruct;
- (id)_appResultSection;
- (id)_newSuggestionSection;
- (id)_originalTopResultFromSections:(id)arg1;
- (id)_suggestionResultFromSuggestion:(id)arg1 forQuery:(id)arg2;
- (id)_whiteListedTopResultFromSection:(id)arg1;
- (id)appSuggestions:(id)arg1 maxCount:(long long)arg2;
- (void)clearInternal:(int)arg1 invalidate:(bool)arg2;
- (id)contactSuggestions:(id)arg1 maxCount:(long long)arg2;
- (id)dedupedSuggestions:(id)arg1 dedupeQueries:(id)arg2 maxCount:(long long)arg3;
- (id)displayedText;
- (id)makeSuggestionsSection;
- (bool)readyToUpdate;
- (void)searchDaemonLocalSuggestionsData:(id)arg1;
- (void)searchDaemonSuggestionsArray:(id)arg1;
- (id)searchThroughSection:(id)arg1;
- (id)sectionsForCompletions;
- (id)suggestionsDebugLog:(id)arg1;
- (id)unsafeCombinedSuggestions;
- (id)unsafeSections;

@end
