/* made by EzioChiu.
 */

@protocol SUNetworkObserver <NSObject>

@optional

- (void)carrierBundleChanged;
- (void)cellularRoamingStatusChanged:(bool)arg1;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (void)operatorBundleChanged;

@end
