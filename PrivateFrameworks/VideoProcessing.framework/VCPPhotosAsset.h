/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPPhotosAsset : VCPAsset {
    PHAsset * _asset;
    NSDictionary * _cachedExif;
    NSArray * _cachedResources;
    long long  _onceExif;
}

@property (nonatomic, readonly) NSArray *resources;

+ (id)assetWithPHAsset:(id)arg1;

- (void).cxx_destruct;
- (id)exif;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1;
- (id)initWithPHAsset:(id)arg1;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)resources;

@end
