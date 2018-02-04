/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLocationTuple : NSObject {
    NSDate * _date;
    CLLocation * _location;
    unsigned long long  _numberOfReachableBTLEAccessory;
    unsigned long long  _numberOfReachableIPAccessory;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) unsigned long long numberOfReachableBTLEAccessory;
@property (nonatomic) unsigned long long numberOfReachableIPAccessory;

+ (id)tupleWithLocation:(id)arg1 reachableIPAccessory:(unsigned long long)arg2 reachableBTLEAccessory:(unsigned long long)arg3 date:(id)arg4;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)location;
- (unsigned long long)numberOfReachableBTLEAccessory;
- (unsigned long long)numberOfReachableIPAccessory;
- (void)setDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNumberOfReachableBTLEAccessory:(unsigned long long)arg1;
- (void)setNumberOfReachableIPAccessory:(unsigned long long)arg1;

@end
