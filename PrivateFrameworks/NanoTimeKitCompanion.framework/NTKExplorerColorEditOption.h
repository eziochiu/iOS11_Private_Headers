/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKExplorerColorEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long color;

+ (id)_localizedNameForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithColor:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)color;
- (long long)swatchStyle;

@end
