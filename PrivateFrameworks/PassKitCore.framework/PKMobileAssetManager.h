/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKMobileAssetManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_downloadAsset:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_downloadOptionsWithUserInitiation:(bool)arg1;
- (void)_queryAssetsWithAssetType:(id)arg1 predicate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_retrieveAssetWithAssetType:(id)arg1 userInitiated:(bool)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchEducationVideoWithPeerPaymentCard:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchNeededAssetsForThisDeviceWithPeerPaymentCard:(bool)arg1;
- (id)init;
- (id)predicateForEducationVideo;
- (id)sortDescriptorsForEducationVideoWithPeerPaymentCard:(bool)arg1;

@end