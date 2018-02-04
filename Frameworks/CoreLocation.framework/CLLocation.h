/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocation : NSObject <CKRecordValue, NSCopying, NSSecureCoding> {
    id  _internal;
}

@property (nonatomic, readonly) int _mapkit_source;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; } clientLocation;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly) double course;
@property (getter=_navigation_courseAccuracy, nonatomic, readonly) double courseAccuracy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_navigation_detailedMatchInfo, nonatomic, readonly) GEONavigationMatchInfo *detailedMatchInfo;
@property (nonatomic, readonly, copy) CLFloor *floor;
@property (getter=_navigation_gtLog, setter=_navigation_setGtLog:, nonatomic) bool gtLog;
@property (getter=_navigation_hasMatch, nonatomic, readonly) bool hasMatch;
@property (getter=_navigation_hasValidCourse, nonatomic, readonly) bool hasValidCourse;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic, readonly) unsigned int integrity;
@property (getter=_navigation_isStale, nonatomic, readonly) bool isStale;
@property (nonatomic, readonly) NSString *iso6709Notation;
@property (getter=_navigation_locationDescription, nonatomic, readonly) NSString *locationDescription;
@property (nonatomic, readonly) CLLocationMatchInfo *matchInfo;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } rawCoordinate;
@property (nonatomic, readonly) double rawCourse;
@property (getter=_navigation_rawShiftedCoordinate, nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } rawShiftedCoordinate;
@property (nonatomic) int referenceFrame;
@property (getter=_navigation_routeMatch, nonatomic, readonly) GEORouteMatch *routeMatch;
@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) double speedAccuracy;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly) double trustedTimestamp;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) double verticalAccuracy;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (bool)supportsSecureCoding;

- (id)_initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 floor:(int)arg8;
- (double)altitude;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; })clientLocation;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (void)dealloc;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)floor;
- (double)getDistanceFrom:(id)arg1;
- (double)horizontalAccuracy;
- (id)init;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; })arg1;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; })arg1 matchInfo:(id)arg2;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; })arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (unsigned int)integrity;
- (id)iso6709Notation;
- (id)jsonObject;
- (id)matchInfo;
- (id)propagateLocationToTime:(double)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })rawCoordinate;
- (double)rawCourse;
- (int)referenceFrame;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setReferenceFrame:(int)arg1;
- (id)shortDescription;
- (id)snapToResolution:(double)arg1;
- (double)speed;
- (double)speedAccuracy;
- (id)timestamp;
- (double)trustedTimestamp;
- (int)type;
- (void)unmatch;
- (double)verticalAccuracy;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKDPLocationCoordinateFromCLLocation:(id)arg1;
+ (id)CKLocationFromPLocationCoordinate:(id)arg1;

- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (double)_mapkit_timeToExpire;

- (int)_mapkit_source;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (unsigned int)atx_locationHash;

// Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit

- (id)cam_videoMetadataRepresentation;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)cam_videoMetadataRepresentation;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (unsigned long long)cplSpecialHash;
- (bool)cplSpecialIsEqual:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigation_stringWithType:(int)arg1;

- (double)_navigation_courseAccuracy;
- (id)_navigation_detailedMatchInfo;
- (bool)_navigation_gtLog;
- (bool)_navigation_hasMatch;
- (bool)_navigation_hasValidCourse;
- (bool)_navigation_isEqualToLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (bool)_navigation_isStale;
- (id)_navigation_locationDescription;
- (struct CLLocationCoordinate2D { double x1; double x2; })_navigation_rawShiftedCoordinate;
- (id)_navigation_routeMatch;
- (void)_navigation_setGtLog:(bool)arg1;
- (double)_navigation_speedAccuracy;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 rawCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12 referenceFrame:(int)arg13;
- (id)initWithGeoLocation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

- (id)timeZone;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (int)pl_locationHash;
- (id)pl_newSurroundingLocationsHashes;

// Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds

- (id)snappedToGrid:(double)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

- (bool)wf_isEquivalentToLocation:(id)arg1 tolerance:(double)arg2;

@end