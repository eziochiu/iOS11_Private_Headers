/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBackgroundImageFaceView : NTKDigitalFaceView <UIGestureRecognizerDelegate> {
    UIImageView * _animationMaskImageView;
    UIView * _animationView;
    UIView * _borrowedCircleView;
    UIView * _borrowedTimeView;
    NTKEditOption * _editOptionFrom;
    NTKEditOption * _editOptionTo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _maskZoomStartingBounds;
    UIView * _selectedContentView;
    bool  _shouldAdjustLayoutForTimeTravel;
    NTKDigitalTimeLabel * _timeLabel;
    UIView * _timeTravelDimmingOverlayView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _timeViewZoomEndingCenter;
    UIView * _transitionViewFrom;
    UIView * _transitionViewTo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _vignetteZoomStartingBounds;
    UIView * _zoomMaskView;
    UIImageView * _zoomVignette;
}

@property (nonatomic, retain) UIView *borrowedCircleView;
@property (nonatomic, retain) UIView *borrowedTimeView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskZoomStartingBounds;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKDigitalTimeLabel *timeLabel;
@property (nonatomic) struct CGPoint { double x1; double x2; } timeViewZoomEndingCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } vignetteZoomStartingBounds;
@property (nonatomic, retain) UIView *zoomMaskView;
@property (nonatomic, retain) UIImageView *zoomVignette;

- (void).cxx_destruct;
- (id)_animationImageView;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyForegroundZoomAlpha:(double)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (void)_beginTransitionToOption;
- (void)_bringForegroundViewsToFront;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterZoom;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_didTransitionToOptionView:(id)arg1;
- (id)_digitalTimeLabelStyle;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (bool)_needsVignette;
- (double)_parallaxScaleFactor;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_removeAllSubviewsFrom:(id)arg1;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (id)_selectedContentView;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (bool)_shouldAdjustLayoutForTimeTravel;
- (bool)_shouldFadeToTransitionView;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (bool)_supportsTimeScrubbing;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (bool)_timeLabelUsesLegibility;
- (double)_timeTravelCaptionLabelMaxWidth;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (double)_timeTravelYAdjustment;
- (void)_unloadSnapshotContentViews;
- (id)_updateFontInStyle:(id)arg1 monospace:(bool)arg2;
- (bool)_usesCustomZoom;
- (id)_viewForEditOption:(id)arg1;
- (bool)_wantsTimeTravelStatusModule;
- (id)borrowedCircleView;
- (id)borrowedTimeView;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskZoomStartingBounds;
- (void)setBorrowedCircleView:(id)arg1;
- (void)setBorrowedTimeView:(id)arg1;
- (void)setMaskZoomStartingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setTimeViewZoomEndingCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setViewMode:(long long)arg1;
- (void)setVignetteZoomStartingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setZoomMaskView:(id)arg1;
- (void)setZoomVignette:(id)arg1;
- (id)timeLabel;
- (struct CGPoint { double x1; double x2; })timeViewZoomEndingCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vignetteZoomStartingBounds;
- (id)zoomMaskView;
- (id)zoomVignette;

@end