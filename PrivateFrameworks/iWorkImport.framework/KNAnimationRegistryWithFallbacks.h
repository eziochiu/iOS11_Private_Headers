/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationRegistryWithFallbacks : NSObject {
    NSMutableDictionary * mFallbacks;
    KNAnimationRegistry * mRegistry;
}

- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2;
- (id)init;
- (void)registerFallbackEffectIdentifer:(id)arg1 forEffectIdentifer:(id)arg2;

@end
