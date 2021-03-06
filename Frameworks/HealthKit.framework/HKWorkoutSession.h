/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutSession : NSObject <NSSecureCoding, _HKWorkoutSessionDelegate> {
    <HKWorkoutSessionDelegate> * _delegate;
    _HKWorkoutSession * _privateSession;
    NSObject<OS_dispatch_queue> * _queue;
    <HKWorkoutSessionDelegate> * _strongDelegate;
}

@property (readonly) unsigned long long activityType;
@property (readonly, copy) NSString *debugDescription;
@property <HKWorkoutSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) long long locationType;
@property (getter=_privateSession, nonatomic, readonly) _HKWorkoutSession *privateSession;
@property (readonly) NSDate *startDate;
@property (readonly) long long state;
@property (readonly) Class superclass;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_privateSession;
- (unsigned long long)activityType;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (long long)locationType;
- (void)setDelegate:(id)arg1;
- (id)startDate;
- (long long)state;
- (id)workoutConfiguration;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didUpdateMetrics:(id)arg2;

@end
