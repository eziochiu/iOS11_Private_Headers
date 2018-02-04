/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCameraPlaceholderLivePhotoRequest : NSObject {
    PHAsset * _asset;
    NSError * _error;
    NSString * _filterName;
    UIImage * _image;
    bool  _imageRequestFinished;
    id /* block */  _resultHandler;
    NSValue * _stillDisplayTime;
    bool  _videoRequestFinished;
    NSURL * _videoURL;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) NSString *filterName;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool imageRequestFinished;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (nonatomic, retain) NSValue *stillDisplayTime;
@property (nonatomic) bool videoRequestFinished;
@property (nonatomic, retain) NSURL *videoURL;

- (void).cxx_destruct;
- (id)asset;
- (id)error;
- (id)filterName;
- (id)image;
- (bool)imageRequestFinished;
- (id)initWithAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (id /* block */)resultHandler;
- (void)setError:(id)arg1;
- (void)setFilterName:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageRequestFinished:(bool)arg1;
- (void)setStillDisplayTime:(id)arg1;
- (void)setVideoRequestFinished:(bool)arg1;
- (void)setVideoURL:(id)arg1;
- (id)stillDisplayTime;
- (bool)videoRequestFinished;
- (id)videoURL;

@end