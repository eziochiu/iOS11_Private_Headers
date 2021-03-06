/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWalletPassStyleRelevanceProvider : NTKRelevanceProvider {
    long long  _style;
}

@property (nonatomic, readonly) long long style;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithPassStyle:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)style;

@end
