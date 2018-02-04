/* made by EzioChiu.
 */

@protocol SKUIInteractiveSegmenting <NSObject>

@required

- (double)relativeSelectionProgress;
- (long long)segmentPosition;
- (void)setRelativeSelectionProgress:(double)arg1;
- (void)setSegmentPosition:(long long)arg1;

@end