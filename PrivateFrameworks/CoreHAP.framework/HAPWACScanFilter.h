/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACScanFilter : HMFObject {
    double  _ageOutTimePeriod;
    unsigned long long  _filterMethod;
    NSDictionary * _identifiersForDiscoveredAccessories;
    NSDictionary * _lastSeenTracking;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic) double ageOutTimePeriod;
@property (nonatomic) unsigned long long filterMethod;
@property (nonatomic, retain) NSDictionary *identifiersForDiscoveredAccessories;
@property (nonatomic, retain) NSDictionary *lastSeenTracking;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;

- (void).cxx_destruct;
- (double)ageOutTimePeriod;
- (void)dealloc;
- (unsigned long long)filterMethod;
- (id)filterScanResult:(id)arg1;
- (id)identifiersForDiscoveredAccessories;
- (id)initWithFilterMethod:(unsigned long long)arg1;
- (id)lastSeenTracking;
- (id)propertyQueue;
- (id)removedAccessories;
- (void)setAgeOutTimePeriod:(double)arg1;
- (void)setFilterMethod:(unsigned long long)arg1;
- (void)setIdentifiersForDiscoveredAccessories:(id)arg1;
- (void)setLastSeenTracking:(id)arg1;

@end