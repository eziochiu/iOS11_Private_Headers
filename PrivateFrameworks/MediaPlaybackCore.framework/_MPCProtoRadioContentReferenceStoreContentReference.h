/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCProtoRadioContentReferenceStoreContentReference : PBCodable <NSCopying> {
    struct { 
        unsigned int storeAdamID : 1; 
    }  _has;
    long long  _storeAdamID;
}

@property (nonatomic) bool hasStoreAdamID;
@property (nonatomic) long long storeAdamID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStoreAdamID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStoreAdamID:(bool)arg1;
- (void)setStoreAdamID:(long long)arg1;
- (long long)storeAdamID;
- (void)writeTo:(id)arg1;

@end