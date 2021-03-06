/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBNote : PBCodable <NSCopying> {
    NSMutableArray * _contents;
    _INPBDateTime * _createdDateTime;
    _INPBDataString * _groupName;
    NSString * _identifier;
    _INPBDateTime * _modifiedDateTime;
    _INPBDataString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *contents;
@property (nonatomic, retain) _INPBDateTime *createdDateTime;
@property (nonatomic, retain) _INPBDataString *groupName;
@property (nonatomic, readonly) bool hasCreatedDateTime;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasModifiedDateTime;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) _INPBDateTime *modifiedDateTime;
@property (nonatomic, retain) _INPBDataString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)contentType;
+ (id)options;

- (void).cxx_destruct;
- (void)addContent:(id)arg1;
- (void)clearContents;
- (id)contentAtIndex:(unsigned long long)arg1;
- (id)contents;
- (unsigned long long)contentsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDateTime;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupName;
- (bool)hasCreatedDateTime;
- (bool)hasGroupName;
- (bool)hasIdentifier;
- (bool)hasModifiedDateTime;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modifiedDateTime;
- (bool)readFrom:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setCreatedDateTime:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModifiedDateTime:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
