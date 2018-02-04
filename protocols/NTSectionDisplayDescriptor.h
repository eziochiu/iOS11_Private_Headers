/* made by EzioChiu.
 */

@protocol NTSectionDisplayDescriptor <NSCopying>

@required

- (NSString *)backgroundGradientColor;
- (NSString *)discoverMoreVideosSubtitle;
- (NSString *)discoverMoreVideosTitle;
- (NSURL *)discoverMoreVideosURL;
- (bool)displaysAsVideoPlaylist;
- (NSString *)name;
- (NSString *)nameColor;
- (bool)videoPlaysMutedByDefault;

@end
