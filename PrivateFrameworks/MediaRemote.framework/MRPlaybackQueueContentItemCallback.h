/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackQueueContentItemCallback : NSObject {
    id  _block;
}

@property (nonatomic, copy) id block;

- (id)block;
- (void)dealloc;
- (id)initWithBlock:(id)arg1;
- (void)setBlock:(id)arg1;

@end