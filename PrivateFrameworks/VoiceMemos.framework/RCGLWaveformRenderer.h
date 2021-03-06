/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCGLWaveformRenderer : UIViewController <CAAnimationDelegate, GLKViewDelegate, RCWaveformDataSourceObserver> {
    RCUIConfiguration * _UIConfiguration;
    bool  _activeDisplayLinkRequired;
    bool  _buffersInitialized;
    double  _cachedContentWidth;
    bool  _centerKeylineRendered;
    bool  _contentWidthDirty;
    double  _dataPointWidth;
    RCWaveformDataSource * _dataSource;
    CADisplayLink * _displayLink;
    NSTimer * _displayLinkTerminationTimer;
    EAGLContext * _eaglContext;
    int  _foregroundColorUniform;
    bool  _frequentUpdatesSegmentUpdatesExpectedHint;
    bool  _hasDisplayedPreGLContentCenterline;
    int  _highlightColorTimelineRange;
    int  _highlightColorUniform;
    struct { 
        double beginTime; 
        double endTime; 
    }  _highlightTimeRange;
    bool  _isAnimatingModelview;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastViewportRect;
    CALayer * _modelviewLayer;
    int  _modelviewUniform;
    bool  _needsVisibleRangeRendering;
    bool  _paused;
    UIView * _preGLContentCenterline;
    bool  _preparedForRendering;
    int  _projectionUniform;
    struct { 
        double beginTime; 
        double endTime; 
    }  _renderedTimeRange;
    bool  _renderedTimeRangeIsApproximatedWaveform;
    unsigned long long  _renderedWaveformVertices;
    <RCGLWaveformRendererDelegate> * _rendererDelegate;
    unsigned int  _shaderProgram;
    bool  _shadersInitialized;
    double  _spacingWidth;
    unsigned int  _vertexBuffers;
    struct { 
        double beginTime; 
        double endTime; 
    }  _visibleTimeRange;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    }  _waveformVertexData;
}

@property (nonatomic, copy) RCUIConfiguration *UIConfiguration;
@property (getter=isActiveDisplayLinkRequired, nonatomic) bool activeDisplayLinkRequired;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic) double dataPointWidth;
@property (nonatomic, retain) RCWaveformDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool frequentUpdatesSegmentUpdatesExpectedHint;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { double x1; double x2; } highlightTimeRange;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) <RCGLWaveformRendererDelegate> *rendererDelegate;
@property (nonatomic) double spacingWidth;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic) struct { double x1; double x2; } visibleTimeRange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)UIConfiguration;
- (void)_cancelScheduledTerminateDisplayLink;
- (void)_clearRenderingState;
- (unsigned int)_compileShaderOfType:(unsigned int)arg1 pathToSource:(id)arg2;
- (bool)_currentViewportRequiresRenderingNewSegments;
- (void)_didBecomeActiveNotification:(id)arg1;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)_draw:(id)arg1;
- (struct { double x1; double x2; })_highlightTimeRange;
- (double)_nonCachedContentWidth;
- (id)_pathForShader:(id)arg1;
- (void)_performOrDispatchToMainThread:(id /* block */)arg1;
- (void)_performScheduledTerminateDisplayLink;
- (float)_pixelOffsetForTime:(double)arg1;
- (float)_pixelsPerSecond;
- (float)_pixelsPerSecondWithVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (void)_prepareForRendering;
- (void)_renderCenterKeylineIfNeeded;
- (void)_renderSegments:(id)arg1 timeRangeOfSegments:(struct { double x1; double x2; })arg2 isApproximatedWaveform:(bool)arg3;
- (void)_renderVisibleTimeRangeImmediately;
- (void)_scheduleTerminateDisplayLink;
- (void)_setNeedsRendering;
- (void)_setNeedsVisibleTimeRangeRendering;
- (void)_setupBuffers;
- (void)_setupGL;
- (void)_setupNotifications;
- (void)_setupShaders;
- (void)_startRendering;
- (void)_startTemporarilyShowingPreGLCenterLine;
- (void)_startUpdating;
- (void)_stopRendering;
- (void)_stopShowingPreGLCenterLine;
- (void)_stopUpdating;
- (void)_teardownNotifications;
- (double)_timeForPixelOffset:(float)arg1;
- (double)_timeForPixelOffset:(float)arg1 withVisibleTimeRange:(struct { double x1; double x2; })arg2;
- (struct { double x1; double x2; })_timeRangeToRenderForVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (void)_updateClearColor;
- (void)_updateForegroundColor;
- (void)_updateHighlightTimeRange;
- (void)_updateModelview;
- (void)_updateProjection;
- (void)_willResignActiveNotification:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (double)contentWidth;
- (double)dataPointWidth;
- (id)dataSource;
- (void)dealloc;
- (bool)frequentUpdatesSegmentUpdatesExpectedHint;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)glkViewRenderingContextValidityDidChange:(id)arg1;
- (struct { double x1; double x2; })highlightTimeRange;
- (double)horizontalOffsetAtTime:(double)arg1;
- (double)horizontalOffsetAtTime:(double)arg1 withVisibleTimeRange:(struct { double x1; double x2; })arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isActiveDisplayLinkRequired;
- (bool)isPaused;
- (void)loadView;
- (double)pointsPerSecondWithVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (id)rasterizeTimeRange:(struct { double x1; double x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)rendererDelegate;
- (void)setActiveDisplayLinkRequired:(bool)arg1;
- (void)setDataPointWidth:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFrequentUpdatesSegmentUpdatesExpectedHint:(bool)arg1;
- (void)setHighlightTimeRange:(struct { double x1; double x2; })arg1;
- (void)setPaused:(bool)arg1;
- (void)setRendererDelegate:(id)arg1;
- (void)setSpacingWidth:(double)arg1;
- (void)setUIConfiguration:(id)arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1 withAnimationDuration:(double)arg2;
- (double)spacingWidth;
- (double)timeAtHorizontalOffset:(double)arg1;
- (double)timeAtHorizontalOffset:(double)arg1 withVisibleTimeRange:(struct { double x1; double x2; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct { double x1; double x2; })visibleTimeRange;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
