/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSageFillData : NSObject <TSCH3DSageFillData> {
    TSCH3DFillSetIdentifier * mIdentifier;
    NSObject<TSCH3DSageFillImageDataSource> * mImageSource;
    bool  mIsLowRes;
    NSArray * mLayersProperties;
    NSDictionary * mProperties;
}

+ (id)TSPImageDataFromTexture:(id)arg1;
+ (id)dataWithFillSetIdentifier:(id)arg1;
+ (id)dataWithFillSetIdentifier:(id)arg1 isLowRes:(bool)arg2;
+ (id)dataWithProperties:(id)arg1 layersProperties:(id)arg2 identifier:(id)arg3 imageSource:(id)arg4;
+ (id)dataWithProperties:(id)arg1 layersProperties:(id)arg2 identifier:(id)arg3 imageSource:(id)arg4 isLowRes:(bool)arg5;
+ (id)textureWithImageData:(id)arg1;

- (struct ColorResult { bool x1; struct Color { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })colorFromRedKey:(id)arg1 greenKey:(id)arg2 blueKey:(id)arg3;
- (struct Color { float x1; float x2; float x3; float x4; })colorFromRedKey:(id)arg1 greenKey:(id)arg2 blueKey:(id)arg3 defaultGray:(float)arg4;
- (void)dealloc;
- (struct Color { float x1; float x2; float x3; float x4; })diffuse;
- (struct Color { float x1; float x2; float x3; float x4; })emissive;
- (id)fillSetIdentifier;
- (id)initWithProperties:(id)arg1 layersProperties:(id)arg2 identifier:(id)arg3 imageSource:(id)arg4;
- (id)initWithProperties:(id)arg1 layersProperties:(id)arg2 identifier:(id)arg3 imageSource:(id)arg4 isLowRes:(bool)arg5;
- (bool)isLayerEnabledForIndex:(unsigned long long)arg1;
- (long long)layerBlendModeForIndex:(unsigned long long)arg1;
- (unsigned long long)layerCount;
- (bool)layerIsEnvironmentMapForIndex:(unsigned long long)arg1;
- (id)layerLightenPercentageForIndex:(unsigned long long)arg1;
- (float)layerRotationForIndex:(unsigned long long)arg1;
- (float)layerScaleForIndex:(unsigned long long)arg1;
- (int)layerTilingModeForIndex:(unsigned long long)arg1;
- (struct Color { float x1; float x2; float x3; float x4; })makeGray:(float)arg1;
- (id)objectForKey:(id)arg1 index:(unsigned long long)arg2;
- (float)opacity;
- (float)shininess;
- (struct Color { float x1; float x2; float x3; float x4; })specular;
- (id)textureForIndex:(unsigned long long)arg1;

@end