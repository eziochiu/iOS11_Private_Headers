/* made by EzioChiu.
 */

@protocol NTHeadlineProviding <NSObject, NSCopying, NSSecureCoding>

@required

- (NSURL *)NewsURL;
- (NSObject<NTHeadlineAdElement> *)adElement;
- (NSDate *)ageDisplayDate;
- (NSObject<NTHeadlineAnalyticsElementProviding> *)analyticsElement;
- (bool)displaysWithLeadingCellAppearance;
- (NSString *)identifier;
- (void)loadSourceNameImageDataWithFileURL:(NSURL *)arg1;
- (void)loadThumbnailDataWithFileURL:(NSURL *)arg1;
- (NSObject<NTHeadlinePersonalizationMetadata> *)personalizationMetadata;
- (SFSearchResult *)searchResult;
- (NSString *)shortExcerpt;
- (NSString *)sourceIdentifier;
- (NSString *)sourceName;
- (NSString *)sourceNameImageAssetID;
- (NSData *)sourceNameImageData;
- (double)sourceNameImageScale;
- (NSString *)storyType;
- (bool)supportsSavingForLater;
- (NSString *)thumbnailAssetID;
- (NSData *)thumbnailData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (unsigned long long)thumbnailSizePreset;
- (NSString *)title;
- (double)videoDuration;
- (NSURL *)videoURL;
- (NSURL *)webURL;

@end
