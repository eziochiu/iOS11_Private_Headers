/* made by EzioChiu.
 */

@protocol PRSFeatureVector

@required

+ (bool)doesFeatureExist:(NSString *)arg1;
+ (void)reArrangeOrderedSetBySet:(NSOrderedSet *)arg1 withInflation:(unsigned long long)arg2 andInflatedMap:(NSDictionary *)arg3;

- (NSString *)bundle_id;
- (void)cleanup;
- (NSArray *)getExpandedFeatureVectorAsArray;
- (NSMutableDictionary *)getExpandedFeaturesAsDictionary;
- (NSMutableDictionary *)getFeaturesAsDictionary;
- (double)getServerFeatureAtIndex:(unsigned long long)arg1;
- (double)getValueAtIndex:(unsigned long long)arg1;
- (double)getValueForFeature:(NSString *)arg1;
- (void)resetFeatureValues;
- (void)setBundle_id:(NSString *)arg1;
- (void)setExpandedSet:(double*)arg1;
- (void)setValue:(NSNumber *)arg1 forFeature:(NSString *)arg2;
- (void)setValue:(NSNumber *)arg1 forFeatureEnum:(unsigned long long)arg2;

@end
