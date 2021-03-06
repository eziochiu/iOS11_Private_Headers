/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOLocationShiftRequester : GEOServiceRequester

- (id)_validateResponse:(id)arg1 userInfo:(id)arg2;
- (void)cancelRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(id /* block */)arg4;

@end
