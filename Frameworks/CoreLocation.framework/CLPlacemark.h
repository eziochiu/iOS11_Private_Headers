/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding> {
    CLPlacemarkInternal * _internal;
}

@property (nonatomic, readonly, copy) NSString *ISOcountryCode;
@property (nonatomic, readonly, copy) NSDictionary *addressDictionary;
@property (nonatomic, readonly, copy) NSString *administrativeArea;
@property (nonatomic, readonly) NSString *administrativeAreaCode;
@property (nonatomic, readonly, copy) NSArray *areasOfInterest;
@property (nonatomic, readonly, copy) NSString *country;
@property (nonatomic, readonly) NSString *fullAdministrativeArea;
@property (nonatomic, readonly, copy) NSString *inlandWater;
@property (nonatomic, readonly) bool isIsland;
@property (nonatomic, readonly) bool isOcean;
@property (nonatomic, readonly, copy) NSString *locality;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *ocean;
@property (nonatomic, readonly) CNPostalAddress *postalAddress;
@property (nonatomic, readonly, copy) NSString *postalCode;
@property (nonatomic, readonly, copy) CLRegion *region;
@property (nonatomic, readonly, copy) NSString *subAdministrativeArea;
@property (nonatomic, readonly, copy) NSString *subLocality;
@property (nonatomic, readonly, copy) NSString *subThoroughfare;
@property (nonatomic, readonly, copy) NSString *thoroughfare;
@property (nonatomic, readonly, copy) NSTimeZone *timeZone;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (id)placemarkWithGEOMapItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)ISOcountryCode;
- (id)_geoMapItem;
- (id)_initWithGeoMapItem:(id)arg1;
- (id)addressDictionary;
- (id)administrativeArea;
- (id)areasOfInterest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)initWithPlacemark:(id)arg1;
- (id)inlandWater;
- (id)locality;
- (id)location;
- (id)name;
- (id)ocean;
- (id)postalAddress;
- (id)postalCode;
- (id)region;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)timeZone;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3;

- (id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)commonPresentationStringWithPlacemarks:(id)arg1 options:(unsigned long long*)arg2;
+ (id)placemarkFromLitePlacemark:(id)arg1;
+ (unsigned long long)presentationOptionsForPlacemarks:(id)arg1;
+ (id)presentationStringForPlacemarks:(id)arg1 options:(unsigned long long)arg2;

- (id)administrativeAreaCode;
- (int)cls_precisePlaceType;
- (id)fullAdministrativeArea;
- (bool)isEqualToPlacemark:(id)arg1;
- (bool)isIsland;
- (bool)isOcean;
- (id)presentationString:(unsigned long long*)arg1;
- (id)timeZone;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)_px_dynamicLocationString;
- (id)px_subtitle;
- (id)px_title;

@end
