/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, UIGestureRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver> {
    <MKMapGestureControllerDelegate> * _delegate;
    bool  _didStartLongPress;
    MKVariableDelayTapRecognizer * _doubleTapGestureRecognizer;
    long long  _gestureCount;
    bool  _isPanning;
    bool  _isPinching;
    double  _lastScale;
    MKBasicMapView * _mapView;
    VKCompoundAnimation * _panDecelerationAnimationGroup;
    UIPanGestureRecognizer * _panGestureRecognizer;
    bool  _panWithMomentum;
    VKDynamicAnimation * _pinchDecelerationAnimation;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    VKDynamicAnimation * _rotationDecelerationAnimation;
    UIRotationGestureRecognizer * _rotationGestureRecognizer;
    VKDynamicAnimation * _tiltDecelerationAnimation;
    MKTiltGestureRecognizer * _tiltGestureRecognizer;
    _MKUserInteractionGestureRecognizer * _touchGestureRecognizer;
    UILongPressGestureRecognizer * _twoFingerLongPressGestureRecognizer;
    MKTwoFingerPanGestureRecognizer * _twoFingerPanGestureRecognizer;
    UITapGestureRecognizer * _twoFingerTapGestureRecognizer;
    UIPanGestureRecognizer * _verticalPanGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKMapGestureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MKBasicMapView *mapView;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) bool panWithMomentum;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (getter=isRotationEnabled, nonatomic) bool rotationEnabled;
@property (nonatomic, readonly) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property (getter=isScrollEnabled, nonatomic) bool scrollEnabled;
@property (readonly) Class superclass;
@property (getter=isTiltEnabled, nonatomic) bool tiltEnabled;
@property (nonatomic, readonly) UILongPressGestureRecognizer *twoFingerLongPressGestureRecognizer;
@property (nonatomic, readonly) UIPanGestureRecognizer *twoFingerPanGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *twoFingerTapGestureRecognizer;
@property (nonatomic, readonly) UIPanGestureRecognizer *verticalPanGestureRecognizer;
@property (getter=isZoomEnabled, nonatomic) bool zoomEnabled;

- (void).cxx_destruct;
- (void)_clearGesture:(id)arg1;
- (void)_handleStandardPan:(id)arg1;
- (void)_handleStandardTilt:(id)arg1;
- (struct CGPoint { double x1; double x2; })_snapPointToDevicePixels:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginGesturing;
- (void)clearGestureRecognizersInFlight;
- (void)dealloc;
- (id)delegate;
- (id)doubleTapGestureRecognizer;
- (void)endGesturing;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRecognizerTouchesBegan:(id)arg1;
- (void)gestureRecognizerTouchesCanceled:(id)arg1;
- (void)gestureRecognizerTouchesEnded:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handleTilt:(id)arg1;
- (void)handleTouch:(id)arg1;
- (void)handleTwoFingerLongPress:(id)arg1;
- (void)handleTwoFingerPan:(id)arg1;
- (void)handleTwoFingerTap:(id)arg1;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;
- (bool)isRotationEnabled;
- (bool)isScrollEnabled;
- (bool)isTiltEnabled;
- (bool)isZoomEnabled;
- (id)mapView;
- (id)panGestureRecognizer;
- (bool)panWithMomentum;
- (id)pinchGestureRecognizer;
- (id)rotationGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setPanWithMomentum:(bool)arg1;
- (void)setRotationEnabled:(bool)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setTiltEnabled:(bool)arg1;
- (void)setZoomEnabled:(bool)arg1;
- (void)startUserInteractionFromExternalGesture;
- (void)stopDynamicAnimations;
- (void)stopUserInteractionFromExternalGesture;
- (id)twoFingerLongPressGestureRecognizer;
- (id)twoFingerPanGestureRecognizer;
- (id)twoFingerTapGestureRecognizer;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (id)verticalPanGestureRecognizer;

@end
