/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartAudioCallIntent : PBCodable <NSCopying> {
    int  _audioRoute;
    NSMutableArray * _contacts;
    int  _destinationType;
    struct { 
        unsigned int audioRoute : 1; 
        unsigned int destinationType : 1; 
        unsigned int preferredCallProvider : 1; 
        unsigned int ttyType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _preferredCallProvider;
    int  _ttyType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int audioRoute;
@property (nonatomic, retain) NSMutableArray *contacts;
@property (nonatomic) int destinationType;
@property (nonatomic) bool hasAudioRoute;
@property (nonatomic) bool hasDestinationType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasPreferredCallProvider;
@property (nonatomic) bool hasTtyType;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) int ttyType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)contactType;
+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAudioRoute:(id)arg1;
- (int)StringAsDestinationType:(id)arg1;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (int)StringAsTtyType:(id)arg1;
- (void)addContact:(id)arg1;
- (int)audioRoute;
- (id)audioRouteAsString:(int)arg1;
- (void)clearContacts;
- (id)contactAtIndex:(unsigned long long)arg1;
- (id)contacts;
- (unsigned long long)contactsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAudioRoute;
- (bool)hasDestinationType;
- (bool)hasIntentMetadata;
- (bool)hasPreferredCallProvider;
- (bool)hasTtyType;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)preferredCallProvider;
- (id)preferredCallProviderAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioRoute:(int)arg1;
- (void)setContacts:(id)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setHasTtyType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)setTtyType:(int)arg1;
- (int)ttyType;
- (id)ttyTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
