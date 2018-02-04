/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPCollection : SAMPMediaEntity

@property (nonatomic, copy) NSArray *items;

+ (id)collection;
+ (id)collectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)items;
- (void)setItems:(id)arg1;

@end
