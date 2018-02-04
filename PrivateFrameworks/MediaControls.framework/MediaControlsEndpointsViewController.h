/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsEndpointsViewController : MediaControlsCollectionViewController <CCUIContentModuleContentViewController, MPAVRoutingViewControllerDelegate, MediaControlsPanelViewControllerDelegate> {
    MPMediaControlsConfiguration * _configuration;
    bool  _dismissing;
    id /* block */  _launchNowPlayingAppBlock;
    _MediaControlsEndpointsDataSource * _pickerDataSource;
    id /* block */  _routingCornerViewTappedBlock;
}

@property (nonatomic, retain) MPMediaControlsConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDismissing, nonatomic) bool dismissing;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ launchNowPlayingAppBlock;
@property (nonatomic, retain) _MediaControlsEndpointsDataSource *pickerDataSource;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (nonatomic, copy) id /* block */ routingCornerViewTappedBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createOrReuseViewController;
- (void)_didSelectRoute;
- (id)configuration;
- (id)dataSource;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isDismissing;
- (void)launchNowPlayingApp:(id)arg1;
- (id /* block */)launchNowPlayingAppBlock;
- (void)mediaControlsPanelViewController:(id)arg1 didToggleRoutingPicker:(bool)arg2;
- (id)pickerDataSource;
- (double)preferredExpandedContentHeight;
- (double)preferredExpandedContentWidth;
- (bool)providesOwnPlatter;
- (id /* block */)routingCornerViewTappedBlock;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)setConfiguration:(id)arg1;
- (void)setDismissing:(bool)arg1;
- (void)setLaunchNowPlayingAppBlock:(id /* block */)arg1;
- (void)setPickerDataSource:(id)arg1;
- (void)setRoutingCornerViewTappedBlock:(id /* block */)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
