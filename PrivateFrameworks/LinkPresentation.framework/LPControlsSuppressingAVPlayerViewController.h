/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPControlsSuppressingAVPlayerViewController : AVPlayerViewController {
    LPFullScreenVideoViewController * _fullScreenController;
    id /* block */  _readyForDisplayCallback;
}

@property (nonatomic) LPFullScreenVideoViewController *fullScreenController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didBeginSlideToDismissTransition;
- (void)doneButtonTapped:(id)arg1;
- (id)fullScreenController;
- (id)initWithPlayerLayerView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)arg1;
- (void)setFullScreenController:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
