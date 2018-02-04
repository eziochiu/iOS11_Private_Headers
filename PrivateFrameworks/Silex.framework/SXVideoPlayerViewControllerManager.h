/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoPlayerViewControllerManager : NSObject <SXVideoPlayerViewControllerProvider> {
    NSURL * _autoplayURL;
    NSMutableDictionary * _loseOwnershipBlocks;
    NSMutableDictionary * _pendingLoseOwnershipBlocks;
    NSMutableDictionary * _pendingReceiveOwnershipBlocks;
    NSMutableDictionary * _pendingVideoPlayerViewControllers;
    bool  _presentedAndAppeared;
    NSMutableDictionary * _videoPlayerViewControllers;
}

@property (nonatomic, copy) NSURL *autoplayURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *loseOwnershipBlocks;
@property (nonatomic, readonly) NSMutableDictionary *pendingLoseOwnershipBlocks;
@property (nonatomic, readonly) NSMutableDictionary *pendingReceiveOwnershipBlocks;
@property (nonatomic, readonly) NSMutableDictionary *pendingVideoPlayerViewControllers;
@property (nonatomic) bool presentedAndAppeared;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *videoPlayerViewControllers;

- (void).cxx_destruct;
- (id)autoplayURL;
- (void)autoplayVideoWithURL:(id)arg1;
- (id)init;
- (id)loseOwnershipBlocks;
- (id)pendingLoseOwnershipBlocks;
- (id)pendingReceiveOwnershipBlocks;
- (id)pendingVideoPlayerViewControllers;
- (bool)presentedAndAppeared;
- (void)registerExistingVideoPlayerViewController:(id)arg1 URL:(id)arg2 loseOwnershipBlock:(id /* block */)arg3;
- (void)setAutoplayURL:(id)arg1;
- (void)setPresentedAndAppeared:(bool)arg1;
- (id)videoPlayerViewControllerForURL:(id)arg1 receiveOwnershipBlock:(id /* block */)arg2;
- (id)videoPlayerViewControllers;

@end
