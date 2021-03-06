/* made by EzioChiu.
 */

@protocol MFMessageCriterionConverterDelegate <NSObject>

@optional

- (long long)messageCriterionConverter:(MFMessageCriterionConverter *)arg1 criterionTypeForKey:(NSString *)arg2;
- (NSArray *)messageCriterionConverter:(MFMessageCriterionConverter *)arg1 predicateKeysForCriterionType:(long long)arg2;
- (unsigned long long)messageCriterionConverter:(MFMessageCriterionConverter *)arg1 willUsePredicateOperatorType:(unsigned long long)arg2 forKey:(NSString *)arg3;

@end
