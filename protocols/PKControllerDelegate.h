/* made by EzioChiu.
 */

@protocol PKControllerDelegate <NSObject>

@required

- (void)drawingChanged:(PKDrawing *)arg1;
- (CAEAGLLayer *)glLayer;
- (void)setAllowLiveInteraction:(bool)arg1;
- (bool)setNeedsDrawingDisplay;

@end
