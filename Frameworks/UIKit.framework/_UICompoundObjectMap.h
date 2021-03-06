/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICompoundObjectMap : NSObject {
    NSMutableDictionary * _mapTable;
}

+ (id)compoundObjectMap;
+ (id)generateKeyForObject:(id)arg1 andProperty:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)performWithEach:(id /* block */)arg1;
- (void)removeAllMappings;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forObject:(id)arg2 andProperty:(id)arg3;
- (id)valueForObject:(id)arg1 andProperty:(id)arg2;

@end
