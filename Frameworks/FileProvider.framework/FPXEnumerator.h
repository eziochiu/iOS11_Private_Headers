/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXEnumerator : NSObject <FPXEnumerator> {
    FPXDomainContext * _domainContext;
    bool  _invalidated;
    FPItemID * _observedItemID;
    <FPXEnumeratorObserver> * _observer;
    <NSFileProviderEnumerator> * _vendorEnumerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) FPItemID *observedItemID;
@property (readonly) <FPXEnumeratorObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)alternateContentsWereUpdatedAtURL:(id)arg1 forItem:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)enumerateChangesFromToken:(id)arg1 reply:(id /* block */)arg2;
- (void)enumerateItemsFromPage:(id)arg1 reply:(id /* block */)arg2;
- (void)forceItemUpdate:(id)arg1;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 vendorEnumerator:(id)arg3 observer:(id)arg4;
- (void)invalidate;
- (void)invalidateVendorEnumeration;
- (id)observedItemID;
- (id)observer;

@end