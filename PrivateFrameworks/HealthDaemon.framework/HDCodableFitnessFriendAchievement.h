/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableFitnessFriendAchievement : PBCodable <HDDecoding, NSCopying> {
    double  _completedDate;
    NSString * _definitionIdentifier;
    double  _doubleValue;
    NSData * _friendUUID;
    struct { 
        unsigned int completedDate : 1; 
        unsigned int doubleValue : 1; 
        unsigned int intValue : 1; 
        unsigned int workActivityType : 1; 
    }  _has;
    long long  _intValue;
    HDCodableSample * _sample;
    long long  _workActivityType;
}

@property (nonatomic) double completedDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *definitionIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic) double doubleValue;
@property (nonatomic, retain) NSData *friendUUID;
@property (nonatomic) bool hasCompletedDate;
@property (nonatomic, readonly) bool hasDefinitionIdentifier;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic, readonly) bool hasFriendUUID;
@property (nonatomic) bool hasIntValue;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasWorkActivityType;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long intValue;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic) long long workActivityType;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (double)completedDate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)definitionIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (id)friendUUID;
- (bool)hasCompletedDate;
- (bool)hasDefinitionIdentifier;
- (bool)hasDoubleValue;
- (bool)hasFriendUUID;
- (bool)hasIntValue;
- (bool)hasSample;
- (bool)hasWorkActivityType;
- (unsigned long long)hash;
- (long long)intValue;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setCompletedDate:(double)arg1;
- (void)setDefinitionIdentifier:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setHasCompletedDate:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntValue:(bool)arg1;
- (void)setHasWorkActivityType:(bool)arg1;
- (void)setIntValue:(long long)arg1;
- (void)setSample:(id)arg1;
- (void)setWorkActivityType:(long long)arg1;
- (long long)workActivityType;
- (void)writeTo:(id)arg1;

@end