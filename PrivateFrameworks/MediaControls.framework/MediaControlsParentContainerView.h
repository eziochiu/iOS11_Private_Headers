/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsParentContainerView : UIView {
    bool  _empty;
    MediaControlsContainerView * _mediaControlsContainerView;
    UIView * _mediaControlsRoutingPickerView;
    UIView * _routingView;
    long long  _routingViewControllerAnimationCount;
    bool  _showingRoutingPicker;
    long long  _style;
}

@property (getter=isEmpty, nonatomic) bool empty;
@property (nonatomic, retain) MediaControlsContainerView *mediaControlsContainerView;
@property (nonatomic, retain) UIView *mediaControlsRoutingPickerView;
@property (nonatomic, retain) UIView *routingView;
@property (nonatomic) long long routingViewControllerAnimationCount;
@property (getter=isShowingRoutingPicker, nonatomic) bool showingRoutingPicker;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (void)_updateRoutingPickerVisibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEmpty;
- (bool)isShowingRoutingPicker;
- (void)layoutSubviews;
- (id)mediaControlsContainerView;
- (id)mediaControlsRoutingPickerView;
- (id)routingView;
- (long long)routingViewControllerAnimationCount;
- (void)setEmpty:(bool)arg1;
- (void)setMediaControlsContainerView:(id)arg1;
- (void)setMediaControlsRoutingPickerView:(id)arg1;
- (void)setRoutingView:(id)arg1;
- (void)setRoutingViewControllerAnimationCount:(long long)arg1;
- (void)setShowingRoutingPicker:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
