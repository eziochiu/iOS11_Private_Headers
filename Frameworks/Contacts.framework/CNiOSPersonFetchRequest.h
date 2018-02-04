/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSPersonFetchRequest : NSObject {
    unsigned long long  _batchSize;
    NSArray * _keysToFetch;
    unsigned long long  _options;
    <CNiOSContactPredicate> * _predicate;
    bool  _shouldSort;
    unsigned int  _sortOrder;
    bool  _unifiedFetch;
}

@property (readonly) unsigned long long batchSize;
@property (readonly) NSArray *keysToFetch;
@property (readonly) unsigned long long options;
@property (readonly) <CNiOSContactPredicate> *predicate;
@property (readonly) bool shouldSort;
@property (readonly) unsigned int sortOrder;
@property (readonly) unsigned int sortOrderIncludingNone;
@property (readonly) bool unifiedFetch;

+ (id)effectivePredicate:(id)arg1;
+ (id)fetchRequestFromCNFetchRequest:(id)arg1 error:(id*)arg2;
+ (long long)resolvedSortOrderFromContactSortOrder:(long long)arg1;
+ (id)validatePredicate:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)initWithPredicate:(id)arg1 keysToFetch:(id)arg2 shouldSort:(bool)arg3 sortOrder:(unsigned int)arg4 unifiedFetch:(bool)arg5 batchSize:(unsigned long long)arg6 options:(unsigned long long)arg7;
- (id)keysToFetch;
- (unsigned long long)options;
- (id)predicate;
- (bool)shouldSort;
- (unsigned int)sortOrder;
- (unsigned int)sortOrderIncludingNone;
- (bool)unifiedFetch;

@end