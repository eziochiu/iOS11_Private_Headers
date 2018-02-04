/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainerQueryResultSet : ML3QueryResultSet {
    long long  _containerPID;
    unsigned long long  _entityLimit;
    bool  _needsReversing;
    bool  _needsSorting;
    ML3QueryResultSet_BackingStore * _sortedBackingStore;
}

- (void).cxx_destruct;
- (void)_loadCurrentFullResults;
- (bool)_updateToLibraryCurrentRevision;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)entityLimit;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg1;
- (id)initWithQuery:(id)arg1;
- (long long)persistentIDAtIndex:(unsigned long long)arg1;
- (id)sortedBackingStoreForDisplayOrdering;

@end