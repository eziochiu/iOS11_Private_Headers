/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaControlsRemoteViewController : _UIRemoteViewController {
    <MPMediaControlsClientController> * _hostViewController;
}

@property (nonatomic) <MPMediaControlsClientController> *hostViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)didReceiveInteraction;
- (void)dismiss;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
