/* made by EzioChiu.
 */

@protocol MKAnnotationCalloutControllerDelegate <NSObject>

@required

- (void)calloutController:(MKAnnotationCalloutController *)arg1 annotationView:(MKAnnotationView *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (void)calloutController:(MKAnnotationCalloutController *)arg1 calloutPrimaryActionTriggeredForAnnotationView:(MKAnnotationView *)arg2;
- (void)calloutController:(void *)arg1 scrollToRevealCalloutWithOffset:(void *)arg2 annotationCoordinate:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: MKAnnotationCalloutController *, struct CGPoint { double x1; double x2; }, struct CLLocationCoordinate2D { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calloutController:(MKAnnotationCalloutController *)arg1 visibleCenteringRectInAnnotationView:(MKAnnotationView *)arg2;
- (void)calloutDidAppearForAnnotationView:(MKAnnotationView *)arg1 inCalloutController:(MKAnnotationCalloutController *)arg2;

@optional

- (void)calloutControllerDidFinishMapsTransitionExpanding:(MKAnnotationCalloutController *)arg1;

@end
