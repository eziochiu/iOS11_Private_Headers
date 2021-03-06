/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface AWDBarcodeSupportCodeActivatedEvent : PBCodable <NSCopying> {
    int  _barcodeDataType;
    int  _clientType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int barcodeDataType : 1; 
        unsigned int clientType : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int barcodeDataType;
@property (nonatomic) int clientType;
@property (nonatomic) bool hasBarcodeDataType;
@property (nonatomic) bool hasClientType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsBarcodeDataType:(id)arg1;
- (int)StringAsClientType:(id)arg1;
- (int)barcodeDataType;
- (id)barcodeDataTypeAsString:(int)arg1;
- (int)clientType;
- (id)clientTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBarcodeDataType;
- (bool)hasClientType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBarcodeDataType:(int)arg1;
- (void)setClientType:(int)arg1;
- (void)setHasBarcodeDataType:(bool)arg1;
- (void)setHasClientType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
