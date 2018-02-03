/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFormatter : NSObject <NSCoding, NSCopying>

- (long long)_cacheGenerationCount;
- (void)_invalidateCache;
- (bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (bool)_tracksCacheGenerationCount;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)editingStringForObjectValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (id)stringForObjectValue:(id)arg1;

@end
