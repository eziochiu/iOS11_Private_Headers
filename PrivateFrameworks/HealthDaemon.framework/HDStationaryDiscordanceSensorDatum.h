/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStationaryDiscordanceSensorDatum : HDDataCollectorSensorDatum {
    NSArray * _associatedSampleUUIDs;
    HKQuantity * _discordanceThreshold;
}

@property (nonatomic, readonly) NSArray *associatedSampleUUIDs;
@property (nonatomic, readonly) HKQuantity *discordanceThreshold;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedSampleUUIDs;
- (id)discordanceThreshold;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 discordanceThreshold:(id)arg3 associatedSampleUUIDs:(id)arg4 resumeContext:(id)arg5;
- (id)metadata;

@end
