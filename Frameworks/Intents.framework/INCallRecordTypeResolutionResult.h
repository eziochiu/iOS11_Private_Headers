/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCallRecordTypeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithCallRecordTypeToConfirm:(long long)arg1;
+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;
+ (id)successWithResolvedCallRecordType:(long long)arg1;
+ (id)successWithResolvedValue:(long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
