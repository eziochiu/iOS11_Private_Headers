/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface AWDBarcodeSupportCodeDetectedEvent : PBCodable <NSCopying> {
    int  _barcodeDataType;
    int  _clientType;
    unsigned long long  _detectionTimeMs;
    struct { 
        unsigned int detectionTimeMs : 1; 
        unsigned int timestamp : 1; 
        unsigned int barcodeDataType : 1; 
        unsigned int clientType : 1; 
        unsigned int invalidBarcodeDataType : 1; 
    }  _has;
    int  _invalidBarcodeDataType;
    unsigned long long  _timestamp;
}

@property (nonatomic) int barcodeDataType;
@property (nonatomic) int clientType;
@property (nonatomic) unsigned long long detectionTimeMs;
@property (nonatomic) bool hasBarcodeDataType;
@property (nonatomic) bool hasClientType;
@property (nonatomic) bool hasDetectionTimeMs;
@property (nonatomic) bool hasInvalidBarcodeDataType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int invalidBarcodeDataType;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsBarcodeDataType:(id)arg1;
- (int)StringAsClientType:(id)arg1;
- (int)StringAsInvalidBarcodeDataType:(id)arg1;
- (int)barcodeDataType;
- (id)barcodeDataTypeAsString:(int)arg1;
- (int)clientType;
- (id)clientTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)detectionTimeMs;
- (id)dictionaryRepresentation;
- (bool)hasBarcodeDataType;
- (bool)hasClientType;
- (bool)hasDetectionTimeMs;
- (bool)hasInvalidBarcodeDataType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (int)invalidBarcodeDataType;
- (id)invalidBarcodeDataTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBarcodeDataType:(int)arg1;
- (void)setClientType:(int)arg1;
- (void)setDetectionTimeMs:(unsigned long long)arg1;
- (void)setHasBarcodeDataType:(bool)arg1;
- (void)setHasClientType:(bool)arg1;
- (void)setHasDetectionTimeMs:(bool)arg1;
- (void)setHasInvalidBarcodeDataType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInvalidBarcodeDataType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
