/* made by EzioChiu.
 */

@protocol SXVideoMetadataProviding <NSObject>

@required

- (double)duration;
- (double)framerate;
- (bool)muted;
- (double)time;
- (double)timePlayed;
- (double)volume;

@end
