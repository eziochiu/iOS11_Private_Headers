/* made by EzioChiu.
 */

@protocol PXMutableImageLayerModulator <NSObject>

@required

- (CALayer *)layer;
- (ISLivePhotoUIView *)livePhotoView;
- (void)setLayer:(CALayer *)arg1;
- (void)setLivePhotoView:(ISLivePhotoUIView *)arg1;

@end
