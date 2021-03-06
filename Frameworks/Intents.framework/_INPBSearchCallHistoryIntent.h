/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchCallHistoryIntent : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _callCapabilities;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _callTypes;
    _INPBDateTimeRange * _dateCreated;
    struct { 
        unsigned int preferredCallProvider : 1; 
        unsigned int unseen : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _preferredCallProvider;
    _INPBContact * _recipient;
    PBUnknownFields * _unknownFields;
    bool  _unseen;
}

@property (nonatomic, readonly) int*callCapabilities;
@property (nonatomic, readonly) unsigned long long callCapabilitiesCount;
@property (nonatomic, readonly) int*callTypes;
@property (nonatomic, readonly) unsigned long long callTypesCount;
@property (nonatomic, retain) _INPBDateTimeRange *dateCreated;
@property (nonatomic, readonly) bool hasDateCreated;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasPreferredCallProvider;
@property (nonatomic, readonly) bool hasRecipient;
@property (nonatomic) bool hasUnseen;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic, retain) _INPBContact *recipient;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) bool unseen;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsCallCapabilities:(id)arg1;
- (int)StringAsCallTypes:(id)arg1;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (void)addCallCapabilities:(int)arg1;
- (void)addCallTypes:(int)arg1;
- (int*)callCapabilities;
- (id)callCapabilitiesAsString:(int)arg1;
- (int)callCapabilitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)callCapabilitiesCount;
- (int*)callTypes;
- (id)callTypesAsString:(int)arg1;
- (int)callTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)callTypesCount;
- (void)clearCallCapabilities;
- (void)clearCallTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateCreated;
- (bool)hasIntentMetadata;
- (bool)hasPreferredCallProvider;
- (bool)hasRecipient;
- (bool)hasUnseen;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)preferredCallProvider;
- (id)preferredCallProviderAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipient;
- (void)setCallCapabilities:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCallTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setDateCreated:(id)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setHasUnseen:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)setRecipient:(id)arg1;
- (void)setUnseen:(bool)arg1;
- (id)unknownFields;
- (bool)unseen;
- (void)writeTo:(id)arg1;

@end
