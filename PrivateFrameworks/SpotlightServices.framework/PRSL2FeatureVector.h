/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSL2FeatureVector : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _device_type;
    double * _expanded_floating_point_features;
    unsigned long long  _expanded_floating_point_features_count;
    double  _experimentalScore;
    double  _features;
    double  _originalL2Score;
    NSDictionary * _searchThroughCEPData;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *device_type;
@property (nonatomic) double experimentalScore;
@property (nonatomic) double originalL2Score;
@property (nonatomic, retain) NSDictionary *searchThroughCEPData;

+ (id)contextWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3;
+ (unsigned long long)featureForName:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithoutDefaultValues:(bool)arg1;
- (id)bundleID;
- (void)cleanup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)device_type;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithoutDefaultValues;
- (void)encodeWithCoder:(id)arg1;
- (id)expandedArrayRepresentation;
- (double)experimentalScore;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)originalL2Score;
- (id)searchThroughCEPData;
- (void)setBundleID:(id)arg1;
- (void)setDevice_type:(id)arg1;
- (void)setDouble:(double)arg1 forFeature:(unsigned long long)arg2;
- (void)setExpandedSet:(double*)arg1 expandedCount:(unsigned long long)arg2;
- (void)setExperimentalScore:(double)arg1;
- (void)setFeatureName:(id)arg1 value:(double)arg2;
- (void)setOriginalL2Score:(double)arg1;
- (void)setSearchThroughCEPData:(id)arg1;
- (void)setValue:(id)arg1 forFeature:(unsigned long long)arg2;
- (double)valueForFeature:(unsigned long long)arg1;
- (double)valueForFeatureName:(id)arg1;

@end
