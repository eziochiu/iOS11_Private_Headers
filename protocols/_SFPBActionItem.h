/* made by EzioChiu.
 */

@protocol _SFPBActionItem <NSObject>

@required

- (void)addStoreIdentifiers:(NSString *)arg1;
- (NSString *)applicationBundleIdentifier;
- (_SFPBImage *)baseIcon;
- (void)clearStoreIdentifiers;
- (NSString *)contactIdentifier;
- (NSString *)email;
- (bool)hasApplicationBundleIdentifier;
- (bool)hasBaseIcon;
- (bool)hasContactIdentifier;
- (bool)hasEmail;
- (bool)hasIcon;
- (bool)hasIsITunes;
- (bool)hasIsOverlay;
- (bool)hasLabel;
- (bool)hasLabelForLocalMedia;
- (bool)hasLabelITunes;
- (bool)hasLatitude;
- (bool)hasLocalMediaIdentifier;
- (bool)hasLocation;
- (bool)hasLongitude;
- (bool)hasMapsData;
- (bool)hasMessageIdentifier;
- (bool)hasMessageURL;
- (bool)hasOfferType;
- (bool)hasPhoneNumber;
- (bool)hasProvider;
- (bool)hasPunchout;
- (bool)hasRequiresLocalMedia;
- (bool)hasType;
- (_SFPBImage *)icon;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isITunes;
- (bool)isOverlay;
- (NSData *)jsonData;
- (NSString *)label;
- (NSString *)labelForLocalMedia;
- (NSString *)labelITunes;
- (_SFPBGraphicalFloat *)latitude;
- (NSString *)localMediaIdentifier;
- (_SFPBLatLng *)location;
- (_SFPBGraphicalFloat *)longitude;
- (NSData *)mapsData;
- (NSString *)messageIdentifier;
- (_SFPBURL *)messageURL;
- (NSString *)offerType;
- (NSString *)phoneNumber;
- (NSString *)provider;
- (_SFPBPunchout *)punchout;
- (bool)requiresLocalMedia;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setBaseIcon:(_SFPBImage *)arg1;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setEmail:(NSString *)arg1;
- (void)setIcon:(_SFPBImage *)arg1;
- (void)setIsITunes:(bool)arg1;
- (void)setIsOverlay:(bool)arg1;
- (void)setLabel:(NSString *)arg1;
- (void)setLabelForLocalMedia:(NSString *)arg1;
- (void)setLabelITunes:(NSString *)arg1;
- (void)setLatitude:(_SFPBGraphicalFloat *)arg1;
- (void)setLocalMediaIdentifier:(NSString *)arg1;
- (void)setLocation:(_SFPBLatLng *)arg1;
- (void)setLongitude:(_SFPBGraphicalFloat *)arg1;
- (void)setMapsData:(NSData *)arg1;
- (void)setMessageIdentifier:(NSString *)arg1;
- (void)setMessageURL:(_SFPBURL *)arg1;
- (void)setOfferType:(NSString *)arg1;
- (void)setPhoneNumber:(NSString *)arg1;
- (void)setProvider:(NSString *)arg1;
- (void)setPunchout:(_SFPBPunchout *)arg1;
- (void)setRequiresLocalMedia:(bool)arg1;
- (void)setStoreIdentifiers:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (NSArray *)storeIdentifiers;
- (NSString *)storeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)storeIdentifiersCount;
- (NSString *)type;

@end