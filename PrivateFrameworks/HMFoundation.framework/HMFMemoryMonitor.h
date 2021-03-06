/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFMemoryMonitor : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMFMemoryMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _memoryPressure;
    long long  _memoryState;
    bool  _monitoring;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property <HMFMemoryMonitorDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *memoryPressure;
@property (nonatomic, readonly) long long memoryState;
@property (getter=isMonitoring, nonatomic) bool monitoring;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;

- (void).cxx_destruct;
- (void)_handleMemoryStateChange:(long long)arg1;
- (id)clientQueue;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isMonitoring;
- (id)memoryPressure;
- (long long)memoryState;
- (id)propertyQueue;
- (void)setDelegate:(id)arg1;
- (void)setMemoryState:(long long)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)start;
- (void)stop;

@end
