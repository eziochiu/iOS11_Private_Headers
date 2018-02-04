/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerPath : NSObject <NSCopying> {
    NSString * _bundleID;
    NSArray * _defaultConstraints;
    void * _mediaRemotePlayerPath;
    NSString * _playerID;
    MPAVRoute * _route;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (getter=isInProcess, nonatomic, readonly) bool inProcess;
@property (nonatomic, readonly) void*mediaRemotePlayerPath;
@property (nonatomic, readonly, copy) NSString *playerID;
@property (nonatomic, readonly) MPAVRoute *route;

+ (id)deviceActivePlayerPath;
+ (id)pathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
+ (id)pathWithRoute:(id)arg1 mediaRemotePlayerPath:(void*)arg2;
+ (id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isInProcess;
- (void*)mediaRemotePlayerPath;
- (id)playerID;
- (void)resolveWithCompletion:(id /* block */)arg1;
- (id)route;

@end
