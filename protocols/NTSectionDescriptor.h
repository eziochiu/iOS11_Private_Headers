/* made by EzioChiu.
 */

@protocol NTSectionDescriptor <NTSectionDisplayDescriptor, NTSectionFetchDescriptor, NSObject, NSCopying>

@required

- (unsigned long long)cachedResultCutoffTime;
- (NSString *)compactName;
- (unsigned long long)fallbackOrder;
- (NSString *)identifier;
- (int)leadingCellPromotionPolicy;
- (unsigned long long)maximumStoriesAllocation;
- (unsigned long long)minimumStoriesAllocation;
- (NSString *)personalizationFeatureID;
- (int)readArticlesFilterMethod;
- (NSString *)referralBarName;
- (int)seenArticlesFilterMethod;
- (long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
- (long long)supplementalInterSectionFilterOptions;
- (long long)supplementalIntraSectionFilterOptions;

@end
