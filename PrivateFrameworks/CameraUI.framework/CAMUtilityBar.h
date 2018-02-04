/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMUtilityBar : UIView {
    CAMFilterScrubberView * _filterScrubberView;
}

@property (nonatomic, retain) CAMFilterScrubberView *filterScrubberView;

- (void).cxx_destruct;
- (void)_layoutFilterScrubberView;
- (id)filterScrubberView;
- (void)layoutSubviews;
- (void)setFilterScrubberView:(id)arg1;

@end