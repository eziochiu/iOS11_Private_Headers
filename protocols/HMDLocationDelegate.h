/* made by EzioChiu.
 */

@protocol HMDLocationDelegate <NSObject>

@optional

- (void)didDetermineLocation:(CLLocation *)arg1;
- (void)didDetermineState:(long long)arg1 forRegion:(CLRegion *)arg2;
- (void)didEnterRegion:(CLRegion *)arg1;
- (void)didExitRegion:(CLRegion *)arg1;
- (void)getReachableIPAccessory:(unsigned long long*)arg1 btleAccessory:(unsigned long long*)arg2;

@end