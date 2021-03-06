/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCelestialEphemeris : NSObject {
    long long  _body;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSDate * _date;
    GEOSolarEclipticCelestialBodyData * _eclipticCoord;
    double  _elongation;
    GEOEquatorialCelestialBodyData * _equatorialCoord;
    GEOHorizontalCelestialBodyData * _horizontalCoord;
    double  _illuminatedFraction;
    double  _parallacticAngle;
    double  _phaseAngle;
    NSDate * _rise;
    NSDate * _set;
    NSDate * _transit;
}

@property (nonatomic, readonly) GEOSolarEclipticCelestialBodyData *eclipticCoord;
@property (nonatomic, readonly) double elongation;
@property (nonatomic, readonly) GEOEquatorialCelestialBodyData *equatorialCoord;
@property (nonatomic, readonly) GEOHorizontalCelestialBodyData *horizontalCoord;
@property (nonatomic, readonly) double illuminatedFraction;
@property (nonatomic, readonly) double parallacticAngle;
@property (nonatomic, readonly) double phaseAngle;
@property (nonatomic, readonly) NSDate *rise;
@property (nonatomic, readonly) NSDate *set;
@property (nonatomic, readonly) NSDate *transit;

- (void).cxx_destruct;
- (void)_getRightAscension:(double*)arg1 declination:(double*)arg2 forJulianDay:(double)arg3 forBody:(long long)arg4;
- (struct CAARiseTransitSetDetails { bool x1; double x2; bool x3; double x4; bool x5; double x6; })_riseTransitSetForBody:(long long)arg1;
- (id)eclipticCoord;
- (double)elongation;
- (id)equatorialCoord;
- (id)horizontalCoord;
- (double)illuminatedFraction;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 date:(id)arg2 body:(long long)arg3;
- (double)parallacticAngle;
- (double)phaseAngle;
- (id)rise;
- (id)set;
- (id)transit;

@end
