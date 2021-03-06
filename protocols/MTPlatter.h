/* made by EzioChiu.
 */

@protocol MTPlatter <NSObject>

@required

- (struct CGSize { double x1; double x2; })contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (UIView *)customContentView;
- (bool)hasShadow;
- (bool)isBackgroundBlurred;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setHasShadow:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;

@end
