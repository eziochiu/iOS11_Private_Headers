/* made by EzioChiu.
 */

@protocol PUReviewScrubberDataSource <NSObject>

@required

- (unsigned long long)numberOfPhotosInReviewScrubber:(PUReviewScrubber *)arg1;
- (bool)reviewScrubber:(PUReviewScrubber *)arg1 shouldProvideFeedbackForCellAtIndexPath:(NSIndexPath *)arg2;

@end
