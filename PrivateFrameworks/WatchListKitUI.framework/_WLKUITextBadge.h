/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _WLKUITextBadge : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _badgeInsets;
    double  _cornerRadius;
    double  _fontSize;
    double  _strokeSize;
    UIColor * _tintColor;
    NSString * _title;
}

@property (nonatomic, readonly) NSAttributedString *attributedTitle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } badgeInsets;
@property (nonatomic) double strokeSize;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)attributedTitle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })badgeInsets;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 tintColor:(id)arg2 fontSize:(double)arg3 cornerRadius:(double)arg4;
- (void)setBadgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStrokeSize:(double)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strokeSize;
- (id)title;

@end
