/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDCallHistoryDatabaseMigration : PBCodable <NSCopying> {
    unsigned int  _domain;
    unsigned int  _error;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int domain : 1; 
        unsigned int error : 1; 
        unsigned int newSchema : 1; 
        unsigned int oldSchema : 1; 
    }  _has;
    unsigned int  _newSchema;
    unsigned int  _oldSchema;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int domain;
@property (nonatomic) unsigned int error;
@property (nonatomic) bool hasDomain;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasNewSchema;
@property (nonatomic) bool hasOldSchema;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int newSchema;
@property (nonatomic) unsigned int oldSchema;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)domain;
- (unsigned int)error;
- (bool)hasDomain;
- (bool)hasError;
- (bool)hasNewSchema;
- (bool)hasOldSchema;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)newSchema;
- (unsigned int)oldSchema;
- (bool)readFrom:(id)arg1;
- (void)setDomain:(unsigned int)arg1;
- (void)setError:(unsigned int)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasNewSchema:(bool)arg1;
- (void)setHasOldSchema:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNewSchema:(unsigned int)arg1;
- (void)setOldSchema:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end