/* made by EzioChiu.
 */

@protocol PTSImageLoaderDelegate <NSObject>

@required

- (void)imageLoader:(PTSImageLoader *)arg1 didLoadImage:(UIImage *)arg2 forFilename:(NSString *)arg3;
- (void)imageLoaderDidFinishLoadingImages:(PTSImageLoader *)arg1;

@end
