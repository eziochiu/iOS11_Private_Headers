/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBAutoBugCapturePayload : PBCodable <NSCopying> {
    int  _eventType;
    struct { 
        unsigned int eventType : 1; 
    }  _has;
    BLTPBAutoBugCapturePayloadSendFail * _sendFailInfo;
}

@property (nonatomic) int eventType;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasSendFailInfo;
@property (nonatomic, retain) BLTPBAutoBugCapturePayloadSendFail *sendFailInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventType;
- (bool)hasEventType;
- (bool)hasSendFailInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sendFailInfo;
- (void)setEventType:(int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setSendFailInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
