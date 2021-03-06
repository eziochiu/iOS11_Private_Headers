/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDefaultAudioComponentClassification : SXComponentClassification

+ (int)role;
+ (id)roleString;
+ (id)typeString;

- (Class)componentModelClass;
- (Class)componentSizerClass;
- (Class)componentViewClass;
- (bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (id)layoutRules;

@end
