/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSuggestedSearchResultsDataSource : NSObject <PUSuggestedSearchDelegate> {
    <PUSuggestedSearchResultsDelegate> * _delegate;
    PLPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _recentSearches;
    PSIDatabase * _searchIndex;
    bool  _shouldReloadRecentSearchChanges;
    PUSuggestedSearchLastYear * _suggestedSearchLastYear;
    NSArray * _suggestedSearches;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSuggestedSearchResultsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSIDatabase *searchIndex;
@property (readonly) Class superclass;

+ (void)_clearRecentSearches;
+ (id)_recentSearchObjects;
+ (id)_recentSearches;
+ (bool)saveRecentSearch:(id)arg1 albumUUID:(id)arg2 memoryUUID:(id)arg3 searchString:(id)arg4 displayTitle:(id)arg5 displaySubtitle:(id)arg6 uuids:(id)arg7;

- (void).cxx_destruct;
- (void)_reloadRecentSearches;
- (void)cancel;
- (void)clearRecentSearches;
- (void)dealloc;
- (id)delegate;
- (void)ensureResultsForLastYearPhotoSearch;
- (id)initWithSearchIndex:(id)arg1;
- (void)mergePendingChanges;
- (id)nonemptySuggestedSearchAtIndex:(unsigned long long)arg1;
- (id)nonemptySuggestedSearches;
- (unsigned long long)numberOfRecentSearches;
- (unsigned long long)numberOfSuggestedSearches;
- (id)recentSearchAtIndex:(unsigned long long)arg1;
- (id)recentSearches;
- (void)saveRecentSearch:(id)arg1 albumUUID:(id)arg2 memoryUUID:(id)arg3 searchString:(id)arg4 displayTitle:(id)arg5 displaySubtitle:(id)arg6 uuids:(id)arg7;
- (id)searchIndex;
- (void)setDelegate:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (id)suggestedSearchAtIndex:(unsigned long long)arg1;
- (void)suggestedSearchHasPendingChanges:(id)arg1;
- (id)suggestedSearchIndex:(id)arg1;
- (id)suggestedSearchPhotoLibrary:(id)arg1;

@end
