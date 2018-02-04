/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPaymentMethodResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithPaymentMethodToConfirm:(id)arg1;
+ (id)disambiguationWithPaymentMethodsToDisambiguate:(id)arg1;
+ (id)successWithResolvedPaymentMethod:(id)arg1;

@end
