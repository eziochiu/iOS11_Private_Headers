/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForFilesIntentResponse : PBCodable <NSCopying> {
    NSMutableArray * _entities;
    struct { 
        unsigned int success : 1; 
    }  _has;
    _INPBInteger * _numResults;
    _INPBString * _query;
    bool  _success;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *entities;
@property (nonatomic, readonly) bool hasNumResults;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic) bool hasSuccess;
@property (nonatomic, retain) _INPBInteger *numResults;
@property (nonatomic, retain) _INPBString *query;
@property (nonatomic) bool success;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entitiesType;
+ (id)options;

- (void).cxx_destruct;
- (void)addEntities:(id)arg1;
- (void)clearEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entities;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (bool)hasNumResults;
- (bool)hasQuery;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)numResults;
- (id)query;
- (bool)readFrom:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setNumResults:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
