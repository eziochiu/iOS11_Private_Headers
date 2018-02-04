/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULivePhotoTrimScrubberLoupeView : UIView {
    AVAsset * _asset;
    CAShapeLayer * _borderLayer;
    _PULivePhotoTrimScrubberLoupeViewImageRequest * _currentImageRequest;
    bool  _imageIsValid;
    UIImageView * _imageView;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sourceTime;
    AVVideoComposition * _videoComposition;
    ISVideoPlayerUIView * _videoView;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) AVAsset *asset;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } sourceTime;
@property (nonatomic, copy) AVVideoComposition *videoComposition;
@property (nonatomic, retain) ISWrappedAVPlayer *videoPlayer;

- (void).cxx_destruct;
- (void)_PULivePhotoTrimScrubberLoupeView_commonInit;
- (void)_extractImageFromImageRequest:(id)arg1;
- (void)_invalidateImage;
- (void)_presentImage:(id)arg1 forSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_updateBorderLayerPath;
- (void)_updateImageIfNeeded;
- (id)asset;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadImage;
- (void)setAsset:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoComposition:(id)arg1;
- (void)setVideoPlayer:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sourceTime;
- (id)videoComposition;
- (id)videoPlayer;

@end