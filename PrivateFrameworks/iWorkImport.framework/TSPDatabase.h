/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabase : TSUDatabase {
    bool  _incrementalVacuum;
    struct sqlite3_stmt { } * _insertDataStateStatement;
    struct sqlite3_stmt { } * _insertObjectStatement;
    struct sqlite3_stmt { } * _insertRelationshipStatement;
    NSURL * _packageURL;
    struct sqlite3_stmt { } * _relationshipTargetsStatement;
    struct sqlite3_stmt { } * _updateDataStateStatement;
}

- (void).cxx_destruct;
- (bool)closeWithError:(id*)arg1;
- (bool)documentVersion:(struct { unsigned long long x1; unsigned long long x2; }*)arg1 closedCleanlyToken:(long long*)arg2 error:(id*)arg3;
- (bool)documentVersion:(unsigned long long*)arg1 error:(id*)arg2;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)filterIdentifiers:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 error:(id*)arg2;
- (id)init;
- (id)initReadonlyWithPath:(id)arg1 error:(id*)arg2;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (bool)insertDataStateWithSize:(int)arg1 identifier:(long long*)arg2 error:(id*)arg3;
- (bool)insertObjectWithIdentifier:(long long)arg1 stateIdentifier:(const /* Warning: unhandled struct encoding: '{ObjectStateIdentifier=BqB@}' */ struct ObjectStateIdentifier { bool x1; long long x2; bool x3; id x4; }*)arg2 classType:(int)arg3 error:(id*)arg4;
- (bool)insertRelationshipWithSourceIdentifier:(long long)arg1 targetIdentifier:(long long)arg2 error:(id*)arg3;
- (bool)lastObjectIdentifier:(long long*)arg1 error:(id*)arg2;
- (bool)needsUpgradeFromSchemaVersion:(int)arg1;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)newRelationshipTargetsForSourceIdentifier:(long long)arg1 error:(id*)arg2;
- (bool)numberOfDatabaseObjects:(unsigned long long*)arg1 error:(id*)arg2;
- (id)objectFromStatement:(struct sqlite3_stmt { }*)arg1;
- (struct sqlite3_blob { }*)openBlobForObject:(id)arg1 error:(id*)arg2;
- (struct sqlite3_blob { }*)openDataStateBlobWithIdentifier:(long long)arg1 error:(id*)arg2;
- (struct sqlite3_blob { }*)openDataStateBlobWithIdentifier:(long long)arg1 willWrite:(bool)arg2 error:(id*)arg3;
- (bool)parseArchive:(struct Message { int (**x1)(); }*)arg1 forObject:(id)arg2 error:(id*)arg3;
- (id)queryFirstObjectWithStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)queryObjectWithIdentifier:(long long)arg1 error:(id*)arg2;
- (id)queryObjectsWithMessageTypes:(const int*)arg1 messageTypesCount:(int)arg2 error:(id*)arg3;
- (bool)setClosedCleanlyToken:(long long)arg1 error:(id*)arg2;
- (bool)setDocumentVersion:(struct { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (bool)updateDataStateWithIdentifier:(long long)arg1 size:(int)arg2 error:(id*)arg3;
- (bool)upgradeFromSchemaVersion:(int)arg1 error:(id*)arg2;

@end