/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHRootSettings : PHSettings {
    PHImageManagerSettings * _imageManagerSettings;
    PHResourceDownloadSettings * _resourceDownloadSettings;
}

@property (nonatomic, readonly) PHImageManagerSettings *imageManagerSettings;
@property (nonatomic, readonly) PHResourceDownloadSettings *resourceDownloadSettings;

+ (id)settingsControllerModule;
+ (id)sharedSettings;

- (void).cxx_destruct;
- (id)imageManagerSettings;
- (id)parentSettings;
- (id)resourceDownloadSettings;

@end
