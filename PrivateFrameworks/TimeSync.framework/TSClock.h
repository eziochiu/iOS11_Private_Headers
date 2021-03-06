/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSClock : NSObject {
    NSMutableArray * _clients;
    unsigned long long  _clockIdentifier;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
}

@property (nonatomic, readonly, retain) NSMutableArray *clients;
@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic, readonly, copy) NSString *clockName;
@property (nonatomic, readonly) double hostRateRatio;
@property (nonatomic, readonly) int lockState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;

+ (unsigned long long)_mach_absolute_time;

- (void)addClient:(id)arg1;
- (id)clients;
- (unsigned long long)clockIdentifier;
- (id)clockName;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1;
- (bool)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned int*)arg2;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1;
- (bool)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned int*)arg2;
- (void)dealloc;
- (bool)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (double)hostRateRatio;
- (id)init;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (int)lockState;
- (id)notificationQueue;
- (void)removeClient:(id)arg1;
- (void)setClockIdentifier:(unsigned long long)arg1;

@end
