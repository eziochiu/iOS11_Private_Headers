/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOCacheManagerBackOffStrategy : NSObject {
    double  _lastFailure;
    double  _lastSuccess;
    double  _maxTimeInSeconds;
}

+ (id)sharedInstance;

- (double)_unsuccesfulTime;
- (id)init;
- (void)registerFailure;
- (void)registerSuccess;
- (double)secondsToWait;
- (double)timeUntilWhenToWait;

@end
