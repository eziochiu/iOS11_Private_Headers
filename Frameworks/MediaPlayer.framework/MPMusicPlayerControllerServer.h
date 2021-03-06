/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerControllerServer : NSObject {
    MPMusicPlayerControllerServerInternal * _internal;
}

@property (nonatomic, readonly) bool allowForeignAssetPlayback;
@property (nonatomic, readonly) MPAVController *player;
@property (nonatomic, readonly, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *requestingBundleVersion;

+ (bool)isMusicPlayerControllerServerRunning;
+ (id)sharedInstance;
+ (void)startMusicPlayerControllerServerWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)_runMigServer;
- (bool)allowForeignAssetPlayback;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)player;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (void)setDelegate:(id)arg1;

@end
