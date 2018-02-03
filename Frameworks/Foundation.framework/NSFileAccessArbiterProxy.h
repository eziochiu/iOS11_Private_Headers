/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCConnectionDelegate, NSXPCListenerDelegate> {
    NSMutableDictionary * _presenterMessengersByID;
    NSMutableDictionary * _presentersByID;
    NSMutableArray * _providerListeners;
    NSMapTable * _providerMessengersByID;
    NSMutableSet * _providers;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_accessPresenterOperationRecordsUsingBlock:(id /* block */)arg1;
+ (id)_fetchProviderMessengerForListener:(id)arg1;
+ (id)_fileReactorDebuggingInformation;
+ (id)_idForReactor:(id)arg1;
+ (void)_setProviderMessenger:(id)arg1 forListener:(id)arg2;
+ (id)_willBeginOperationForReactor:(id)arg1 withDescription:(id)arg2;

- (id)_onqueue_filePresenters;
- (id)_onqueue_fileProviders;
- (void)addFilePresenter:(id)arg1;
- (void)addFileProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)cancelAccessClaimForID:(id)arg1;
- (void)dealloc;
- (id)filePresenters;
- (id)fileProviders;
- (void)getDebugInfoWithCompletionHandler:(id /* block */)arg1;
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(bool)arg2;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (void)handleCanceledServer;
- (id)idForFileReactor:(id)arg1;
- (id)initWithServer:(id)arg1 queue:(id)arg2;
- (bool)itemHasPresentersAtURL:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performBarrier;
- (void)performBarrierAsync:(id /* block */)arg1;
- (void)removeFilePresenter:(id)arg1;
- (void)removeFileProvider:(id)arg1;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (oneway void)revokeAccessClaimForID:(id)arg1;
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;
- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;

@end