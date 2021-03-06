/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface AWDWiProxLeDeviceDiscovered : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int rssi : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _peerId;
    int  _rssi;
    NSString * _sessionId;
    unsigned long long  _timestamp;
    int  _type;
}

@property (nonatomic, readonly) bool hasPeerId;
@property (nonatomic) bool hasRssi;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *peerId;
@property (nonatomic) int rssi;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPeerId;
- (bool)hasRssi;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerId;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (id)sessionId;
- (void)setHasRssi:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPeerId:(id)arg1;
- (void)setRssi:(int)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (unsigned long long)timestamp;
- (int)type;
- (void)writeTo:(id)arg1;

@end
