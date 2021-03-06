/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelHomeSharingAsset : MPModelObject {
    NSURL * _URL;
    bool  _available;
    NSURL * _protectedContentSupportStorageFileURL;
}

@property (nonatomic, copy) NSURL *URL;
@property (getter=isAvailable, nonatomic) bool available;
@property (nonatomic, copy) NSURL *protectedContentSupportStorageFileURL;

+ (id)__MPModelPropertyHomeSharingAssetAvailable__PROPERTY;
+ (id)__MPModelPropertyHomeSharingAssetProtectedContentSupportStorageFileURL__PROPERTY;
+ (id)__MPModelPropertyHomeSharingAssetURL__PROPERTY;
+ (id)__URL__KEY;
+ (id)__available__KEY;
+ (id)__protectedContentSupportStorageFileURL__KEY;

- (void).cxx_destruct;
- (id)URL;
- (id)descriptionWithType:(long long)arg1;
- (bool)isAvailable;
- (id)protectedContentSupportStorageFileURL;
- (void)setAvailable:(bool)arg1;
- (void)setProtectedContentSupportStorageFileURL:(id)arg1;
- (void)setURL:(id)arg1;

@end
