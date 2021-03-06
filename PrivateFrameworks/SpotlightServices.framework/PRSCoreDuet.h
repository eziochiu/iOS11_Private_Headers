/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSCoreDuet : NSObject {
    CDAttribute * _bundleIdAttribute;
    CDSession * _cdSession;
    CDAttribute * _spotlightAttr;
}

@property (retain) CDAttribute *bundleIdAttribute;
@property (retain) CDSession *cdSession;
@property (retain) CDAttribute *spotlightAttr;

- (void).cxx_destruct;
- (void)addResultCategoryAndGroupToHistory:(id)arg1 groupName:(id)arg2 cost:(unsigned long long)arg3 error:(id)arg4;
- (void)addResultCategoryToHistory:(id)arg1 cost:(unsigned long long)arg2 error:(id)arg3;
- (id)bundleIdAttribute;
- (id)cdSession;
- (id)getRankedCategories;
- (id)getRankedCategoriesDictionaryWithPredictionWindow:(double)arg1 predictionInterval:(double)arg2;
- (id)getRankedCategoriesWithPredictionWindow:(double)arg1 predictionInterval:(double)arg2;
- (id)getTopApps;
- (id)initWithDuetClientID:(unsigned long long)arg1 attributeString:(id)arg2;
- (void)setBundleIdAttribute:(id)arg1;
- (void)setCdSession:(id)arg1;
- (void)setSpotlightAttr:(id)arg1;
- (id)spotlightAttr;

@end
