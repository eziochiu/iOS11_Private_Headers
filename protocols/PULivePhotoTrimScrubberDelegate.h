/* made by EzioChiu.
 */

@protocol PULivePhotoTrimScrubberDelegate <NSObject>

@optional

- (bool)trimScrubber:(PULivePhotoTrimScrubber *)arg1 canBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(PULivePhotoTrimScrubber *)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(PULivePhotoTrimScrubber *)arg1 didChangeLoupeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)trimScrubber:(PULivePhotoTrimScrubber *)arg1 didChangeTimeForElement:(long long)arg2;
- (void)trimScrubber:(PULivePhotoTrimScrubber *)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(bool)arg3;
- (void)trimScrubberAssetDurationDidChange:(PULivePhotoTrimScrubber *)arg1;

@end