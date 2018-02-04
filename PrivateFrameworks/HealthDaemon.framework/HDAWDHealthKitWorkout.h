/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitWorkout : PBCodable <NSCopying> {
    int  _activityType;
    long long  _durationMs;
    long long  _endDate;
    struct { 
        unsigned int durationMs : 1; 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalDistance : 1; 
        unsigned int totalEnergyBurned : 1; 
        unsigned int totalSteps : 1; 
        unsigned int activityType : 1; 
    }  _has;
    long long  _startDate;
    unsigned long long  _timestamp;
    long long  _totalDistance;
    long long  _totalEnergyBurned;
    long long  _totalSteps;
}

@property (nonatomic) int activityType;
@property (nonatomic) long long durationMs;
@property (nonatomic) long long endDate;
@property (nonatomic) bool hasActivityType;
@property (nonatomic) bool hasDurationMs;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalDistance;
@property (nonatomic) bool hasTotalEnergyBurned;
@property (nonatomic) bool hasTotalSteps;
@property (nonatomic) long long startDate;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long totalDistance;
@property (nonatomic) long long totalEnergyBurned;
@property (nonatomic) long long totalSteps;

- (int)StringAsActivityType:(id)arg1;
- (int)activityType;
- (id)activityTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)durationMs;
- (long long)endDate;
- (bool)hasActivityType;
- (bool)hasDurationMs;
- (bool)hasEndDate;
- (bool)hasStartDate;
- (bool)hasTimestamp;
- (bool)hasTotalDistance;
- (bool)hasTotalEnergyBurned;
- (bool)hasTotalSteps;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityType:(int)arg1;
- (void)setDurationMs:(long long)arg1;
- (void)setEndDate:(long long)arg1;
- (void)setHasActivityType:(bool)arg1;
- (void)setHasDurationMs:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalDistance:(bool)arg1;
- (void)setHasTotalEnergyBurned:(bool)arg1;
- (void)setHasTotalSteps:(bool)arg1;
- (void)setStartDate:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalDistance:(long long)arg1;
- (void)setTotalEnergyBurned:(long long)arg1;
- (void)setTotalSteps:(long long)arg1;
- (long long)startDate;
- (unsigned long long)timestamp;
- (long long)totalDistance;
- (long long)totalEnergyBurned;
- (long long)totalSteps;
- (void)writeTo:(id)arg1;

@end