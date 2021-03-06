/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransactionProcessor : NSObject <CLLocationManagerDelegate> {
    bool  _active;
    <PKPaymentTransactionProcessorDelegate> * _delegate;
    CLGeocoder * _geocoder;
    CLLocationManager * _locationManager;
    NSMutableSet * _locationUpdateItems;
    NSObject<OS_dispatch_source> * _locationUpdateTimeoutTimer;
    NSMutableSet * _merchantCleanupItems;
    NSMutableArray * _reverseGeocodeItems;
    NSMutableSet * _stationsUpdateItems;
    PKUsageNotificationServer * _usageNotificationServer;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentTransactionProcessorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) PKUsageNotificationServer *usageNotificationServer;

- (void).cxx_destruct;
- (void)_abortUpdatingLocationForAllLocationUpdateItems;
- (void)_abortUpdatingLocationForLocationUpdateItem:(id)arg1;
- (void)_beginReverseGeocodingIfPossible;
- (void)_continueUpdatingLocationForTransactionUpdateItem:(id)arg1;
- (id)_pendingLocationUpdateItemForTransaction:(id)arg1;
- (id)_pendingMerchantCleanupItemForTransaction:(id)arg1;
- (id)_pendingReverseGeocodeUpdateItemForTransaction:(id)arg1;
- (id)_pendingStationsUpdateItemForTransaction:(id)arg1;
- (void)_processItemForMerchantCleanup:(id)arg1;
- (void)_processItemForStationsCleanup:(id)arg1;
- (void)_processPaymentTransactionForLocationUpdate:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)_processPaymentTransactionForMerchantCleanup:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)_processPaymentTransactionForStationsUpdate:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)_startUpdatingLocationIfPossible;
- (void)_stopUpdatingLocationIfPossible;
- (void)_updateActiveState;
- (void)_updateLocation:(id)arg1 forLocationUpdateItem:(id)arg2 andMarkAsProcessed:(bool)arg3;
- (id)delegate;
- (id)init;
- (bool)isActive;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)processPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setUsageNotificationServer:(id)arg1;
- (id)usageNotificationServer;

@end
