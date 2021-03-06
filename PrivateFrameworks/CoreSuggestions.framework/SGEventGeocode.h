/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGEventGeocode : NSObject

+ (id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2;
+ (id)geocodeEvent:(id)arg1;
+ (void)geocodeEvent:(id)arg1 withCallback:(id /* block */)arg2;
+ (void)geocodeLocation:(id)arg1 withCallback:(id /* block */)arg2;
+ (bool)isGeocodeCandidate:(id)arg1;
+ (bool)isGeocodeCandidateLocation:(id)arg1 forEvent:(id)arg2;
+ (bool)locationIsAirport:(id)arg1;
+ (bool)locationIsGeocoded:(id)arg1;

@end
