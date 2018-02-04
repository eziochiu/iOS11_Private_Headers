/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEffect : NSObject {
    NSString * _CIFilterName;
    NSString * _displayName;
    NSString * _filterIdentifier;
    bool  _isLegacy;
    bool  _isPortrait;
    long long  _lightingType;
}

@property (nonatomic, readonly, copy) NSString *CIFilterName;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *filterIdentifier;
@property (nonatomic, readonly) bool isLegacy;
@property (nonatomic, readonly) bool isPortrait;
@property (nonatomic, readonly) long long latestVersion;
@property (nonatomic, readonly) long long lightingType;

+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3;
+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 type:(long long)arg4;
+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 type:(long long)arg4 isLegacy:(bool)arg5;
+ (id)_legacyEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2;
+ (id)allEffects;
+ (id)allSupportedEffects;
+ (id)effectWithCIFilterName:(id)arg1;
+ (id)effectWithIdentifier:(id)arg1;
+ (id)effectWithType:(long long)arg1;
+ (unsigned long long)indexOfEffectWithIdentifier:(id)arg1;
+ (unsigned long long)indexOfEffectWithLightingType:(long long)arg1;
+ (bool)isEffectNoneForIdentifier:(id)arg1;
+ (bool)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2;
+ (id)standardSupportedEffects;

- (id)CIFilterName;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)filterIdentifier;
- (bool)isLegacy;
- (bool)isPortrait;
- (long long)latestVersion;
- (long long)lightingType;
- (id)newEffectFilter;

@end