/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGraphicFeatureCache : NSObject {
    OITSUNoCopyDictionary * mFeatureMap;
    NSMutableArray * mFeatureUsageArray;
}

- (unsigned long long)cacheFeature:(id)arg1;
- (id)countedFeatureAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)featuresSortedByUsageCount;
- (id)init;

@end
