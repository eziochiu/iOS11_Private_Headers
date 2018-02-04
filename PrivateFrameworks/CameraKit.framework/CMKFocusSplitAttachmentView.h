/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKFocusSplitAttachmentView : CMKFocusAttachmentView {
    bool  _split;
}

@property (nonatomic) bool split;

- (void)_updateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSplit:(bool)arg1;
- (bool)split;

@end