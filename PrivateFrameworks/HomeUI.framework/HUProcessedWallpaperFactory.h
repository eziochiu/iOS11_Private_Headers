/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUProcessedWallpaperFactory : NSObject <HFProcessedWallpaperSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long processVersionNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *supportedVariants;

+ (id)_defaultBackdropSettings;

- (id)_darkContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_imageByApplyingEffect:(id)arg1 toImage:(id)arg2;
- (id)_lightContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)croppedImageFromWallpaper:(id)arg1 image:(id)arg2;
- (unsigned long long)processVersionNumber;
- (id)processedImageForVariant:(long long)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (id)processedImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)supportedVariants;

@end
