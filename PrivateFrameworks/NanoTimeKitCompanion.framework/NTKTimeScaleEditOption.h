/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimeScaleEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long timeScale;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithTimeScale:(unsigned long long)arg1;
+ (id)optionsDescription;

- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;
- (unsigned long long)timeScale;

@end
