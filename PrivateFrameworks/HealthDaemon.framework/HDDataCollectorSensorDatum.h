/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataCollectorSensorDatum : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSUUID * _datumIdentifier;
    NSData * _resumeContext;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) NSUUID *datumIdentifier;
@property (nonatomic, readonly, copy) NSData *resumeContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)datumIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)resumeContext;

@end
