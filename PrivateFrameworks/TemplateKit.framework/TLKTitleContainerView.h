/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKTitleContainerView : TLKStackView {
    TLKImageView * _secondaryImageView;
    TLKVibrantLabel * _secondaryLabel;
    TLKVibrantLabel * _titleLabel;
}

@property (nonatomic, retain) TLKImageView *secondaryImageView;
@property (nonatomic, retain) TLKVibrantLabel *secondaryLabel;
@property (nonatomic, retain) TLKVibrantLabel *titleLabel;

+ (id)titleFont;
+ (id)titleFontforTitle:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)secondaryImageView;
- (id)secondaryLabel;
- (id)secondaryTitleLabelString;
- (void)setSecondaryImageView:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (id)titleLabelString;
- (void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(bool)arg4;

@end
