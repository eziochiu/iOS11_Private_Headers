/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutSession : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    bool  _connectedToFitnessMachine;
    <_HKWorkoutSessionDelegate> * _delegate;
    NSDate * _endDate;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _startDate;
    long long  _state;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (setter=_setUUID:, nonatomic, retain) NSUUID *UUID;
@property (nonatomic) bool connectedToFitnessMachine;
@property (nonatomic) <_HKWorkoutSessionDelegate> *delegate;
@property (readonly) NSDate *endDate;
@property (readonly) NSDate *startDate;
@property (nonatomic) long long state;
@property (nonatomic, readonly, copy) HKWorkoutConfiguration *workoutConfiguration;

+ (bool)areSwimmingSessionsAvailable;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)_setUUID:(id)arg1;
- (bool)_validateWorkoutConfiguration:(id)arg1 errorOut:(id*)arg2;
- (bool)connectedToFitnessMachine;
- (id)delegate;
- (id)description;
- (void)didChangeToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3;
- (void)didFailWithError:(id)arg1;
- (void)didGenerateEvent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (void)setConnectedToFitnessMachine:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(long long)arg1;
- (id)startDate;
- (long long)state;
- (id)workoutConfiguration;

@end
