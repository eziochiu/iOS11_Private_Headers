/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _contentItems;
    _MRPlaybackQueueContextProtobuf * _context;
    struct { 
        unsigned int location : 1; 
        unsigned int notSendingTransaction : 1; 
    }  _has;
    int  _location;
    bool  _notSendingTransaction;
    NSString * _requestID;
    _MRNowPlayingPlayerPathProtobuf * _resolvedPlayerPath;
}

@property (nonatomic, retain) NSMutableArray *contentItems;
@property (nonatomic, retain) _MRPlaybackQueueContextProtobuf *context;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic) bool hasLocation;
@property (nonatomic) bool hasNotSendingTransaction;
@property (nonatomic, readonly) bool hasRequestID;
@property (nonatomic, readonly) bool hasResolvedPlayerPath;
@property (nonatomic) int location;
@property (nonatomic) bool notSendingTransaction;
@property (nonatomic, retain) NSString *requestID;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath;

+ (Class)contentItemType;

- (void)addContentItem:(id)arg1;
- (void)clearContentItems;
- (id)contentItemAtIndex:(unsigned long long)arg1;
- (id)contentItems;
- (unsigned long long)contentItemsCount;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasLocation;
- (bool)hasNotSendingTransaction;
- (bool)hasRequestID;
- (bool)hasResolvedPlayerPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)location;
- (void)mergeFrom:(id)arg1;
- (bool)notSendingTransaction;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (id)resolvedPlayerPath;
- (void)setContentItems:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setHasNotSendingTransaction:(bool)arg1;
- (void)setLocation:(int)arg1;
- (void)setNotSendingTransaction:(bool)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResolvedPlayerPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
