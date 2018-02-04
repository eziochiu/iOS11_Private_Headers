/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAppGrabberView : UIView {
    CKAppChevronView * _chevronView;
    UIView * _grayLine;
    UIView * _headerView;
    UILabel * _pluginTitleLabel;
}

@property (nonatomic, readonly) double chevronMaxYOffset;
@property (nonatomic) long long state;
@property (nonatomic, readonly) double visualOriginYOffset;

+ (double)roundedCornerRadius;

- (void).cxx_destruct;
- (double)chevronMaxYInView:(id)arg1;
- (double)chevronMaxYOffset;
- (void)fadeOutAppTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRoundsTopConers:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2;
- (long long)state;
- (void)updateAppTitle:(id)arg1;
- (void)updateHeaderFrame:(bool)arg1;
- (double)visualOriginYInView:(id)arg1;
- (double)visualOriginYOffset;

@end
