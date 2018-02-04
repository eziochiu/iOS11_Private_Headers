/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMoveFileIntentResponse : PBCodable <NSCopying> {
    _INPBString * _destinationName;
    NSMutableArray * _entityNames;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _entityTypes;
    struct { 
        unsigned int overwrite : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _overwrite;
    _INPBString * _sourceName;
    bool  _success;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBString *destinationName;
@property (nonatomic, retain) NSMutableArray *entityNames;
@property (nonatomic, readonly) int*entityTypes;
@property (nonatomic, readonly) unsigned long long entityTypesCount;
@property (nonatomic, readonly) bool hasDestinationName;
@property (nonatomic) bool hasOverwrite;
@property (nonatomic, readonly) bool hasSourceName;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool overwrite;
@property (nonatomic, retain) _INPBString *sourceName;
@property (nonatomic) bool success;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entityNameType;
+ (id)options;

- (void).cxx_destruct;
- (int)StringAsEntityTypes:(id)arg1;
- (void)addEntityName:(id)arg1;
- (void)addEntityType:(int)arg1;
- (void)clearEntityNames;
- (void)clearEntityTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationName;
- (id)dictionaryRepresentation;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (id)entityNames;
- (unsigned long long)entityNamesCount;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (int*)entityTypes;
- (id)entityTypesAsString:(int)arg1;
- (unsigned long long)entityTypesCount;
- (bool)hasDestinationName;
- (bool)hasOverwrite;
- (bool)hasSourceName;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)overwrite;
- (bool)readFrom:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setEntityNames:(id)arg1;
- (void)setEntityTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasOverwrite:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setOverwrite:(bool)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (id)sourceName;
- (bool)success;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end