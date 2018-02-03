/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISaveToCameraRollActivity : UIActivity {
    long long  _imageCount;
    long long  _livePhotoCount;
    long long  _videoCount;
}

@property (nonatomic) long long imageCount;
@property (nonatomic) long long livePhotoCount;
@property (nonatomic) long long videoCount;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (unsigned long long)_xpcAttributes;

- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (long long)imageCount;
- (long long)livePhotoCount;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setImageCount:(long long)arg1;
- (void)setLivePhotoCount:(long long)arg1;
- (void)setVideoCount:(long long)arg1;
- (long long)videoCount;

// Image: /bootstrap/Library/SBInject/AnemoneIcons.dylib

- (id)_activityImage;

@end
