/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAlertHeaderView : UIView {
    UIImageView * _imageView;
    UILabel * _messageLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)dealloc;
- (id)image;
- (void)layoutSubviews;
- (id)message;
- (void)setImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)shakeTitleView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
