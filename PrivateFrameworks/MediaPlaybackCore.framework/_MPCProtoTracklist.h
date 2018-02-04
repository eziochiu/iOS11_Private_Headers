/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCProtoTracklist : PBCodable <NSCopying> {
    NSMutableArray * _accountInfos;
    NSMutableArray * _containers;
    _MPCProtoTracklistIndexPath * _startingItemIndexPath;
}

@property (nonatomic, retain) NSMutableArray *accountInfos;
@property (nonatomic, retain) NSMutableArray *containers;
@property (nonatomic, readonly) bool hasStartingItemIndexPath;
@property (nonatomic, retain) _MPCProtoTracklistIndexPath *startingItemIndexPath;

+ (Class)accountInfoType;
+ (Class)containerType;

- (void).cxx_destruct;
- (id)accountInfoAtIndex:(unsigned long long)arg1;
- (id)accountInfos;
- (unsigned long long)accountInfosCount;
- (void)addAccountInfo:(id)arg1;
- (void)addContainer:(id)arg1;
- (void)clearAccountInfos;
- (void)clearContainers;
- (id)containerAtIndex:(unsigned long long)arg1;
- (id)containers;
- (unsigned long long)containersCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStartingItemIndexPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountInfos:(id)arg1;
- (void)setContainers:(id)arg1;
- (void)setStartingItemIndexPath:(id)arg1;
- (id)startingItemIndexPath;
- (void)writeTo:(id)arg1;

@end
