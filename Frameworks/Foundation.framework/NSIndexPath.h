/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long * _indexes;
    unsigned long long  _length;
    void * _reserved;
}

@property (nonatomic, readonly) long long item;
@property (readonly) unsigned long long length;
@property (nonatomic, readonly) long long row;
@property (nonatomic, readonly) long long section;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)indexPath;
+ (id)indexPathWithIndex:(unsigned long long)arg1;
+ (id)indexPathWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getIndexes:(unsigned long long*)arg1;
- (void)getIndexes:(unsigned long long*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (unsigned long long)indexAtPosition:(unsigned long long)arg1;
- (id)indexPathByAddingIndex:(unsigned long long)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)initWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)indexPathForItem:(long long)arg1 inSection:(long long)arg2;
+ (id)indexPathForRow:(long long)arg1 inSection:(long long)arg2;

- (long long)item;
- (long long)row;
- (long long)section;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_emptyPath;

- (bool)bs_hasPrefix:(id)arg1;
- (id)bs_indexPathByAddingPrefix:(id)arg1;
- (id)bs_indexPathByRemovingFirstIndex;
- (id)bs_nearestCommonAncestorWithIndexPath:(id)arg1;
- (id)bs_subpathFromPosition:(unsigned long long)arg1;
- (id)bs_subpathWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
