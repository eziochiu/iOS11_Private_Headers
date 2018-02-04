/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntry : PBCodable <NSCopying> {
    GEOPDAutocompleteEntryAddress * _address;
    GEOPDAutocompleteEntryBrandProfile * _brandProfile;
    GEOPDAutocompleteEntryBusiness * _business;
    GEOPDAutocompleteEntryCategory * _category;
    struct { 
        unsigned int type : 1; 
    }  _has;
    GEOPDAutocompleteEntryHighlightLine * _highlightExtra;
    GEOPDAutocompleteEntryHighlightLine * _highlightMain;
    GEOPDAutocompleteEntryQuery * _query;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDAutocompleteEntryAddress *address;
@property (nonatomic, retain) GEOPDAutocompleteEntryBrandProfile *brandProfile;
@property (nonatomic, retain) GEOPDAutocompleteEntryBusiness *business;
@property (nonatomic, retain) GEOPDAutocompleteEntryCategory *category;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic, readonly) bool hasBrandProfile;
@property (nonatomic, readonly) bool hasBusiness;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) bool hasHighlightExtra;
@property (nonatomic, readonly) bool hasHighlightMain;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) GEOPDAutocompleteEntryHighlightLine *highlightExtra;
@property (nonatomic, retain) GEOPDAutocompleteEntryHighlightLine *highlightMain;
@property (nonatomic, retain) GEOPDAutocompleteEntryQuery *query;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)address;
- (id)brandProfile;
- (id)business;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasBrandProfile;
- (bool)hasBusiness;
- (bool)hasCategory;
- (bool)hasHighlightExtra;
- (bool)hasHighlightMain;
- (bool)hasQuery;
- (bool)hasType;
- (unsigned long long)hash;
- (id)highlightExtra;
- (id)highlightMain;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setBrandProfile:(id)arg1;
- (void)setBusiness:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHighlightExtra:(id)arg1;
- (void)setHighlightMain:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end