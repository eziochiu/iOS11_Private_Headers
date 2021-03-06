/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket {
    <GEOMapItem> * _mapItemToRefine;
    GEOPDPlaceRequest * _request;
    GEOPDPlaceResponse * _response;
}

- (void).cxx_destruct;
- (void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(id /* block */)arg4 refinedHandler:(id /* block */)arg5 networkActivity:(id /* block */)arg6;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (void)cancel;
- (id)description;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3;
- (id)resultSectionHeader;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;

@end
