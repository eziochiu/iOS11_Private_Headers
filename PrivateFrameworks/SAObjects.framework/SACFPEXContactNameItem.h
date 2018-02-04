/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFPEXContactNameItem : SACFPEXItem

@property (nonatomic, retain) SAPerson *person;

+ (id)contactNameItem;
+ (id)contactNameItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)person;
- (void)setPerson:(id)arg1;

@end