/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStaticAsset : MPModelObject {
    double  _duration;
    long long  _flavorType;
    long long  _mediaType;
    NSURL * _url;
}

@property (nonatomic) double duration;
@property (nonatomic) long long flavorType;
@property (nonatomic) long long mediaType;
@property (nonatomic, copy) NSURL *url;

+ (id)__MPModelPropertyStaticAssetDuration__PROPERTY;
+ (id)__MPModelPropertyStaticAssetFlavorType__PROPERTY;
+ (id)__MPModelPropertyStaticAssetMediaType__PROPERTY;
+ (id)__MPModelPropertyStaticAssetURL__PROPERTY;
+ (id)__duration__KEY;
+ (id)__flavorType__KEY;
+ (id)__mediaType__KEY;
+ (id)__url__KEY;

- (void).cxx_destruct;
- (double)duration;
- (long long)flavorType;
- (long long)mediaType;
- (void)setDuration:(double)arg1;
- (void)setFlavorType:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
