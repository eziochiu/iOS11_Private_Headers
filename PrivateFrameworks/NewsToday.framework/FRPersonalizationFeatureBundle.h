/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface FRPersonalizationFeatureBundle : NSObject {
    id /* block */  _featuresGenerator;
    NSNumber * _feedOrder;
    NSNumber * _groupOrder;
    NSNumber * _sessionDuration;
}

@property (nonatomic, readonly) NSArray *features;
@property (nonatomic, copy) id /* block */ featuresGenerator;
@property (nonatomic, retain) NSNumber *feedOrder;
@property (nonatomic, retain) NSNumber *groupOrder;
@property (nonatomic, retain) NSNumber *sessionDuration;

+ (id)personalizationFeatureBundleForFeaturesGenerator:(id /* block */)arg1;
+ (id)personalizationFeatureBundleForFeaturesGenerator:(id /* block */)arg1 groupOrder:(id)arg2 feedOrder:(id)arg3 userInfo:(id)arg4;

- (void).cxx_destruct;
- (void)appendPersonalizationFeaturesGenerator:(id /* block */)arg1;
- (id)features;
- (id /* block */)featuresGenerator;
- (id)feedOrder;
- (id)groupOrder;
- (id)sessionDuration;
- (void)setFeaturesGenerator:(id /* block */)arg1;
- (void)setFeedOrder:(id)arg1;
- (void)setGroupOrder:(id)arg1;
- (void)setSessionDuration:(id)arg1;

@end