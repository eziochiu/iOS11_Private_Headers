/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataRequestThrottler : NSObject {
    NSObject<OS_dispatch_queue> * _isolation;
    NSMutableDictionary * _throttlers;
}

+ (id)sharedThrottler;

- (void).cxx_destruct;
- (id)_init;
- (bool)allowRequestForKey:(struct GEOThrottleKey { unsigned int x1; })arg1;
- (bool)allowRequestForPlaceRequestType:(int)arg1;
- (bool)allowRequestForRequestKind:(int)arg1;
- (id)description;
- (id)init;
- (bool)isCloseToThrottlingForKey:(struct GEOThrottleKey { unsigned int x1; })arg1;
- (void)withThrottlerForKey:(struct GEOThrottleKey { unsigned int x1; })arg1 do:(id /* block */)arg2;

@end
