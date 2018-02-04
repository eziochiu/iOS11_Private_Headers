/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRelevanceProvider : NSObject <NSCopying> {
    unsigned long long  _cachedHash;
    NTKRelevanceProviderEnvironment * _environment;
    unsigned long long  _priority;
}

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)environment;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)priority;
- (id)providerWithPriority:(unsigned long long)arg1;
- (void)setEnvironment:(id)arg1;

@end