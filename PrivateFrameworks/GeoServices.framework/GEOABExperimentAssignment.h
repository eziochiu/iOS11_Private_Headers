/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABExperimentAssignment : PBCodable <NSCopying> {
    GEOABDebugPanelExperimentBranch * _debugExperimentBranch;
    struct { 
        unsigned int placeRequestType : 1; 
        unsigned int serviceType : 1; 
    }  _has;
    int  _placeRequestType;
    NSString * _querySubstring;
    int  _serviceType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (nonatomic, readonly) bool hasDebugExperimentBranch;
@property (nonatomic) bool hasPlaceRequestType;
@property (nonatomic, readonly) bool hasQuerySubstring;
@property (nonatomic) bool hasServiceType;
@property (nonatomic) int placeRequestType;
@property (nonatomic, retain) NSString *querySubstring;
@property (nonatomic) int serviceType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsPlaceRequestType:(id)arg1;
- (int)StringAsServiceType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugExperimentBranch;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDebugExperimentBranch;
- (bool)hasPlaceRequestType;
- (bool)hasQuerySubstring;
- (bool)hasServiceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)placeRequestType;
- (id)placeRequestTypeAsString:(int)arg1;
- (id)querySubstring;
- (bool)readFrom:(id)arg1;
- (int)serviceType;
- (id)serviceTypeAsString:(int)arg1;
- (void)setDebugExperimentBranch:(id)arg1;
- (void)setHasPlaceRequestType:(bool)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setPlaceRequestType:(int)arg1;
- (void)setQuerySubstring:(id)arg1;
- (void)setServiceType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end