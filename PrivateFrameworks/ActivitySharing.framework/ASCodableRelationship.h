/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableRelationship : PBCodable <NSCopying> {
    NSMutableArray * _addresses;
    NSString * _cloudKitAddress;
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSString * _incomingHandshakeToken;
    NSString * _outgoingHandshakeToken;
    NSString * _preferredReachableAddress;
    NSString * _preferredReachableService;
    NSMutableArray * _relationshipEvents;
    NSData * _relationshipShareID;
    NSData * _remoteActivityShareID;
    NSData * _remoteRelationshipShareID;
    NSData * _systemFieldsOnlyRecord;
    NSData * _uuid;
    long long  _version;
}

@property (nonatomic, retain) NSMutableArray *addresses;
@property (nonatomic, retain) NSString *cloudKitAddress;
@property (nonatomic, readonly) bool hasCloudKitAddress;
@property (nonatomic, readonly) bool hasIncomingHandshakeToken;
@property (nonatomic, readonly) bool hasOutgoingHandshakeToken;
@property (nonatomic, readonly) bool hasPreferredReachableAddress;
@property (nonatomic, readonly) bool hasPreferredReachableService;
@property (nonatomic, readonly) bool hasRelationshipShareID;
@property (nonatomic, readonly) bool hasRemoteActivityShareID;
@property (nonatomic, readonly) bool hasRemoteRelationshipShareID;
@property (nonatomic, readonly) bool hasSystemFieldsOnlyRecord;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *incomingHandshakeToken;
@property (nonatomic, retain) NSString *outgoingHandshakeToken;
@property (nonatomic, retain) NSString *preferredReachableAddress;
@property (nonatomic, retain) NSString *preferredReachableService;
@property (nonatomic, retain) NSMutableArray *relationshipEvents;
@property (nonatomic, retain) NSData *relationshipShareID;
@property (nonatomic, retain) NSData *remoteActivityShareID;
@property (nonatomic, retain) NSData *remoteRelationshipShareID;
@property (nonatomic, retain) NSData *systemFieldsOnlyRecord;
@property (nonatomic, retain) NSData *uuid;
@property (nonatomic) long long version;

+ (Class)addressesType;
+ (Class)relationshipEventsType;

- (void).cxx_destruct;
- (void)addAddresses:(id)arg1;
- (void)addRelationshipEvents:(id)arg1;
- (id)addresses;
- (id)addressesAtIndex:(unsigned long long)arg1;
- (unsigned long long)addressesCount;
- (void)clearAddresses;
- (void)clearRelationshipEvents;
- (id)cloudKitAddress;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCloudKitAddress;
- (bool)hasIncomingHandshakeToken;
- (bool)hasOutgoingHandshakeToken;
- (bool)hasPreferredReachableAddress;
- (bool)hasPreferredReachableService;
- (bool)hasRelationshipShareID;
- (bool)hasRemoteActivityShareID;
- (bool)hasRemoteRelationshipShareID;
- (bool)hasSystemFieldsOnlyRecord;
- (bool)hasUuid;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)incomingHandshakeToken;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outgoingHandshakeToken;
- (id)preferredReachableAddress;
- (id)preferredReachableService;
- (bool)readFrom:(id)arg1;
- (id)relationshipEvents;
- (id)relationshipEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)relationshipEventsCount;
- (id)relationshipShareID;
- (id)remoteActivityShareID;
- (id)remoteRelationshipShareID;
- (void)setAddresses:(id)arg1;
- (void)setCloudKitAddress:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIncomingHandshakeToken:(id)arg1;
- (void)setOutgoingHandshakeToken:(id)arg1;
- (void)setPreferredReachableAddress:(id)arg1;
- (void)setPreferredReachableService:(id)arg1;
- (void)setRelationshipEvents:(id)arg1;
- (void)setRelationshipShareID:(id)arg1;
- (void)setRemoteActivityShareID:(id)arg1;
- (void)setRemoteRelationshipShareID:(id)arg1;
- (void)setSystemFieldsOnlyRecord:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)systemFieldsOnlyRecord;
- (id)uuid;
- (long long)version;
- (void)writeTo:(id)arg1;

@end