/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAudioRouteBarButton : UIButton {
    UIImage * _imageAirPlay;
    UIImage * _imageBT;
    UIImage * _imageSpeaker;
    bool  _needsUpdateDisplay;
    UIColor * _routeToHandsetOrHeadphoneColor;
    UIColor * _routeToSpeakerOrWirelessColor;
}

@property (nonatomic, retain) UIColor *routeToHandsetOrHeadphoneColor;
@property (nonatomic, retain) UIColor *routeToSpeakerOrWirelessColor;

- (void).cxx_destruct;
- (void)_audioRouteInfoDidChangeNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)routeToHandsetOrHeadphoneColor;
- (id)routeToSpeakerOrWirelessColor;
- (void)setRouteToHandsetOrHeadphoneColor:(id)arg1;
- (void)setRouteToSpeakerOrWirelessColor:(id)arg1;
- (void)updateDisplay;
- (void)willMoveToWindow:(id)arg1;

@end
