/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying> {
    _MRNowPlayingClientProtobuf * _client;
    _MROriginProtobuf * _origin;
    _MRNowPlayingPlayerProtobuf * _player;
}

@property (nonatomic, retain) _MRNowPlayingClientProtobuf *client;
@property (nonatomic, readonly) bool hasClient;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic, readonly) bool hasPlayer;
@property (nonatomic, retain) _MROriginProtobuf *origin;
@property (nonatomic, retain) _MRNowPlayingPlayerProtobuf *player;

+ (void)initialize;

- (id)client;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDescription;
- (id)customDictionaryRepresentation;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClient;
- (bool)hasOrigin;
- (bool)hasPlayer;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)origin;
- (id)player;
- (bool)readFrom:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)writeTo:(id)arg1;

@end