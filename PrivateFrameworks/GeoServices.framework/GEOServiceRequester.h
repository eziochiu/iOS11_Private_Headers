/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOServiceRequester : NSObject {
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
}

- (void).cxx_destruct;
- (void)_cancelRequest:(id)arg1;
- (void)_startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_validateResponse:(id)arg1 userInfo:(id)arg2;
- (id)init;

@end
