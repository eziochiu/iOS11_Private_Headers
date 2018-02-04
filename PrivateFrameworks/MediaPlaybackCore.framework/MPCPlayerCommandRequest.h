/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerCommandRequest : NSObject {
    unsigned int  _command;
    MPCMediaRemoteController * _controller;
    NSDictionary * _options;
    NSDictionary * _userInitiatedOptions;
}

@property (nonatomic, readonly) unsigned int command;
@property (nonatomic, readonly) MPCMediaRemoteController *controller;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, copy) NSDictionary *userInitiatedOptions;

- (void).cxx_destruct;
- (unsigned int)command;
- (id)controller;
- (id)initWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 controller:(id)arg3;
- (id)options;
- (void)setUserInitiatedOptions:(id)arg1;
- (id)userInitiatedOptions;

@end
