/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSValueTransformer : NSObject

+ (bool)allowsReverseTransformation;
+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;
+ (Class)transformedValueClass;
+ (id)valueTransformerForName:(id)arg1;
+ (id)valueTransformerNames;

- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end