/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSKView : SKView <ARInternalSessionObserver> {
    long long  _interfaceOrientation;
    <NSObject> * _interfaceOrientationObserver;
    NSSet * _lastFrameAnchors;
    NSMutableDictionary * _nodesByAnchorIdentifier;
    ARSession * _session;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ARSKViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ARSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_anchorForNode:(id)arg1 inFrame:(id)arg2;
- (void)_updateAnchors:(id)arg1 camera:(id)arg2;
- (void)_updateNode:(id)arg1 forAnchor:(id)arg2 projectionMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 camera:(id)arg4 orientation:(long long)arg5;
- (id)anchorForNode:(id)arg1;
- (void)commonInit;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 types:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)nodeForAnchor:(id)arg1;
- (id)session;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)setSession:(id)arg1;

@end