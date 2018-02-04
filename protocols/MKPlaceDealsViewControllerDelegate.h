/* made by EzioChiu.
 */

@protocol MKPlaceDealsViewControllerDelegate <NSObject>

@required

- (void)dealsViewController:(MKPlaceDealsViewController *)arg1 didSelectDeal:(id <MKMapItemVendorDeal>)arg2;

@end
