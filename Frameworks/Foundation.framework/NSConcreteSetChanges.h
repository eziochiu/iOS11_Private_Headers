/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteSetChanges : NSSetChanges {
    NSSet * _backing;
    bool  _backingIsMutable;
    NSMutableArray * _changes;
}

- (void)_fault;
- (void)_willChange;
- (void)addChange:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (unsigned long long)changeCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateChangesUsingBlock:(id /* block */)arg1;
- (void)filterObjectsWithTest:(id /* block */)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (id)member:(id)arg1;
- (void)minusSet:(id)arg1;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)setSet:(id)arg1;
- (void)transformObjectsWithBlock:(id /* block */)arg1;
- (void)unionSet:(id)arg1;

@end