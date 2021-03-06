/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFWallpaperEditCollection : NSObject {
    HFWallpaperSlice * _originalSlice;
    HFWallpaperSlice * _processedSlice;
    HFWallpaper * _wallpaper;
}

@property (nonatomic, readonly) HFWallpaperSlice *originalSlice;
@property (nonatomic, readonly) HFWallpaperSlice *processedSlice;
@property (nonatomic, readonly) HFWallpaper *wallpaper;

- (void).cxx_destruct;
- (id)description;
- (id)initWithWallpaper:(id)arg1 originalSlice:(id)arg2 processedSlice:(id)arg3;
- (id)originalSlice;
- (id)processedSlice;
- (id)wallpaper;

@end
