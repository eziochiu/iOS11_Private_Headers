/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSetNowPlayingPlayerMessage : MRProtocolMessage

@property (nonatomic, readonly) void*playerPath;

- (id)initWithPlayerPath:(void*)arg1;
- (void*)playerPath;
- (unsigned long long)type;

@end