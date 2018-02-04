/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPreviewView : UIView {
    int  __exposureBiasSide;
    NSMutableDictionary * __faceIndicators;
    NSMutableDictionary * __internalTrackedSubjectIndicatorsByIdentifier;
    UILabel * __simulatorLabel;
    double  _bottomContentInset;
    CAMSubjectIndicatorView * _centeredSubjectIndicatorView;
    CAMFocusIndicatorView * _continuousIndicator;
    CAMGridView * _gridView;
    UIView * _indicatorContainerView;
    CAMLevelIndicatorView * _levelView;
    CAMFocusIndicatorView * _pointIndicator;
    CAMStageLightOverlayView * _stageLightOverlayView;
    <CAMPreviewViewSubjectIndicatorDelegate> * _subjectIndicatorDelegate;
    CAMVideoPreviewView * _videoPreviewView;
}

@property (nonatomic) int _exposureBiasSide;
@property (nonatomic, readonly) NSMutableDictionary *_faceIndicators;
@property (nonatomic, readonly) NSMutableDictionary *_internalTrackedSubjectIndicatorsByIdentifier;
@property (nonatomic, readonly) UILabel *_simulatorLabel;
@property (nonatomic) double bottomContentInset;
@property (nonatomic, retain) CAMSubjectIndicatorView *centeredSubjectIndicatorView;
@property (nonatomic, retain) CAMFocusIndicatorView *continuousIndicator;
@property (nonatomic, readonly) NSDictionary *faceIndicatorsByIdentifier;
@property (nonatomic) CAMGridView *gridView;
@property (nonatomic, readonly) UIView *indicatorContainerView;
@property (nonatomic) CAMLevelIndicatorView *levelView;
@property (nonatomic, retain) CAMFocusIndicatorView *pointIndicator;
@property (nonatomic, retain) CAMStageLightOverlayView *stageLightOverlayView;
@property (nonatomic) <CAMPreviewViewSubjectIndicatorDelegate> *subjectIndicatorDelegate;
@property (nonatomic, readonly) NSDictionary *trackedSubjectIndicatorsByIdentifier;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, readonly) CAMVideoPreviewView *videoPreviewView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_aspectFaceRectFromSquareFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2;
- (int)_exposureBiasSide;
- (id)_faceIndicators;
- (int)_faceOrientationForRollAngle:(double)arg1;
- (id)_internalTrackedSubjectIndicatorsByIdentifier;
- (id)_simulatorLabel;
- (void)addFaceIndicator:(id)arg1 forIdentifier:(long long)arg2;
- (void)addTrackedSubjectIndicator:(id)arg1 forIdentifier:(long long)arg2;
- (double)bottomContentInset;
- (struct CGPoint { double x1; double x2; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)centeredSubjectIndicatorView;
- (id)continuousIndicator;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceIndicatorFrameForFaceResult:(id)arg1;
- (id)faceIndicatorsByIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSubjectIndicator:(id)arg1 andFaceResult:(id)arg2 useNominalSize:(bool)arg3;
- (id)gridView;
- (void)indicatePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (id)indicatorContainerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)levelView;
- (struct CGPoint { double x1; double x2; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (id)pointIndicator;
- (void)removeFaceIndicatorForIdentifier:(long long)arg1;
- (void)removeTrackedSubjectIndicatorForIdentifier:(long long)arg1;
- (void)setBottomContentInset:(double)arg1;
- (void)setCenteredSubjectIndicatorView:(id)arg1;
- (void)setContinuousIndicator:(id)arg1;
- (void)setGridView:(id)arg1;
- (void)setLevelView:(id)arg1;
- (void)setPointIndicator:(id)arg1;
- (void)setStageLightOverlayView:(id)arg1;
- (void)setSubjectIndicatorDelegate:(id)arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)set_exposureBiasSide:(int)arg1;
- (id)stageLightOverlayView;
- (id)subjectIndicatorDelegate;
- (id)trackedSubjectIndicatorsByIdentifier;
- (id)videoPreviewLayer;
- (id)videoPreviewView;

@end