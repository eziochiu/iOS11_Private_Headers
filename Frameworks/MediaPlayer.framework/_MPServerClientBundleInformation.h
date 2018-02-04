/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPServerClientBundleInformation : NSObject {
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleVersion;

- (id)bundleIdentifier;
- (id)bundleVersion;
- (void)dealloc;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;

@end
