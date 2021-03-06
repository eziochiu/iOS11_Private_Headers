/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppBuild : PBCodable <NSCopying> {
    _INPBAppId * _appId;
    _INPBBuildId * _buildId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBAppId *appId;
@property (nonatomic, retain) _INPBBuildId *buildId;
@property (nonatomic, readonly) bool hasAppId;
@property (nonatomic, readonly) bool hasBuildId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)appId;
- (id)buildId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppId;
- (bool)hasBuildId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setBuildId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
