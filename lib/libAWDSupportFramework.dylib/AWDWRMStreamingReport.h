/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWRMStreamingReport : PBCodable <NSCopying> {
    unsigned int  _counter;
    unsigned int  _duration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int counter : 1; 
        unsigned int duration : 1; 
        unsigned int samplePeriods : 1; 
    }  _has;
    NSMutableArray * _instValues;
    unsigned int  _samplePeriods;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int counter;
@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasCounter;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasSamplePeriods;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *instValues;
@property (nonatomic) unsigned int samplePeriods;
@property (nonatomic) unsigned long long timestamp;

+ (Class)instValuesType;

- (void)addInstValues:(id)arg1;
- (void)clearInstValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)counter;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasCounter;
- (bool)hasDuration;
- (bool)hasSamplePeriods;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)instValues;
- (id)instValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)instValuesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)samplePeriods;
- (void)setCounter:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasCounter:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasSamplePeriods:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInstValues:(id)arg1;
- (void)setSamplePeriods:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
