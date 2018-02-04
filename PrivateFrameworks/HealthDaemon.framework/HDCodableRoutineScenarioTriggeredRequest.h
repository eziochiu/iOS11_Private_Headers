/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRoutineScenarioTriggeredRequest : PBRequest <NSCopying> {
    HDCodableRoutineLocation * _currentLocation;
    struct { 
        unsigned int triggerTypes : 1; 
    }  _has;
    unsigned long long  _triggerTypes;
}

@property (nonatomic, retain) HDCodableRoutineLocation *currentLocation;
@property (nonatomic, readonly) bool hasCurrentLocation;
@property (nonatomic) bool hasTriggerTypes;
@property (nonatomic) unsigned long long triggerTypes;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentLocation;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentLocation;
- (bool)hasTriggerTypes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setHasTriggerTypes:(bool)arg1;
- (void)setTriggerTypes:(unsigned long long)arg1;
- (unsigned long long)triggerTypes;
- (void)writeTo:(id)arg1;

@end