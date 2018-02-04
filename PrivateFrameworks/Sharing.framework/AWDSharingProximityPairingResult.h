/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingProximityPairingResult : PBCodable <NSCopying> {
    unsigned int  _connectErrors;
    int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectErrors : 1; 
        unsigned int errorCode : 1; 
        unsigned int pairingMs : 1; 
        unsigned int userResponseMs : 1; 
        unsigned int userAccepted : 1; 
    }  _has;
    unsigned int  _pairingMs;
    NSString * _sessionUUID;
    unsigned long long  _timestamp;
    bool  _userAccepted;
    unsigned int  _userResponseMs;
}

@property (nonatomic) unsigned int connectErrors;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasConnectErrors;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasPairingMs;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUserAccepted;
@property (nonatomic) bool hasUserResponseMs;
@property (nonatomic) unsigned int pairingMs;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool userAccepted;
@property (nonatomic) unsigned int userResponseMs;

- (void).cxx_destruct;
- (unsigned int)connectErrors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (bool)hasConnectErrors;
- (bool)hasErrorCode;
- (bool)hasPairingMs;
- (bool)hasSessionUUID;
- (bool)hasTimestamp;
- (bool)hasUserAccepted;
- (bool)hasUserResponseMs;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pairingMs;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setConnectErrors:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasConnectErrors:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasPairingMs:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUserAccepted:(bool)arg1;
- (void)setHasUserResponseMs:(bool)arg1;
- (void)setPairingMs:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserAccepted:(bool)arg1;
- (void)setUserResponseMs:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (bool)userAccepted;
- (unsigned int)userResponseMs;
- (void)writeTo:(id)arg1;

@end