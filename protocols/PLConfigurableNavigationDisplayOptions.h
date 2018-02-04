/* made by EzioChiu.
 */

@protocol PLConfigurableNavigationDisplayOptions <NSObject>

@required

- (NSString *)customTitle;
- (UIView *)customTitleView;
- (void)setCustomTitle:(NSString *)arg1;
- (void)setCustomTitleView:(UIView *)arg1;

@end
