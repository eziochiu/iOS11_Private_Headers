/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABSearchOperation : NSOperation {
    void * _addressBook;
    void * _context;
    <ABSearchOperationDelegate> * _delegate;
    void * _internalSearchAddressBook;
    NSPredicate * _predicate;
    NSArray * _prefetchProperties;
    id /* block */  _progressBlock;
    NSThread * _progressBlockThread;
    unsigned int  _sortOrdering;
}

@property (nonatomic) void*addressBook;
@property (nonatomic) void*context;
@property (nonatomic) <ABSearchOperationDelegate> *delegate;
@property (nonatomic) void*internalSearchAddressBook;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, copy) NSArray *prefetchProperties;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic) unsigned int sortOrdering;

+ (id)personPredicateWithAnyValueForProperty:(int)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithGroup:(void*)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithName:(id)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithNameLike:(id)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithNameLike:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 inGroup:(void*)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 inGroups:(id)arg2 sources:(id)arg3 addressBook:(void*)arg4;
+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(bool)arg3 addressBook:(void*)arg4;
+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(bool)arg3 includePhotosInResults:(bool)arg4 addressBook:(void*)arg5;
+ (id)personPredicateWithNameOnly:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithValue:(id)arg1 comparison:(long long)arg2 forProperty:(int)arg3 addressBook:(void*)arg4;

- (void)_mainThread_tellDelegateSearchFoundMatch:(void*)arg1;
- (void*)addressBook;
- (void)cancel;
- (void*)context;
- (void)dealloc;
- (id)delegate;
- (void*)internalSearchAddressBook;
- (bool)isConcurrent;
- (void)main;
- (id)predicate;
- (bool)predicateShouldContinue:(id)arg1;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;
- (id)prefetchProperties;
- (id /* block */)progressBlock;
- (void)setAddressBook:(void*)arg1;
- (void)setContext:(void*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalSearchAddressBook:(void*)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPrefetchProperties:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setSortOrdering:(unsigned int)arg1;
- (unsigned int)sortOrdering;

@end