/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHumidityStatusItem : HFAbstractRangeStatusItem

+ (unsigned long long)abstractCurrentModeInResponse:(id)arg1;
+ (unsigned long long)abstractTargetModeInResponse:(id)arg1;
+ (id)controllableServiceTypes;
+ (id)currentModeCharacteristicTypes;
+ (id)currentValueCharacteristicType;
+ (id /* block */)displayValueComparator;
+ (bool)isPercentRange;
+ (id)localizationKeyPrefix;
+ (id)maximumTargetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)sensorServiceTypes;
+ (id)targetModeCharacteristicTypes;
+ (id)targetValueCharacteristicType;

@end
