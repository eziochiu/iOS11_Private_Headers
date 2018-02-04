/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackQueueClient : NSObject {
    NSMutableArray * _clients;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSArray *playbackQueueClients;

- (void)dealloc;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (id)playbackQueueClientForPlayerPath:(void*)arg1;
- (id)playbackQueueClients;

@end
