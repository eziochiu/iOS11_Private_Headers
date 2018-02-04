/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaBrowser : HMFObject <HMFLogging> {
    NSMutableSet * _accessoryAdvertisements;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMDMediaBrowserDelegate> * _delegate;
    bool  _discoverAssociatedAccessories;
    bool  _discoverUnassociatedAccessories;
    void * _discoverySession;
    void * _discoverySessionCallbackToken;
    HMDHomeManager * _homeManager;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (readonly, copy) NSArray *accessoryAdvertisements;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) void*discoverySession;
@property (nonatomic) void*discoverySessionCallbackToken;
@property (readonly) unsigned long long hash;
@property HMDHomeManager *homeManager;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;
+ (bool)shouldEnableForcedWHABrowse;

- (void).cxx_destruct;
- (void)_handleAvailableEndpoints:(struct __CFArray { }*)arg1;
- (void)_notifyDelegateOfUpdatedEndpoints:(id)arg1;
- (void)_startDiscoveringAccessories;
- (void)_stopDiscoveringAccessories;
- (id)accessoryAdvertisements;
- (void)addAdvertisements:(id)arg1;
- (id)clientQueue;
- (id)currentAccessory;
- (id)currentAccessoryAdvertisement;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1 additionalDescription:(id)arg2;
- (void*)discoverySession;
- (void*)discoverySessionCallbackToken;
- (id)dumpDescription;
- (void)handleAvailableEndpoints:(struct __CFArray { }*)arg1;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (id)messageDispatcher;
- (void)notifyDelegateOfAddedAdvertisements:(id)arg1;
- (void)notifyDelegateOfRemovedAdvertisements:(id)arg1;
- (id)propertyQueue;
- (void)removeAdvertisements:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoverySessionCallbackToken:(void*)arg1;
- (void)setHomeManager:(id)arg1;
- (id)shortDescription;
- (void)startDiscoveringAssociatedAccessories;
- (void)startDiscoveringUnassociatedAccessories;
- (void)stopDiscoveringAssociatedAccessories;
- (void)stopDiscoveringUnassociatedAccessories;
- (id)unassociatedAccessoryFromAdvertisementData:(id)arg1;
- (void)updateAccessory:(id)arg1;

@end
