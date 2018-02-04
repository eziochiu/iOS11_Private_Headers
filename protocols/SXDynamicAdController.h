/* made by EzioChiu.
 */

@protocol SXDynamicAdController <NSObject>

@required

- (bool)canPlaceAdsForBlueprint:(SXLayoutBlueprint *)arg1 layoutDataProvider:(SXLayoutDataProvider *)arg2;
- (void)placeAdsForBlueprint:(SXLayoutBlueprint *)arg1 layoutDataProvider:(SXLayoutDataProvider *)arg2;

@end
