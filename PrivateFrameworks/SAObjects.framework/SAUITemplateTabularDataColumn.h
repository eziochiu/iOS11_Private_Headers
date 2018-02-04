/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUITemplateTabularDataColumn : SAUITemplateBaseItem

@property (nonatomic, copy) NSArray *values;

+ (id)tabularDataColumn;
+ (id)tabularDataColumnWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValues:(id)arg1;
- (id)values;

@end
