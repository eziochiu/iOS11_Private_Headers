/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStoreConnection : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSXPCStore * _store;
}

- (id)createConnectionWithOptions:(id)arg1;
- (void)dealloc;
- (void)disconnect;
- (id)initForStore:(id)arg1 withOptions:(id)arg2;
- (id)sendMessage:(id)arg1 fromContext:(id)arg2 store:(id)arg3 error:(id*)arg4;

@end
