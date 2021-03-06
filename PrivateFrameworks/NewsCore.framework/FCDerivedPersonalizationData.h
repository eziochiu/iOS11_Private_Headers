/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSCoding, NSCopying> {
    NSDictionary * _aggregatesByFeatureKey;
    NTPBPersonalizationProfile * _profile;
}

@property (nonatomic, retain) NSDictionary *aggregatesByFeatureKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NTPBPersonalizationProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aggregateForFeatureKey:(id)arg1;
- (id)aggregatesByFeatureKey;
- (id)aggregatesForFeatureKeys:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonalizationProfile:(id)arg1;
- (id)profile;
- (void)setAggregatesByFeatureKey:(id)arg1;
- (void)setProfile:(id)arg1;

@end
