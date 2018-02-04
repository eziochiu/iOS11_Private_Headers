/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBLocalNotificationReturn : PBCodable <NSCopying> {
    struct { 
        unsigned int localNotificationSentTimestamp : 1; 
        unsigned int localNoticationNumberReceived : 1; 
        unsigned int localNotificationDirectOpenNumber : 1; 
        unsigned int localNotificationType : 1; 
        unsigned int localNotificationDirectOpen : 1; 
    }  _has;
    int  _localNoticationNumberReceived;
    bool  _localNotificationDirectOpen;
    int  _localNotificationDirectOpenNumber;
    long long  _localNotificationSentTimestamp;
    int  _localNotificationType;
}

@property (nonatomic) bool hasLocalNoticationNumberReceived;
@property (nonatomic) bool hasLocalNotificationDirectOpen;
@property (nonatomic) bool hasLocalNotificationDirectOpenNumber;
@property (nonatomic) bool hasLocalNotificationSentTimestamp;
@property (nonatomic) bool hasLocalNotificationType;
@property (nonatomic) int localNoticationNumberReceived;
@property (nonatomic) bool localNotificationDirectOpen;
@property (nonatomic) int localNotificationDirectOpenNumber;
@property (nonatomic) long long localNotificationSentTimestamp;
@property (nonatomic) int localNotificationType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocalNoticationNumberReceived;
- (bool)hasLocalNotificationDirectOpen;
- (bool)hasLocalNotificationDirectOpenNumber;
- (bool)hasLocalNotificationSentTimestamp;
- (bool)hasLocalNotificationType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)localNoticationNumberReceived;
- (bool)localNotificationDirectOpen;
- (int)localNotificationDirectOpenNumber;
- (long long)localNotificationSentTimestamp;
- (int)localNotificationType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLocalNoticationNumberReceived:(bool)arg1;
- (void)setHasLocalNotificationDirectOpen:(bool)arg1;
- (void)setHasLocalNotificationDirectOpenNumber:(bool)arg1;
- (void)setHasLocalNotificationSentTimestamp:(bool)arg1;
- (void)setHasLocalNotificationType:(bool)arg1;
- (void)setLocalNoticationNumberReceived:(int)arg1;
- (void)setLocalNotificationDirectOpen:(bool)arg1;
- (void)setLocalNotificationDirectOpenNumber:(int)arg1;
- (void)setLocalNotificationSentTimestamp:(long long)arg1;
- (void)setLocalNotificationType:(int)arg1;
- (void)writeTo:(id)arg1;

@end