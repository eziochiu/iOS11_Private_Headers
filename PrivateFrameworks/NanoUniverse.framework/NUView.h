/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface NUView : UIView {
    int  _backingHeight;
    int  _backingWidth;
    double  _baseTime;
    unsigned int  _colorRenderbuffer;
    EAGLContext * _context;
    unsigned int  _defaultFramebuffer;
    unsigned int  _depthRenderbuffer;
    CADisplayLink * _displayLink;
    int  _frameInterval;
    unsigned int  _isAnimated;
    unsigned int  _isAnimating;
    NSMutableArray * _portals;
    NUScene * _scene;
    unsigned int  _vertexArray;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic) int animationFrameInterval;
@property (nonatomic, readonly) int backingHeight;
@property (nonatomic, readonly) int backingWidth;
@property (nonatomic, retain) NUScene *scene;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_backgrounded:(id)arg1;
- (void)_foregrounded:(id)arg1;
- (bool)_init;
- (void)_resizeFramebuffer;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)addPortal:(id)arg1;
- (int)animationFrameInterval;
- (int)backingHeight;
- (int)backingWidth;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (void)layoutSubviews;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (id)scene;
- (void)setAnimationFrameInterval:(int)arg1;
- (void)setScene:(id)arg1;
- (id)snapshot;
- (id)snapshot:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)startAnimation;
- (void)stopAnimation;
- (void)willMoveToWindow:(id)arg1;

@end
