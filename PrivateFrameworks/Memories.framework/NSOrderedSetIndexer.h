/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface NSOrderedSetIndexer : NSObject {
    NSIndexSet * _deletedIndexesBeforeInsertions;
    NSOrderedSet * _finalOrderedSet;
    NSOrderedSet * _initialOrderedSet;
    NSIndexSet * _insertedIndexesAfterDeletions;
}

@property (nonatomic, retain) NSIndexSet *deletedIndexesBeforeInsertions;
@property (nonatomic, retain) NSOrderedSet *finalOrderedSet;
@property (nonatomic, retain) NSOrderedSet *initialOrderedSet;
@property (nonatomic, retain) NSIndexSet *insertedIndexesAfterDeletions;

+ (id)indexerWithInitialSet:(id)arg1 finalSet:(id)arg2;

- (void).cxx_destruct;
- (void)analyze;
- (id)deletedIndexesBeforeInsertions;
- (id)finalOrderedSet;
- (id)initWithInitialSet:(id)arg1 finalSet:(id)arg2;
- (id)initialOrderedSet;
- (id)insertedIndexesAfterDeletions;
- (void)setDeletedIndexesBeforeInsertions:(id)arg1;
- (void)setFinalOrderedSet:(id)arg1;
- (void)setInitialOrderedSet:(id)arg1;
- (void)setInsertedIndexesAfterDeletions:(id)arg1;

@end
