/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceAssetQuery : NSObject {
    NSString * _color;
    NSString * _colorCoverGlass;
    NSString * _colorHousing;
    bool  _forEngagement;
    bool  _legacyFormats;
    NSString * _mappedProductType;
    NSString * _marketingProductNumber;
    NSString * _productType;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSString *color;
@property (nonatomic, readonly) NSString *colorCoverGlass;
@property (nonatomic, readonly) NSString *colorHousing;
@property (nonatomic, readonly) bool forEngagement;
@property (nonatomic, readonly) bool legacyFormats;
@property (nonatomic, retain) NSString *mappedProductType;
@property (nonatomic, readonly) NSString *marketingProductNumber;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) unsigned long long version;

+ (bool)deviceWantsLegacyFormats;

- (void).cxx_destruct;
- (id)color;
- (id)colorCoverGlass;
- (id)colorHousing;
- (id)description;
- (bool)forEngagement;
- (unsigned long long)hash;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 engagement:(bool)arg3;
- (id)initWithPhoneProductType:(id)arg1 colorHousing:(id)arg2 colorCoverGlass:(id)arg3;
- (id)initWithProductType:(id)arg1;
- (id)initWithWatchProductType:(id)arg1 marketingProductNumber:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)legacyFormats;
- (id)loggingProductType;
- (id)mappedProductType;
- (id)marketingProductNumber;
- (id)productType;
- (void)setMappedProductType:(id)arg1;
- (unsigned long long)version;

@end
