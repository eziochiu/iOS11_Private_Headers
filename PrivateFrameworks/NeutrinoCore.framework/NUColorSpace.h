/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUColorSpace : NSObject {
    struct CGColorSpace { } * _CGColorSpace;
}

@property (nonatomic, readonly) struct CGColorSpace { }*CGColorSpace;

+ (id)_loadICCProfileDataWithIdentifier:(id)arg1;
+ (id)adobeRGBColorSpace;
+ (id)colorSpaceFromColorPrimaries:(id)arg1 transferFunction:(id)arg2 yccMatrix:(id)arg3;
+ (id)colorSpaceFromVideoColorProperties:(id)arg1;
+ (id)displayP3ColorSpace;
+ (id)displayP3LinearColorSpace;
+ (id)genericGrayColorSpace;
+ (id)genericRGBColorSpace;
+ (id)genericRGBLinearColorSpace;
+ (id)sRGBColorSpace;
+ (id)sRGBLinearColorSpace;
+ (id)workingColorSpace;

- (struct CGColorSpace { }*)CGColorSpace;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCGColorSpace:(struct CGColorSpace { }*)arg1;
- (id)initWithICCProfileData:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
