/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSMediaRemoteServiceProvider : NSObject <RMSServiceProvider> {
    <RMSServiceProviderDelegate> * _delegate;
    NSMapTable * _services;
    void * _televisionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSServiceProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didDiscoverTelevision:(void*)arg1;
- (void)_didRemoveTelevision:(void*)arg1;
- (id)_serviceWithTelevision:(void*)arg1;
- (void)beginDiscovery;
- (void)dealloc;
- (id)delegate;
- (void)endDiscovery;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
