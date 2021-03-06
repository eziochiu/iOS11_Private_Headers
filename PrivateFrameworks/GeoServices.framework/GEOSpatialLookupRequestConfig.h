/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSpatialLookupRequestConfig : GEOServiceRequestDefaultConfig {
    double  _timeout;
}

- (int)dataRequestKindForRequest:(id)arg1;
- (id)initWithTimeout:(double)arg1;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (unsigned long long)urlType;

@end
