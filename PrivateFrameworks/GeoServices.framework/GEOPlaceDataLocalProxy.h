/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy> {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    GEOPlaceDataCacheRegister * _cacheRegister;
    NSMapTable * _pendingRequests;
    GEOPhoneNumberMUIDMapper * _phoneNumberMapper;
    NSMutableOrderedSet * _placeHashes;
    NSMutableArray * _requestHandlersPending;
    NSMutableSet * _requestsInProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cachePlaceData:(id)arg1 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg2 shouldOptimizeWritesToDisk:(bool)arg3;
- (void)_cachePlaceData:(id)arg1 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg2 shouldOptimizeWritesToDisk:(bool)arg3 shouldUseDefaultProviderId:(bool)arg4;
- (id)_cachedPlacedForRequest:(id)arg1;
- (void)_callHistoryRecentsClearedObserver:(id)arg1;
- (long long)_invalidationStateForPlace:(id)arg1 fromRequest:(id)arg2;
- (id)_placeResponseFromPlaces:(id)arg1;
- (bool)_populateKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 request:(id)arg2;
- (void)_privacyAndLocationSettingsResetObserver:(id)arg1;
- (void)_requestIdentifiersFromNetwork:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 auditToken:(id)arg4 finished:(id /* block */)arg5 error:(id /* block */)arg6;
- (void)_resetPhoneNumberMapper;
- (void)_trackPlaceData:(id)arg1 forRequest:(id)arg2;
- (id)cacheRegister;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)arg1;
- (void)cancelRequest:(id)arg1;
- (void)clearCache;
- (void)dealloc;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id /* block */)arg1;
- (id)init;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 networkActivity:(id /* block */)arg6 requesterHandler:(id /* block */)arg7;
- (void)requestComponentsFromNetwork:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 requesterHandler:(id /* block */)arg6;
- (void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 requesterHandler:(id /* block */)arg6;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3 auditToken:(id)arg4 requesterHandler:(id /* block */)arg5;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(id /* block */)arg2;
- (void)startRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 finished:(id /* block */)arg5 networkActivity:(id /* block */)arg6 error:(id /* block */)arg7;
- (void)trackPlaceData:(id)arg1;

@end
