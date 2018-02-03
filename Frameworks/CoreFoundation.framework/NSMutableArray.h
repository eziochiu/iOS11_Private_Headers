/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableArray : NSArray

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)arrayWithCapacity:(unsigned long long)arg1;

- (void)_mutate;
- (void)addObject:(id)arg1;
- (void)addObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjectsFromSet:(id)arg1;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllObjects;
- (void)removeFirstObject;
- (void)removeLastObject;
- (void)removeObject:(id)arg1;
- (void)removeObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectIdenticalTo:(id)arg1;
- (void)removeObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inArray:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inArray:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inOrderedSet:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inOrderedSet:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inSet:(id)arg2;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsPassingTest:(id /* block */)arg1;
- (void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (void)replaceObject:(id)arg1;
- (void)replaceObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromOrderedSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromOrderedSet:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromSet:(id)arg2;
- (void)setArray:(id)arg1;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setOrderedSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)sortRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;
- (void)sortUsingComparator:(id /* block */)arg1;
- (void)sortUsingFunction:(int (*)arg1 context:(void*)arg2;
- (void)sortUsingFunction:(int (*)arg1 context:(void*)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)sortUsingSelector:(SEL)arg1;
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (Class)classForCoder;
- (void)filterUsingPredicate:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (void)removeObjectsFromIndices:(unsigned long long*)arg1 numIndices:(unsigned long long)arg2;
- (void)sortUsingDescriptors:(id)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)_addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_kb_reverse;
- (bool)_listContainsOrderedItems;
- (void)_set_listContainsOrderedItems:(bool)arg1;
- (void)_set_syncQueue:(id)arg1;
- (id)_syncQueue;
- (id)_ui_dequeue;
- (void)_ui_enqueue:(id)arg1;
- (id)_ui_peek;
- (void)_uikbrtInsert:(id)arg1 after:(id)arg2;
- (void)_uikbrtInsert:(id)arg1 before:(id)arg2;
- (void)_uikbrtInsert:(id)arg1 beforeItemPassingTest:(id /* block */)arg2;
- (void)_uikbrtRemove:(id)arg1;
- (void)removeViewsFromSuperview;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (void)un_safeAddObject:(id)arg1 class:(Class)arg2;
- (void)un_safeAddObject:(id)arg1 classes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (void)bs_safeAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial

- (bool)bw_empty;
- (id)bw_peek;
- (id)bw_pop;
- (void)bw_push:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport

- (id)section_pop;
- (void)section_push:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer

- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;

@end
