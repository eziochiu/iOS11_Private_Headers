/* made by EzioChiu.
 */

@protocol CXCallObserverDataSource <NSObject>

@required

- (void)addDelegate:(id <CXCallObserverDataSourceDelegate>)arg1;
- (NSDictionary *)callUUIDToCallMap;
- (void)invalidate;
- (void)removeDelegate:(id <CXCallObserverDataSourceDelegate>)arg1;
- (void)requestTransaction:(void *)arg1 forExtensionIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CXTransaction *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
