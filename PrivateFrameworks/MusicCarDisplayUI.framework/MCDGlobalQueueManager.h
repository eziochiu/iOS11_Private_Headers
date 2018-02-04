/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDGlobalQueueManager : NSObject {
    NSOperationQueue * _globalQueue;
}

@property (nonatomic, retain) NSOperationQueue *globalQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)globalQueue;
- (id)init;
- (void)setGlobalQueue:(id)arg1;

@end
