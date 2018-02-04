/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTComparisonEntity : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SAUIDecoratedText *decoratedTitle;
@property (nonatomic, retain) SAUIDecoratedText *decoratedValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUINanoImageResource *imageResource;
@property (readonly) Class superclass;

+ (id)comparisonEntity;
+ (id)comparisonEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)decoratedTitle;
- (id)decoratedValue;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageResource;
- (void)setDecoratedTitle:(id)arg1;
- (void)setDecoratedValue:(id)arg1;
- (void)setImageResource:(id)arg1;

@end