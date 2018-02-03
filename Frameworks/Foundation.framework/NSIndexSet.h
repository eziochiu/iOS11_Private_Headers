/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct { 
        unsigned int _isEmpty : 1; 
        unsigned int _hasSingleRange : 1; 
        unsigned int _cacheValid : 1; 
        unsigned int _reservedArrayBinderController : 29; 
    }  _indexSetFlags;
    union { 
        struct { 
            struct _NSRange { 
                unsigned long long location; 
                unsigned long long length; 
            } _range; 
        } _singleRange; 
        struct { 
            void *_data; 
            void *_reserved; 
        } _multipleRanges; 
    }  _internal;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned long long firstIndex;
@property (readonly) unsigned long long lastIndex;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)indexSet;
+ (id)indexSetWithIndex:(unsigned long long)arg1;
+ (id)indexSetWithIndexes:(const unsigned long long*)arg1 count:(unsigned long long)arg2;
+ (id)indexSetWithIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (bool)supportsSecureCoding;

- (void)__forwardEnumerateRanges:(id /* block */)arg1;
- (unsigned long long)__getContainmentVector:(out bool*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)_indexAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexClosestToIndex:(unsigned long long)arg1 equalAllowed:(bool)arg2 following:(bool)arg3;
- (unsigned long long)_indexOfRangeAfterOrContainingIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfRangeBeforeOrContainingIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfRangeContainingIndex:(unsigned long long)arg1;
- (id)_init;
- (id)_numberEnumerator;
- (void)_setContentToContentFromIndexSet:(id)arg1;
- (Class)classForCoder;
- (bool)containsIndex:(unsigned long long)arg1;
- (bool)containsIndexes:(id)arg1;
- (bool)containsIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countOfIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateIndexesUsingBlock:(id /* block */)arg1;
- (void)enumerateIndexesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateRangesUsingBlock:(id /* block */)arg1;
- (void)enumerateRangesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)firstIndex;
- (unsigned long long)getIndexes:(unsigned long long*)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (unsigned long long)hash;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1;
- (unsigned long long)indexGreaterThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)indexInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (unsigned long long)indexLessThanIndex:(unsigned long long)arg1;
- (unsigned long long)indexLessThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)indexPassingTest:(id /* block */)arg1;
- (unsigned long long)indexWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)indexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)indexesPassingTest:(id /* block */)arg1;
- (id)indexesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithIndexes:(const unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)initWithIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)intersectsIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIndexSet:(id)arg1;
- (unsigned long long)lastIndex;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)rangeCount;
- (id)replacementObjectForPortCoder:(id)arg1;

@end
