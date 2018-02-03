/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIProgressView : UIView {
    _UICircleProgressView * _progressView;
    NSProgress * _trackedProgress;
}

@property (nonatomic, retain) NSProgress *trackedProgress;

- (void).cxx_destruct;
- (void)_updateProgressValue;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setTrackedProgress:(id)arg1;
- (id)trackedProgress;

@end