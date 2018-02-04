/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouGroupsConfiguration : NSObject {
    NSMutableDictionary * _cachedGroupConfigurations;
    NSString * _configuration;
    NSDictionary * _groupConfiguration;
    double  _weekendGreatStoriesYouMissedTimeRange;
}

@property (nonatomic, copy) NSMutableDictionary *cachedGroupConfigurations;
@property (nonatomic, copy) NSDictionary *groupConfiguration;
@property (nonatomic, readonly) double weekendGreatStoriesYouMissedTimeRange;

- (void).cxx_destruct;
- (bool)_defaultAllowsNativeAdsValueForGroupType:(long long)arg1;
- (unsigned long long)_defaultGroupPositionValueForGroupType:(long long)arg1;
- (unsigned long long)_defaultProceedingGroupsCount:(long long)arg1;
- (id)_identifierForGroupType:(long long)arg1;
- (id)cachedGroupConfigurations;
- (id)configurationForGroupType:(long long)arg1;
- (id)groupConfiguration;
- (unsigned long long)hash;
- (id)initWithJSONConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCachedGroupConfigurations:(id)arg1;
- (void)setGroupConfiguration:(id)arg1;
- (double)weekendGreatStoriesYouMissedTimeRange;

@end
