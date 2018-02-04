/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceTextCell : MKPlaceSectionRowView {
    NSLayoutConstraint * _bottomConstraint;
    _MKUILabel * _label;
    NSLayoutConstraint * _topConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, retain) _MKUILabel *label;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) NSLayoutConstraint *topConstraint;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)bottomConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setBottomConstraint:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTopConstraint:(id)arg1;
- (id)text;
- (id)topConstraint;

@end