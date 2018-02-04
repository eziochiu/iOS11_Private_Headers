/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceFormattedString : PBCodable <NSCopying> {
    GEOFormattedString * _contactHome;
    GEOFormattedString * _contactOther;
    GEOFormattedString * _contactWork;
    GEOFormattedString * _custom;
    GEOFormattedString * _home;
    GEOFormattedString * _pointOfInterest;
    GEOFormattedString * _streetAddress;
    GEOFormattedString * _unknown;
    GEOFormattedString * _work;
}

@property (nonatomic, retain) GEOFormattedString *contactHome;
@property (nonatomic, retain) GEOFormattedString *contactOther;
@property (nonatomic, retain) GEOFormattedString *contactWork;
@property (nonatomic, retain) GEOFormattedString *custom;
@property (nonatomic, readonly) bool hasContactHome;
@property (nonatomic, readonly) bool hasContactOther;
@property (nonatomic, readonly) bool hasContactWork;
@property (nonatomic, readonly) bool hasCustom;
@property (nonatomic, readonly) bool hasHome;
@property (nonatomic, readonly) bool hasPointOfInterest;
@property (nonatomic, readonly) bool hasStreetAddress;
@property (nonatomic, readonly) bool hasUnknown;
@property (nonatomic, readonly) bool hasWork;
@property (nonatomic, retain) GEOFormattedString *home;
@property (nonatomic, retain) GEOFormattedString *pointOfInterest;
@property (nonatomic, retain) GEOFormattedString *streetAddress;
@property (nonatomic, retain) GEOFormattedString *unknown;
@property (nonatomic, retain) GEOFormattedString *work;

- (void).cxx_destruct;
- (id)contactHome;
- (id)contactOther;
- (id)contactWork;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custom;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContactHome;
- (bool)hasContactOther;
- (bool)hasContactWork;
- (bool)hasCustom;
- (bool)hasHome;
- (bool)hasPointOfInterest;
- (bool)hasStreetAddress;
- (bool)hasUnknown;
- (bool)hasWork;
- (unsigned long long)hash;
- (id)home;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pointOfInterest;
- (bool)readFrom:(id)arg1;
- (void)setContactHome:(id)arg1;
- (void)setContactOther:(id)arg1;
- (void)setContactWork:(id)arg1;
- (void)setCustom:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setPointOfInterest:(id)arg1;
- (void)setStreetAddress:(id)arg1;
- (void)setUnknown:(id)arg1;
- (void)setWork:(id)arg1;
- (id)streetAddress;
- (id)unknown;
- (id)work;
- (void)writeTo:(id)arg1;

@end