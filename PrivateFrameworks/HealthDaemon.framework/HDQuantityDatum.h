/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantityDatum : HDDataCollectorSensorDatum {
    unsigned long long  _options;
    HKQuantity * _quantity;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) HKQuantity *quantity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)datumForChangeSince:(id)arg1 newIdentifier:(id)arg2 newResumeContext:(id)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3 quantity:(id)arg4;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3 quantity:(id)arg4 options:(unsigned long long)arg5;
- (unsigned long long)options;
- (id)quantity;

@end
