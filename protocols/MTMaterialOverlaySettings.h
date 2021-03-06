/* made by EzioChiu.
 */

@protocol MTMaterialOverlaySettings <NSObject>

@required

- (double)primaryOverlayTintAlpha;
- (UIColor *)primaryOverlayTintColor;
- (double)secondaryOverlayTintAlpha;
- (UIColor *)secondaryOverlayTintColor;
- (void)setPrimaryOverlayTintAlpha:(double)arg1;
- (void)setSecondaryOverlayTintAlpha:(double)arg1;

@end
