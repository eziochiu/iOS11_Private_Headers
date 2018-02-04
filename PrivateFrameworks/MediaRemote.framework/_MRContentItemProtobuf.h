/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRContentItemProtobuf : PBCodable <NSCopying> {
    NSString * _ancestorIdentifier;
    NSData * _artworkData;
    NSMutableArray * _availableLanguageOptions;
    NSMutableArray * _currentLanguageOptions;
    NSString * _identifier;
    NSString * _info;
    _MRLyricsItemProtobuf * _lyrics;
    _MRContentItemMetadataProtobuf * _metadata;
    NSString * _parentIdentifier;
    NSString * _queueIdentifier;
    NSString * _requestIdentifier;
    NSMutableArray * _sections;
}

@property (nonatomic, retain) NSString *ancestorIdentifier;
@property (nonatomic, retain) NSData *artworkData;
@property (nonatomic, retain) NSMutableArray *availableLanguageOptions;
@property (nonatomic, retain) NSMutableArray *currentLanguageOptions;
@property (nonatomic, readonly) bool hasAncestorIdentifier;
@property (nonatomic, readonly) bool hasArtworkData;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasInfo;
@property (nonatomic, readonly) bool hasLyrics;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasParentIdentifier;
@property (nonatomic, readonly) bool hasQueueIdentifier;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *info;
@property (nonatomic, retain) _MRLyricsItemProtobuf *lyrics;
@property (nonatomic, retain) _MRContentItemMetadataProtobuf *metadata;
@property (nonatomic, retain) NSString *parentIdentifier;
@property (nonatomic, retain) NSString *queueIdentifier;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic, retain) NSMutableArray *sections;

+ (Class)availableLanguageOptionsType;
+ (Class)currentLanguageOptionsType;
+ (void)initialize;
+ (Class)sectionsType;

- (id)_init;
- (id)_initWithData:(id)arg1;
- (void)addAvailableLanguageOptions:(id)arg1;
- (void)addCurrentLanguageOptions:(id)arg1;
- (void)addSections:(id)arg1;
- (id)ancestorIdentifier;
- (id)artworkData;
- (id)availableLanguageOptions;
- (id)availableLanguageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)availableLanguageOptionsCount;
- (void)clearAvailableLanguageOptions;
- (void)clearCurrentLanguageOptions;
- (void)clearSections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentLanguageOptions;
- (id)currentLanguageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentLanguageOptionsCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAncestorIdentifier;
- (bool)hasArtworkData;
- (bool)hasIdentifier;
- (bool)hasInfo;
- (bool)hasLyrics;
- (bool)hasMetadata;
- (bool)hasParentIdentifier;
- (bool)hasQueueIdentifier;
- (bool)hasRequestIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)info;
- (bool)isEqual:(id)arg1;
- (id)lyrics;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (id)parentIdentifier;
- (id)queueIdentifier;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (id)sections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setAncestorIdentifier:(id)arg1;
- (void)setArtworkData:(id)arg1;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setCurrentLanguageOptions:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setLyrics:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSections:(id)arg1;
- (void)writeTo:(id)arg1;

@end
