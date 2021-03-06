/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTemperatureUnitCoordinator : NSObject {
    NSHashTable * _clients;
    NSObject<OS_dispatch_queue> * _coordinatorQueue;
    bool  _isCelsius;
}

@property (nonatomic, retain) NSHashTable *clients;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *coordinatorQueue;
@property (nonatomic) bool isCelsius;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (id)clients;
- (id)coordinatorQueue;
- (id)init;
- (bool)isCelsius;
- (void)registerObserver:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setCoordinatorQueue:(id)arg1;
- (void)setIsCelsius:(bool)arg1;
- (void)unregisterObserver:(id)arg1;

@end
