/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETGLSketchView : UIView <ETGLSketchRendererDelegate> {
    EAGLContext * _context;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__first_"^ {}  _controlBatches;
    unsigned long long  _currentPointIndex;
    UIColor * _currentStrokeColor;
    unsigned long long  _currentStrokeIndex;
    double  _delayBetweenStrokes;
    CADisplayLink * _displayLink;
    ETQuadCurvePointFIFO * _interpolatingFIFO;
    double  _lastDisplayLinkTime;
    ETSketchMessage * _messageData;
    unsigned long long  _numberOfDrawnStrokes;
    double  _pauseTime;
    bool  _paused;
    bool  _playbackCompleted;
    bool  _playing;
    ETPointFIFO * _pointFIFO;
    ETGLSketchRenderer * _renderer;
    double  _renderingDelay;
    bool  _renderingOffscreen;
    double  _renderingStartTime;
    ETQuadCurvePointFIFO * _secondaryInterpolatingFIFO;
    ETPointFIFO * _secondaryPointFIFO;
    ETBoxcarFilterPointFIFO * _secondarySmoothingFIFO;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__first_; 
        } __end_cap_; 
    }  _secondaryVertexBatchCount;
    ETBoxcarFilterPointFIFO * _smoothingFIFO;
    double  _timestampForLastDrawnPoint;
    float  _unitSize;
    bool  _useFastVerticalWisp;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__first_; 
        } __end_cap_; 
    }  _vertexBatchCount;
    struct vector<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > > >="__begin_"^{vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > {}  _vertexBatches;
    unsigned long long  _vertexOffset;
    double  _wispDelay;
}

@property (nonatomic, retain) EAGLContext *context;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<float __attribute__((ext_vector_type(2)))' */ struct  controlBatches; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^}} */
@property (nonatomic) double delayBetweenStrokes;
@property (nonatomic, retain) ETQuadCurvePointFIFO *interpolatingFIFO;
@property (nonatomic, retain) ETSketchMessage *messageData;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) bool playbackCompleted;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic, retain) ETPointFIFO *pointFIFO;
@property (nonatomic, retain) ETGLSketchRenderer *renderer;
@property (nonatomic, retain) ETQuadCurvePointFIFO *secondaryInterpolatingFIFO;
@property (nonatomic, retain) ETPointFIFO *secondaryPointFIFO;
@property (nonatomic, retain) ETBoxcarFilterPointFIFO *secondarySmoothingFIFO;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<unsigned long' */ struct  secondaryVertexBatchCount; /* unknown property attribute:  std::__1::allocator<unsigned long> >=^Q}} */
@property (nonatomic, retain) ETBoxcarFilterPointFIFO *smoothingFIFO;
@property (nonatomic) double timestampForLastDrawnPoint;
@property (nonatomic) float unitSize;
@property (nonatomic) bool useFastVerticalWisp;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<unsigned long' */ struct  vertexBatchCount; /* unknown property attribute:  std::__1::allocator<unsigned long> >=^Q}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<std::__1::vector<float __attribute__((ext_vector_type(2)))' */ struct  vertexBatches; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(2)))> >}}} */
@property (nonatomic) unsigned long long vertexOffset;
@property (nonatomic) double wispDelay;

+ (Class)layerClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_doesPoint:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct { unsigned short x_2_1_1; } x2; }*)arg1 predateTime:(double)arg2;
- (void)_drawCurrentPointAdvancingPlayback;
- (void)_endPlayback;
- (bool)_getCurrentSketchPoint:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct { unsigned short x_2_1_1; } x2; }*)arg1;
- (void)animateOutWithCompletion:(id /* block */)arg1;
- (void)beginStrokeWithColor:(id)arg1;
- (void)clear;
- (void)clearAllPoints;
- (id)context;
- (struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {})controlBatches;
- (struct CGImage { }*)createImageForTime:(double)arg1;
- (struct CGImage { }*)createRenderedFrameImage;
- (double)delayBetweenStrokes;
- (void)didCompleteStroke;
- (void)drawFrameBeforeWisp;
- (void)drawView:(id)arg1;
- (void)handleSketchAtPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)handleTapAtPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)interpolatingFIFO;
- (bool)isPaused;
- (bool)isPlaying;
- (void)layoutSubviews;
- (id)messageData;
- (bool)playbackCompleted;
- (id)pointFIFO;
- (id)renderer;
- (id)secondaryInterpolatingFIFO;
- (id)secondaryPointFIFO;
- (id)secondarySmoothingFIFO;
- (struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; })secondaryVertexBatchCount;
- (void)setContext:(id)arg1;
- (void)setControlBatches:(struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {})arg1;
- (void)setDelayBetweenStrokes:(double)arg1;
- (void)setGLContextAsCurrent;
- (void)setInterpolatingFIFO:(id)arg1;
- (void)setMessageData:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPlaybackCompleted:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPointFIFO:(id)arg1;
- (void)setRenderer:(id)arg1;
- (void)setSecondaryInterpolatingFIFO:(id)arg1;
- (void)setSecondaryPointFIFO:(id)arg1;
- (void)setSecondarySmoothingFIFO:(id)arg1;
- (void)setSecondaryVertexBatchCount:(struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; })arg1;
- (void)setSmoothingFIFO:(id)arg1;
- (void)setTimestampForLastDrawnPoint:(double)arg1;
- (void)setUnitSize:(float)arg1;
- (void)setUseFastVerticalWisp:(bool)arg1;
- (void)setVertexBatchCount:(struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; })arg1;
- (void)setVertexBatches:(struct vector<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > > >=^{vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > {})arg1;
- (void)setVertexOffset:(unsigned long long)arg1;
- (void)setWispDelay:(double)arg1;
- (void)sketchRendererDidReachVertexLimit:(id)arg1;
- (id)smoothingFIFO;
- (double)timestampForLastDrawnPoint;
- (float)unitSize;
- (void)updateRendererWithPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 controlPoint:(/* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 flush:(bool)arg4;
- (void)updateRendererWithSecondaryPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 controlPoint:(/* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 flush:(bool)arg4;
- (bool)useFastVerticalWisp;
- (struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; })vertexBatchCount;
- (struct vector<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > > >=^{vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > {})vertexBatches;
- (unsigned long long)vertexOffset;
- (double)wispDelay;

@end