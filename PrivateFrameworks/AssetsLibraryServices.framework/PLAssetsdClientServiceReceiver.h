/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLAssetsdClientServiceReceiver : NSObject {
    <PLAssetsdClientService> * _weakClientService;
}

- (void).cxx_destruct;
- (id)clientService;
- (void)dispatchEvent:(id)arg1 connection:(id)arg2;
- (void)downloadStatus:(id)arg1 connection:(id)arg2;
- (id)initWithWeakClientService:(id)arg1;

@end
