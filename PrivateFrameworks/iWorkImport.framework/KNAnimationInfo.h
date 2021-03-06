/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationInfo : NSObject {
    Class  mAnimationClass;
    NSSet * mValidAnimationTypes;
}

@property (nonatomic, readonly) Class animationClass;
@property (nonatomic, readonly) NSString *animationFilter;
@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSDictionary *customAttributeDefaults;
@property (nonatomic, readonly) NSArray *customAttributes;
@property (nonatomic, readonly) NSDictionary *defaultAttributes;
@property (nonatomic, readonly) unsigned long long directionType;
@property (nonatomic, readonly) NSString *effectIdentifier;
@property (nonatomic, readonly) bool isDrift;
@property (nonatomic, readonly) NSString *localizedActionBuildName;
@property (nonatomic, readonly) NSString *localizedBuildInName;
@property (nonatomic, readonly) NSString *localizedBuildOutName;
@property (nonatomic, readonly) NSString *localizedTransitionName;
@property (nonatomic, readonly) NSSet *validAnimationTypes;

+ (id)effectIdentifiersForAnimationInfos:(id)arg1;
+ (id)localizedEffectNamesForAnimationInfos:(id)arg1 animationType:(long long)arg2;

- (Class)animationClass;
- (id)animationFilter;
- (long long)category;
- (id)customAttributeDefaults;
- (id)customAttributes;
- (id)customAttributesForAttributeKey:(id)arg1;
- (id)customEffectTimingCurveDisplayParametersForAttributes:(id)arg1 layoutStyleOnly:(bool)arg2;
- (void)dealloc;
- (id)defaultAttributes;
- (id)description;
- (unsigned long long)directionType;
- (id)effectIdentifier;
- (unsigned long long)hash;
- (id)initWithAnimationClass:(Class)arg1;
- (bool)isDrift;
- (bool)isEqual:(id)arg1;
- (id)localizedActionBuildName;
- (id)localizedBuildInName;
- (id)localizedBuildOutName;
- (id)localizedNameForType:(long long)arg1;
- (id)localizedTransitionName;
- (bool)supportsAnimationType:(long long)arg1;
- (id)thumbnailImageNameForType:(long long)arg1;
- (id)validAnimationTypes;

@end
